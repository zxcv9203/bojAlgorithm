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

func main() {
	var count [10]int
	total := 1
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	for i := 0; i < 3; i++ {
		tmp := 0
		_, err := fmt.Fscan(r, &tmp)
		if err != nil {
			log.Fatalln(err)
		}
		total *= tmp
	}
	ans := strconv.Itoa(total)
	for _, value := range ans {
		count[int(value)-'0']++
	}
	for i := range count {
		_, err := fmt.Fprintln(w, count[i])
		if err != nil {
			log.Fatalln(err)
		}
	}
}
