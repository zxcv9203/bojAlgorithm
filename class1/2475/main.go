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
	total := 0
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	for i := 0; i < 5; i++ {
		tmp := 0
		_, err := fmt.Fscan(r, &tmp)
		if err != nil {
			log.Fatalln(err)
		}
		tmp *= tmp
		total += tmp
	}
	_, err := fmt.Fprintln(w, total%10)
	if err != nil {
		log.Fatalln(err)
	}
}
