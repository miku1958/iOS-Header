//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKStatistics;

@interface HDHeadphoneAudioExposureStatisticsSnapshot : NSObject
{
    BOOL _includesPrunableData;
    HKStatistics *_statistics;
}

@property (readonly, nonatomic) BOOL includesPrunableData; // @synthesize includesPrunableData=_includesPrunableData;
@property (readonly, nonatomic) HKStatistics *statistics; // @synthesize statistics=_statistics;

- (void).cxx_destruct;
- (id)initWithStatistics:(id)arg1 includesPrunableData:(BOOL)arg2;
- (id)unitTesting_hearingSevenDayDoseCategorySampleWithNow:(id)arg1 error:(id *)arg2;

@end
