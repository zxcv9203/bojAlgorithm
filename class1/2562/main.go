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
	var idx, num int
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	for i := 1; i <= 9; i++ {
		tmp := 0
		_, err := fmt.Fscan(r, &tmp)
		if err != nil {
			log.Fatalln(err)
		}
		if tmp > num {
			num = tmp
			idx = i
		}
	}
	fmt.Printf("%d\n%d\n", num, idx)
}
