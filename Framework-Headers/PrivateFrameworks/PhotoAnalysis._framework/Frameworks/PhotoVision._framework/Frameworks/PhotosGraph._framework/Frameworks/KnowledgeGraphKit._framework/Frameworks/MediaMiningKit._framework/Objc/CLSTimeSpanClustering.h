//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSDataClustering.h>

@interface CLSTimeSpanClustering : CLSDataClustering
{
    unsigned long long _averageNumberOfObjects;
    double _minimumSpan;
}

@property (nonatomic) unsigned long long averageNumberOfObjects; // @synthesize averageNumberOfObjects=_averageNumberOfObjects;
@property (nonatomic) double minimumSpan; // @synthesize minimumSpan=_minimumSpan;

- (unsigned long long)_findNearestIndexMatchingTimeSpan:(unsigned long long)arg1 inDataSet:(id)arg2;
- (id)init;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end

