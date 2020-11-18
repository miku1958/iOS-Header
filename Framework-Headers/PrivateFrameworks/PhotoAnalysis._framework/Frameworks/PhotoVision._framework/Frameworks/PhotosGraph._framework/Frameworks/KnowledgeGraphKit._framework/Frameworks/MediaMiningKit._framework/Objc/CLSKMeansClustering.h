//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSDataClustering.h>

@interface CLSKMeansClustering : CLSDataClustering
{
    unsigned long long _k;
}

@property (nonatomic) unsigned long long k; // @synthesize k=_k;

- (double *)_dataArray:(id)arg1 featureCount:(unsigned int)arg2 useKeypaths:(BOOL)arg3;
- (id)_performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end

