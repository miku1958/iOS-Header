//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSState.h>

#import <MPSNeuralNetwork/MPSImageSizeEncodingState-Protocol.h>

@class NSString;

@interface MPSCNNConvolutionState : MPSState <MPSImageSizeEncodingState>
{
    unsigned long long _originalConvolutionSourceWidth;
    unsigned long long _originalConvolutionSourceHeight;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    CDStruct_d6af7fc0 _srcOffset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property (readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
@property (readonly, nonatomic) unsigned long long sourceHeight; // @synthesize sourceHeight=_originalConvolutionSourceHeight;
@property (readonly, nonatomic) CDStruct_d6af7fc0 sourceOffset; // @synthesize sourceOffset=_srcOffset;
@property (readonly, nonatomic) unsigned long long sourceWidth; // @synthesize sourceWidth=_originalConvolutionSourceWidth;
@property (readonly) Class superclass;

- (id)initWithSourceWidth:(unsigned long long)arg1 sourceHeight:(unsigned long long)arg2 kernelWidth:(unsigned long long)arg3 kernelHeight:(unsigned long long)arg4 sourceOffset:(CDStruct_d6af7fc0)arg5;

@end

