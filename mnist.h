#pragma once 
#include<iostream>
// #include "include/k2c_tensor_include.h" 
// void mnist(k2c_tensor* flatten_1_input_input, k2c_tensor* dense_2_output); 
void mnist(float* flatten_1_input_input_array,size_t* flatten_1_input_input_ndim,size_t* flatten_1_input_input_numel,
size_t* flatten_1_input_input_shape,float* dense_2_output_array,size_t* dense_2_output_ndim,
size_t* dense_2_output_numel,size_t* dense_2_output_shape );
void mnist_initialize(); 
void mnist_terminate(); 
