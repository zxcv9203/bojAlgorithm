package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"strconv"
)

var (
	r *bufio.Reader
	w *bufio.Writer
)

func init() {
	r = bufio.NewReader(os.Stdin)
	w = bufio.NewWriter(os.Stdout)
}

func reverse(rev string) string {
	runes := []rune(rev)
	for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	return string(runes)
}

func main() {
	h, m := "", ""
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	_, err := fmt.Fscanf(r, "%s %s", &h, &m)
	if err != nil {
		log.Fatalln(err)
	}
	h = reverse(h)
	m = reverse(m)
	a, err := strconv.Atoi(h)
	if err != nil {
		log.Fatalln(err)
	}
	b, err := strconv.Atoi(m)
	if err != nil {
		log.Fatalln(err)
	}
	if a > b {
		fmt.Println(a)
	} else {
		fmt.Println(b)
	}
}
