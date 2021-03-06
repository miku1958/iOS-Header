//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNDArray/MPSNDArrayUnaryGradientKernel.h>

@class MISSING_TYPE;

@interface MPSNDArrayLogSoftMaxGradient : MPSNDArrayUnaryGradientKernel
{
    unsigned long long _axis;
}

@property (nonatomic) unsigned long long axis; // @synthesize axis=_axis;

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (MISSING_TYPE *)dimensionsToBeRetained;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 axis:(unsigned long long)arg2;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;

@end

