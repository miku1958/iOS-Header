//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNResizeBilinear : MPSCNNKernel
{
    unsigned long long _resizeWidth;
    unsigned long long _resizeHeight;
    BOOL _alignCorners;
}

@property (readonly, nonatomic) BOOL alignCorners; // @synthesize alignCorners=_alignCorners;
@property (readonly, nonatomic) unsigned long long resizeHeight; // @synthesize resizeHeight=_resizeHeight;
@property (readonly, nonatomic) unsigned long long resizeWidth; // @synthesize resizeWidth=_resizeWidth;

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)debugDescription;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 resizeWidth:(unsigned long long)arg2 resizeHeight:(unsigned long long)arg3 alignCorners:(BOOL)arg4;

@end

