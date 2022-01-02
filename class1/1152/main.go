package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strings"
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
	space := 0
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	word, err := r.ReadString('\n')
	word = strings.TrimSpace(word)
	slice := strings.Split(word, " ")
	if err != nil {
		log.Fatalln(err)
	}
	for _, value := range slice {
		if value != "" {
			space++
		}
	}
	_, err = fmt.Fprintln(w, space)
	if err != nil {
		log.Fatalln(err)
	}
}
