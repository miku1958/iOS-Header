//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface InpaintingSinglePassFilter : CIImageProcessorKernel
{
}

+ (BOOL)allowPartialOutputRegion;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (int)formatForInputAtIndex:(int)arg1;
+ (int)outputFormat;
+ (id)performInpaintingAndBlendingOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 blendingRadius:(int)arg3 inpaintingResourceDescriptor:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6;
+ (id)performSinglePassInpaintingPipelineOnImage:(id)arg1 usingMask:(id)arg2 boundingBox:(struct CGRect)arg3 additionalParameters:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6;
+ (BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (id)runInpaintingNeuralNetworkOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 inpaintingResourceDescriptor:(id)arg3 espressoResources:(id)arg4 executionContext:(id)arg5 error:(id *)arg6;
+ (BOOL)synchronizeInputs;

@end

