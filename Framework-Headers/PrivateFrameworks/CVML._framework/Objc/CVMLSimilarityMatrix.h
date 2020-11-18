//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CVMLSimilarityMatrix : NSObject
{
    struct shared_ptr<vision::mod::SimilarityMatrixAbstract> m_MatrixImpl;
}

@property (readonly, nonatomic, getter=getImpl) void *impl;
@property (readonly, nonatomic, getter=getMatrixSize) unsigned long long matrixSize;
@property (readonly, nonatomic, getter=getMaximumValidMatrixDistance) float maximumValidMatrixDistance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addDescriptors:(id)arg1 error:(id *)arg2;
- (BOOL)containsId:(unsigned long long)arg1;
- (id)createCopyForDescriptorIds:(id)arg1;
- (void)deleteDescriptors:(id)arg1;
- (id)getAllDistancesForId:(unsigned long long)arg1;
- (id)getDescriptorIdsForRange:(struct _NSRange)arg1;
- (float)getDistanceBetweenDescriptor:(unsigned long long)arg1 andDescriptor:(unsigned long long)arg2;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end
