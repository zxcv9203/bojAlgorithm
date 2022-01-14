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
	for i := 1; i <= n; i++ {
		_, err = fmt.Fprintf(w, "%d\n", i)
		if err != nil {
			log.Fatalln(err)
		}
	}
}
