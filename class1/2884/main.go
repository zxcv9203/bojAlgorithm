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
	h, m := 0, 0
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	_, err := fmt.Fscanf(r, "%d %d", &h, &m)
	if err != nil {
		log.Fatalln(err)
	}
	m -= 45
	if m < 0 {
		h -= 1
		m = 60 + m
	}
	if h < 0 {
		h = 24 + h
	}
	_, err = fmt.Fprintln(w, h, m)
	if err != nil {
		log.Fatalln(err)
	}
}
