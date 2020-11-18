//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICCloudThrottlingLevel : NSObject
{
    double _batchInterval;
    unsigned long long _numberOfBatches;
}

@property (nonatomic) double batchInterval; // @synthesize batchInterval=_batchInterval;
@property (nonatomic) unsigned long long numberOfBatches; // @synthesize numberOfBatches=_numberOfBatches;

- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2;

@end
