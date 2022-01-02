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
	var a, b float64

	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	_, err := fmt.Fscan(r, &a, &b)
	if err != nil {
		log.Fatalln(err)
	}
	_, err = fmt.Fprintln(w, a/b)
	if err != nil {
		log.Fatalln(err)
	}
}
