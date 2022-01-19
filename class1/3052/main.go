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
	var arr [42]bool
	cnt := 10
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	for i := 0; i < 10; i++ {
		tmp := 0
		_, err := fmt.Fscanf(r, "%d\n", &tmp)
		if err != nil {
			log.Fatalln(err)
		}
		tmp %= 42
		if arr[tmp] == true {
			cnt--
		}
		arr[tmp] = true

	}
	_, err := fmt.Fprintln(w, cnt)
	if err != nil {
		log.Fatalln(err)
	}
}
