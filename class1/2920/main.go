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

func isSorted(s []int) (ret string) {
	n := 0
	for i, val := range s {
		if i == 0 {
			n = val
			if n == 1 {
				ret = "ascending"
			} else if n == 8 {
				ret = "descending"
			} else {
				ret = "mixed"
				return
			}
		} else {
			if n+1 == val && ret == "ascending" {
				n = val
			} else if n-1 == val && ret == "descending" {
				n = val
			} else {
				ret = "mixed"
				return
			}
		}
	}
	return
}

func main() {
	var s []int
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	for i := 0; i < 8; i++ {
		tmp := 0
		_, err := fmt.Fscanf(r, "%d", &tmp)
		if err != nil {
			log.Fatalln(err)
		}
		s = append(s, tmp)
	}
	ret := isSorted(s)
	_, err := fmt.Fprintln(w, ret)
	if err != nil {
		log.Fatalln(err)
	}
}
