package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
)

var (
	r *bufio.Reader
	w *bufio.Writer
)

func init() {
	r = bufio.NewReader(os.Stdin)
	w = bufio.NewWriter(os.Stdout)
}

func main() {
	n := 0
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	_, err := fmt.Fscan(r, &n)
	if err != nil {
		log.Fatalln(err)
	}
	for i := 0; i < n; i++ {
		rev := 0
		s := ""
		_, err = fmt.Fscan(r, &rev, &s)
		if err != nil {
			log.Fatalln(err)
		}
		for _, value := range s {
			for j := 0; j < rev; j++ {
				_, err = fmt.Fprintf(w, "%c", value)
				if err != nil {
					log.Fatalln(err)
				}
			}
		}
		_, err = fmt.Fprintln(w)
		if err != nil {
			log.Fatalln(err)
		}
	}
}
