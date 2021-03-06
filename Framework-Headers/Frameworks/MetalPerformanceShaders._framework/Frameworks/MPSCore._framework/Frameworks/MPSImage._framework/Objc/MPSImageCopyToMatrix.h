//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSKernel.h>

@interface MPSImageCopyToMatrix : MPSKernel
{
    CDStruct_67e7699a _destinationMatrixOrigin;
    unsigned long long _destinationMatrixBatchIndex;
    unsigned long long _dataLayout;
}

@property (readonly, nonatomic) unsigned long long dataLayout; // @synthesize dataLayout=_dataLayout;
@property (nonatomic) unsigned long long destinationMatrixBatchIndex; // @synthesize destinationMatrixBatchIndex=_destinationMatrixBatchIndex;
@property (nonatomic) CDStruct_14f26992 destinationMatrixOrigin; // @synthesize destinationMatrixOrigin=_destinationMatrixOrigin;

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)debugDescription;
- (void)encodeBatchToCommandBuffer:(id)arg1 encoder:(id)arg2 sourceImages:(id)arg3 destinationMatrix:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationMatrix:(id)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationMatrix:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 dataLayout:(unsigned long long)arg2;

@end

