package main

import (
	"bufio"
	"fmt"
	"log"
	"os"
	"unicode"
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
	var alpha [26]int
	word := ""
	max := 0
	ans := ""
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	_, err := fmt.Fscan(r, &word)
	if err != nil {
		log.Fatalln(err)
	}
	for _, value := range word {
		char := unicode.ToUpper(value)
		cnt := &alpha[char-'A']
		*cnt++
		if max == *cnt {
			ans = "?"
		} else if max < *cnt {
			ans = string(char)
			max = *cnt
		}
	}
	_, err = fmt.Fprintln(w, ans)
	if err != nil {
		log.Fatalln(err)
	}
}
