//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLDataClustering : NSObject
{
    CDUnknownBlockType _distanceBlock;
    NSArray *_numericValueKeypaths;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType distanceBlock; // @synthesize distanceBlock=_distanceBlock;
@property (readonly, nonatomic) NSArray *numericValueKeypaths; // @synthesize numericValueKeypaths=_numericValueKeypaths;

+ (id)clustering;
+ (id)clusteringWithDistanceBlock:(CDUnknownBlockType)arg1;
+ (id)clusteringWithNumericValueKeypaths:(id)arg1;
- (void).cxx_destruct;
- (double **)createDistancesMatrixForDataset:(id)arg1;
- (void)freeDistancesMatrix:(double **)arg1 forDataset:(id)arg2;
- (id)initWithDistanceBlock:(CDUnknownBlockType)arg1;
- (id)initWithNumericValueKeypaths:(id)arg1;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end

