//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSCore/MPSMatrix.h>

@interface MPSTemporaryMatrix : MPSMatrix
{
    unsigned long long _readCount;
}

@property (nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;

+ (void)prefetchStorageWithCommandBuffer:(id)arg1 matrixDescriptorList:(id)arg2;
+ (id)temporaryMatrixWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2;
- (id)initWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2;
- (void)synchronizeOnCommandBuffer:(id)arg1;

@end

