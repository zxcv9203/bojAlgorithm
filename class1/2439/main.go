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
	var n int
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
		for j := 1; j <= n; j++ {
			if n-i <= j {
				_, err := fmt.Fprint(w, "*")
				if err != nil {
					log.Fatalln(err)
				}
			} else {
				_, err := fmt.Fprint(w, " ")
				if err != nil {
					log.Fatalln(err)
				}
			}

		}
		_, err := fmt.Fprintln(w)
		if err != nil {
			log.Fatalln(err)
		}
	}
}
