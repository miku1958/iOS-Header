//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIKernel.h>

@interface CIColorKernel : CIKernel
{
}

@property (nonatomic) BOOL perservesAlpha;

+ (id)SDOFV2MetalKernelNamed:(id)arg1;
+ (id)SDOFV3MetalKernelNamed:(id)arg1;
+ (id)kernelWithString:(id)arg1;
- (id)_initWithReflection:(struct CIKernelReflection)arg1 constants:(id)arg2;
- (id)applyWithExtent:(struct CGRect)arg1 arguments:(id)arg2;
- (id)applyWithExtent:(struct CGRect)arg1 arguments:(id)arg2 options:(id)arg3;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
- (BOOL)canReduceOutputChannels;
- (id)initWithString:(id)arg1;
- (BOOL)preservesRange;
- (void)setCanReduceOutputChannels:(BOOL)arg1;
- (void)setPreservesRange:(BOOL)arg1;

@end
