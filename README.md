# cudaProject
Project for CMPE 214

The project has two sections -  
1. FPGA 
2. GPU

The GPU directory hosts the Cuda version of Alexnet and Opencl version of Alexnet
```
GPU
|   ├── Data
│   ├── AlexNet_cuda
│   │   ├── Makefile
│   │   ├── README
│   │   ├── alexnet_host.cu
│   │   ├── an_kernel.cu
│   │   └── build.sh
│   ├── AlexNet_opencl
│   │   ├── AlexNet_opencl
│   │   ├── Makefile
│   │   ├── alexnet_host.cpp
│   │   └── alexnet_opencl.cl
│   └── log
│       └── execution.log
```


The FPGA directory hosts the sub-directories
```
FPGA
|   ├── HLS
│   ├── VIVADO

```
### Building the Opencl version
To run the Opencl version of the program execute the following steps- 
1. Clone this repository 

```git clone https://github.com/sidd91/cudaProject.git```

2. Switch to the cudaProject Directory

``` cd cudaProject```

3. Copy data folder to AlexNet_opencl and go to AlexNet_opencl directory

```cp -r data/  AlexNet_opencl/```
```cd AlexNet_opencl```

4. Build the opencl code

 ```make clean && make```

5. Execute the opencl code

```./AlexNet_opencl data/input.txt ```

### Building the CUDA Version
1. Go back to project_code
	$ cd  ../
  
2. Copy data folder to AlexNet_cuda and go to AlexNet_cuda directory

```cp -r data/  AlexNet_cuda/```
```cd AlexNet_cuda```

3. Build the CUDA code

 ```./build.sh```

4. Execute the CUDA code
```./AN 1 ```

```./AlexNet_opencl data/input.txt ```


