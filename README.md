# C-Based-VLSI

High Level Synthesis(HLS) for MNIST(Hand Written number Recognition)

In this project we've used the following tools hls4ml,keras2c , vivado hls. 

Hls4ml generates the optimized report of latency , memory resources we use that as the benchmark.

We've used keras2c to convert .h5 model to equivalent c++ code.

We made the code modifications like removing function pointers and dynamic memory allocation methods.

After applying the optimizing the code using methods like loop unrolling and hls pragmas we got optimzed latency.

We acheived better results compared to hls4ml.

