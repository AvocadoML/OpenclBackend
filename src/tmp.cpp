/*
 * tmp.cpp
 *
 *  Created on: Jan 9, 2022
 *      Author: Maciej Kozarzewski
 */

#include <avocado/opencl_backend.h>

namespace avocado
{
	namespace backend
	{
		avStatus_t openclGetDeviceProperty(avDeviceIndex_t index, avDeviceProperty_t propertyName, void *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclIsCopyPossible(avDeviceIndex_t from, avDeviceIndex_t to, bool *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclCreateContextDescriptor(avContextDescriptor_t *result, avDeviceIndex_t deviceIndex)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclDestroyContextDescriptor(avContextDescriptor_t desc)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avContextDescriptor_t openclGetDefaultContext(avDeviceIndex_t deviceIndex)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclSynchronizeWithContext(avContextDescriptor_t context)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclIsContextReady(avContextDescriptor_t context, bool *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclCreateMemoryDescriptor(avMemoryDescriptor_t *result, avDeviceIndex_t deviceIndex, avSize_t sizeInBytes)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclCreateMemoryView(avMemoryDescriptor_t *result, const avMemoryDescriptor_t desc, avSize_t sizeInBytes, avSize_t offsetInBytes)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclDestroyMemoryDescriptor(avMemoryDescriptor_t desc)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclSetMemory(avContextDescriptor_t context, avMemoryDescriptor_t dst, avSize_t dstOffset, avSize_t dstSize, const void *pattern,
				avSize_t patternSize)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclCopyMemory(avContextDescriptor_t context, avMemoryDescriptor_t dst, avSize_t dstOffset, const avMemoryDescriptor_t src,
				avSize_t srcOffset, avSize_t count)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclCopyMemoryToHost(avContextDescriptor_t context, void *dst, const avMemoryDescriptor_t src, avSize_t srcOffset,
				avSize_t bytes)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclCopyMemoryFromHost(avContextDescriptor_t context, avMemoryDescriptor_t dst, avSize_t dstOffset, const void *src,
				avSize_t bytes)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}

		int openclGetNumberOfDevices()
		{
			return 0;
		}

		avStatus_t openclCreateTensorDescriptor(avTensorDescriptor_t *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclDestroyTensorDescriptor(avTensorDescriptor_t desc)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclSetTensorDescriptor(avTensorDescriptor_t desc, avDataType_t dtype, int nbDims, const int dimensions[])
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclGetTensorDescriptor(avTensorDescriptor_t desc, avDataType_t *dtype, int *nbDims, int dimensions[])
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclCreateConvolutionDescriptor(avConvolutionDescriptor_t *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclDestroyConvolutionDescriptor(avConvolutionDescriptor_t desc)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclSetConvolutionDescriptor(avConvolutionDescriptor_t desc, avConvolutionMode_t mode, int nbDims, const int padding[],
				const int strides[], const int dilation[], int groups, const void *paddingValue)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclGetConvolutionDescriptor(avConvolutionDescriptor_t desc, avConvolutionMode_t *mode, int *nbDims, int padding[],
				int strides[], int dilation[], int *groups, void *paddingValue)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclCreateOptimizerDescriptor(avOptimizerDescriptor_t *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclDestroyOptimizerDescriptor(avOptimizerDescriptor_t desc)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclSetOptimizerSGD(avOptimizerDescriptor_t desc, double learningRate, bool useMomentum, bool useNesterov, double beta1)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclGetOptimizerSGD(avOptimizerDescriptor_t desc, double *learningRate, bool *useMomentum, bool *useNesterov, double *beta1)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclSetOptimizerADAM(avOptimizerDescriptor_t desc, double learningRate, double beta1, double beta2)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclGetOptimizerADAM(avOptimizerDescriptor_t desc, double *learningRate, double *beta1, double *beta2)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclGetOptimizerType(avOptimizerDescriptor_t desc, avOptimizerType_t *type)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclChangeType(avContextDescriptor_t context, avMemoryDescriptor_t dst, avDataType_t dstType, const avMemoryDescriptor_t src,
				avDataType_t srcType, avSize_t elements)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclConcatTensors(avContextDescriptor_t context, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem,
				const avTensorDescriptor_t aDesc[], const avMemoryDescriptor_t aMem[], int nbTensors)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclSplitTensors(avContextDescriptor_t context, const avTensorDescriptor_t cDesc[], avMemoryDescriptor_t cMem[],
				const avTensorDescriptor_t aDesc, const avMemoryDescriptor_t aMem, int nbTensors)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclTranspose(avContextDescriptor_t context, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem,
				const avTensorDescriptor_t aDesc, const avMemoryDescriptor_t aMem, const int newDimOrder[])
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclScaleTensor(avContextDescriptor_t context, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem, const void *alpha)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclAddScalarToTensor(avContextDescriptor_t context, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem,
				const void *scalar)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclAddTensors(avContextDescriptor_t context, const void *alpha3, const void *alpha1, const avTensorDescriptor_t aDesc,
				const avMemoryDescriptor_t aMem, const void *alpha2, const avTensorDescriptor_t bDesc, const avMemoryDescriptor_t bMem,
				const void *beta, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem, avActivationType_t activation)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclBinaryOp(avContextDescriptor_t context, avBinaryOp_t operation, const void *alpha1, const avTensorDescriptor_t aDesc,
				const avMemoryDescriptor_t aMem, const void *alpha2, const avTensorDescriptor_t bDesc, const avMemoryDescriptor_t bMem,
				const void *beta, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclUnaryOp(avContextDescriptor_t context, avUnaryOp_t operation, const void *alpha, const avTensorDescriptor_t aDesc,
				const avMemoryDescriptor_t aMem, const void *beta, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclReduceTensor(avContextDescriptor_t context, avReduceOp_t operation, const void *alpha, const avTensorDescriptor_t aDesc,
				const avMemoryDescriptor_t aMem, const void *beta, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclGemm(avContextDescriptor_t context, avGemmOperation_t aOp, avGemmOperation_t bOp, const void *alpha,
				const avTensorDescriptor_t aDesc, const avMemoryDescriptor_t aMem, const avTensorDescriptor_t bDesc, const avMemoryDescriptor_t bMem,
				const void *beta, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclGemmBatched(avContextDescriptor_t context, avGemmOperation_t aOp, avGemmOperation_t bOp, const void *alpha,
				const avTensorDescriptor_t aDesc, const avMemoryDescriptor_t aMem, const avTensorDescriptor_t bDesc, const avMemoryDescriptor_t bMem,
				const void *beta, const avTensorDescriptor_t cDesc, avMemoryDescriptor_t cMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclActivationForward(avContextDescriptor_t context, avActivationType_t activation, const void *alpha,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const void *beta, const avTensorDescriptor_t yDesc,
				avMemoryDescriptor_t yMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclActivationBackward(avContextDescriptor_t context, avActivationType_t activation, const void *alpha,
				const avTensorDescriptor_t yDesc, const avMemoryDescriptor_t yMem, const avTensorDescriptor_t dyDesc,
				const avMemoryDescriptor_t dyMem, const void *beta, const avTensorDescriptor_t dxDesc, avMemoryDescriptor_t dxMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclSoftmaxForward(avContextDescriptor_t context, avSoftmaxMode_t mode, const void *alpha, const avTensorDescriptor_t xDesc,
				const avMemoryDescriptor_t xMem, const void *beta, const avTensorDescriptor_t yDesc, avMemoryDescriptor_t yMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclSoftmaxBackward(avContextDescriptor_t context, avSoftmaxMode_t mode, const void *alpha, const avTensorDescriptor_t yDesc,
				const avMemoryDescriptor_t yMem, const avTensorDescriptor_t dyDesc, const avMemoryDescriptor_t dyMem, const void *beta,
				const avTensorDescriptor_t dxDesc, avMemoryDescriptor_t dxMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclAffineForward(avContextDescriptor_t context, avActivationType_t activation, const avTensorDescriptor_t wDesc,
				const avMemoryDescriptor_t wMem, const avTensorDescriptor_t bDesc, const avMemoryDescriptor_t bMem, const void *alpha,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const void *beta, const avTensorDescriptor_t yDesc,
				avMemoryDescriptor_t yMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclBatchNormInference(avContextDescriptor_t context, avActivationType_t activation, const void *alpha,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const void *beta, const avTensorDescriptor_t yDesc,
				avMemoryDescriptor_t yMem, const avTensorDescriptor_t scaleBiasMeanVarDesc, const avMemoryDescriptor_t scaleMem,
				const avMemoryDescriptor_t biasMem, const avMemoryDescriptor_t meanMem, const avMemoryDescriptor_t varianceMem, double epsilon)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclBatchNormForward(avContextDescriptor_t context, avActivationType_t activation, const void *alpha,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const void *beta, const avTensorDescriptor_t yDesc,
				avMemoryDescriptor_t yMem, const avTensorDescriptor_t scaleBiasMeanVarDesc, const avMemoryDescriptor_t scaleMem,
				const avMemoryDescriptor_t biasMem, avMemoryDescriptor_t meanMem, avMemoryDescriptor_t varianceMem, double epsilon)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclBatchNormBackward(avContextDescriptor_t context, avActivationType_t activation, const void *alpha,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const avTensorDescriptor_t yDesc, const avMemoryDescriptor_t yMem,
				const void *beta, const avTensorDescriptor_t dxDesc, avMemoryDescriptor_t dxMem, const avTensorDescriptor_t dyDesc,
				avMemoryDescriptor_t dyMem, const avTensorDescriptor_t scaleMeanVarDesc, const avMemoryDescriptor_t scaleMem,
				const avMemoryDescriptor_t meanMem, const avMemoryDescriptor_t varianceMem, const void *alpha2, const void *beta2,
				avMemoryDescriptor_t scaleUpdateMem, avMemoryDescriptor_t biasUpdateMem, double epsilon)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclDropoutForward(avContextDescriptor_t context, const avDropoutDescriptor_t config, const avTensorDescriptor_t xDesc,
				const avMemoryDescriptor_t xMem, const avTensorDescriptor_t yDesc, avMemoryDescriptor_t yMem, avMemoryDescriptor_t states)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclDropoutBackward(avContextDescriptor_t context, const avDropoutDescriptor_t config, const avTensorDescriptor_t dyDesc,
				const avMemoryDescriptor_t dyMem, const avTensorDescriptor_t dxDesc, avMemoryDescriptor_t dxMem, const avTensorDescriptor_t states)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclPoolingForward(avContextDescriptor_t context, const avPoolingDescriptor_t config, const void *alpha,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const void *beta, const avTensorDescriptor_t yDesc,
				avMemoryDescriptor_t yMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclPoolingBackward(avContextDescriptor_t context, const avPoolingDescriptor_t config, const void *alpha,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const avTensorDescriptor_t dyDesc,
				const avMemoryDescriptor_t dyMem, const void *beta, const avTensorDescriptor_t dxDesc, avMemoryDescriptor_t dxMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclIm2Row(avContextDescriptor_t context, const avConvolutionDescriptor_t config, const avTensorDescriptor_t filterDesc,
				const avTensorDescriptor_t srcDesc, const avMemoryDescriptor_t srcMem, const avTensorDescriptor_t colDesc,
				avMemoryDescriptor_t colMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclGetConvolutionWorkspaceSize(avContextDescriptor_t context, const avConvolutionDescriptor_t config,
				const avTensorDescriptor_t xDesc, const avTensorDescriptor_t wDesc, const avTensorDescriptor_t bDesc, avSize_t *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclPrecomputeConvolutionWorkspace(avContextDescriptor_t context, const avConvolutionDescriptor_t config,
				const avTensorDescriptor_t wDesc, const avMemoryDescriptor_t wMem, const avTensorDescriptor_t bDesc, const avMemoryDescriptor_t bMem,
				avMemoryDescriptor_t workspaceMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclConvolutionBiasActivationForward(avContextDescriptor_t context, const avConvolutionDescriptor_t config, const void *alpha1,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const avTensorDescriptor_t wDesc, const avMemoryDescriptor_t wMem,
				const avTensorDescriptor_t bDesc, const avMemoryDescriptor_t bMem, const void *alpha2, const avTensorDescriptor_t zDesc,
				const avMemoryDescriptor_t zMem, const void *beta, const avTensorDescriptor_t yDesc, avMemoryDescriptor_t yMem,
				const avActivationType_t activation, avMemoryDescriptor_t workspaceMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclConvolutionForward(avContextDescriptor_t context, const avConvolutionDescriptor_t config, const void *alpha,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const avTensorDescriptor_t wDesc, const avMemoryDescriptor_t wMem,
				const void *beta, const avTensorDescriptor_t yDesc, avMemoryDescriptor_t yMem, avMemoryDescriptor_t workspaceMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclConvolutionBackward(avContextDescriptor_t context, const avConvolutionDescriptor_t config, const void *alpha,
				const avTensorDescriptor_t dxDesc, avMemoryDescriptor_t dxMem, const avTensorDescriptor_t wDesc, const avMemoryDescriptor_t wMem,
				const void *beta, const avTensorDescriptor_t dyDesc, const avMemoryDescriptor_t dyMem, avMemoryDescriptor_t workspaceMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclConvolutionUpdate(avContextDescriptor_t context, const avConvolutionDescriptor_t config, const void *alpha,
				const avTensorDescriptor_t xDesc, const avMemoryDescriptor_t xMem, const avTensorDescriptor_t dyDesc,
				const avMemoryDescriptor_t dyMem, const void *beta, const avTensorDescriptor_t dwDesc, avMemoryDescriptor_t dwMem,
				avMemoryDescriptor_t workspaceMem)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclMetricFunction(avContextDescriptor_t context, avMetricType_t metricType, const avTensorDescriptor_t outputDesc,
				const avMemoryDescriptor_t outputMem, const avTensorDescriptor_t targetDesc, const avMemoryDescriptor_t targetMem, void *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
		avStatus_t openclLossFunction(avContextDescriptor_t context, avLossType_t lossType, const avTensorDescriptor_t outputDesc,
				const avMemoryDescriptor_t outputMem, const avTensorDescriptor_t targetDesc, const avMemoryDescriptor_t targetMem, void *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}

		avStatus_t openclLossGradient(avContextDescriptor_t context, avLossType_t lossType, const void *alpha, const avTensorDescriptor_t outputDesc,
				const avMemoryDescriptor_t outputMem, const avTensorDescriptor_t targetDesc, const avMemoryDescriptor_t targetMem, const void *beta,
				const avTensorDescriptor_t gradientDesc, avMemoryDescriptor_t gradientMem, bool isFused)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}

		avStatus_t openclGetOptimizerWorkspaceSize(avOptimizerDescriptor_t desc, const avTensorDescriptor_t wDesc, avSize_t *result)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}

		avStatus_t openclOptimizerLearn(avContextDescriptor_t context, const avOptimizerDescriptor_t config, const avTensorDescriptor_t wDesc,
				avMemoryDescriptor_t wMem, const avTensorDescriptor_t dwDesc, const avMemoryDescriptor_t dwMem, avMemoryDescriptor_t workspace)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}

		avStatus_t openclRegularizerL2(avContextDescriptor_t context, const avTensorDescriptor_t gradientDesc, avMemoryDescriptor_t gradientMem,
				const avTensorDescriptor_t weightDesc, const avMemoryDescriptor_t weightMem, const void *coefficient, const void *offset, void *loss)
		{
			return AVOCADO_STATUS_NOT_SUPPORTED;
		}
	} /* namespace backend */
} /* namespace avocado */

