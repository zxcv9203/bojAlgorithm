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
	var score []float64
	var total, max, n float64
	defer func(w *bufio.Writer) {
		err := w.Flush()
		if err != nil {
			log.Fatalln(err)
		}
	}(w)
	_, err := fmt.Fscan(r, &n)
	if err != nil {
		log.Fatalln(err)
	}
	for i := 0; float64(i) < n; i++ {
		tmp := 0.0
		_, err = fmt.Fscan(r, &tmp)
		if err != nil {
			log.Fatalln(err)
		}
		score = append(score, tmp)
		if max < tmp {
			max = tmp
		}
	}
	for _, value := range score {
		total += value / max * 100
	}
	_, err = fmt.Fprintln(w, total/n)
	if err != nil {
		log.Fatalln(err)
	}
}
