//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLAWDAvailableSessionsTracker.h>

@class NSArray, NSMutableArray;

@interface PMLAWDAvailableSessionsTrackerMock : PMLAWDAvailableSessionsTracker
{
    NSMutableArray *_internalTrackedStats;
    NSArray *_trackedStats;
}

@property (readonly) NSArray *trackedStats; // @synthesize trackedStats=_trackedStats;

- (void).cxx_destruct;
- (void)clearTrackedMessages;
- (id)init;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)recentStatsForModelName:(id)arg1;
- (void)triggerAWDMetricRequest;

@end

