//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTDebugMetricsOnInterval.h>

@class NSDate;

@interface BLTDebugMetricsCountOnInterval : BLTDebugMetricsOnInterval
{
    CDUnknownBlockType _incrementedBlock;
    unsigned long long _count;
    NSDate *__nextCountRollDate;
}

@property (strong, nonatomic) NSDate *_nextCountRollDate; // @synthesize _nextCountRollDate=__nextCountRollDate;
@property (nonatomic) unsigned long long count; // @synthesize count=_count;
@property (copy, nonatomic) CDUnknownBlockType incrementedBlock; // @synthesize incrementedBlock=_incrementedBlock;

- (void).cxx_destruct;
- (void)increment;
- (id)initWithInterval:(id)arg1;
- (void)whenIncrementedPerform:(CDUnknownBlockType)arg1;

@end
