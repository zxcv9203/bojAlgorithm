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
	year := 0
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	_, err := fmt.Fscan(r, &year)
	if err != nil {
		log.Fatalln(err)
	}
	if year%400 == 0 || (year%100 != 0 && year%4 == 0) {
		_, err = fmt.Fprintln(w, 1)
		if err != nil {
			log.Fatalln(err)
		}
	} else {
		_, err = fmt.Fprintln(w, 0)
		if err != nil {
			log.Fatalln(err)
		}
	}
}
