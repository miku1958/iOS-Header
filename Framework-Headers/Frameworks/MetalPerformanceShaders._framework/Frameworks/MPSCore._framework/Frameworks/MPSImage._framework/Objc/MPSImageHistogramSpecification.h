//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSImage/MPSUnaryImageKernel.h>

@class MISSING_TYPE;
@protocol MTLBuffer;

@interface MPSImageHistogramSpecification : MPSUnaryImageKernel
{
    unsigned long long histogramEntries;
    BOOL histogramAlpha;
    MISSING_TYPE *minPixelValue;
    MISSING_TYPE *maxPixelValue;
    BOOL optimized256BinsUseCase;
    id<MTLBuffer> specificationBuffer;
    BOOL encodeTransform;
}

@property (readonly, nonatomic) CDStruct_5577c19c histogramInfo;

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeTransformToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceHistogram:(id)arg3 sourceHistogramOffset:(unsigned long long)arg4 desiredHistogram:(id)arg5 desiredHistogramOffset:(unsigned long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 histogramInfo:(const CDStruct_5577c19c *)arg2;

@end

