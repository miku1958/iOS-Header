//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSImage/MPSUnaryImageKernel.h>

@protocol MTLBuffer;

@interface MPSImagePyramid : MPSUnaryImageKernel
{
    id<MTLBuffer> wtBuffer;
    id<MTLBuffer> wtBufferh;
    float *wtArray;
    unsigned short *wtArrayh;
    unsigned long long _fWidth;
    unsigned long long _fHeight;
    BOOL separable;
}

@property (readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_fHeight;
@property (readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_fWidth;

- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 centerWeight:(float)arg2;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float *)arg4;

@end
