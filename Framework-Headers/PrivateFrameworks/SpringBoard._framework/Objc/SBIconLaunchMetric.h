//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBAnalyticsStateMachineEventHandler.h>

@class NSString, PETGoalConversionEventTracker;

@interface SBIconLaunchMetric : SBAnalyticsStateMachineEventHandler
{
    PETGoalConversionEventTracker *_trackerV1;
    PETGoalConversionEventTracker *_trackerV2;
    BOOL _isFolder;
    NSString *_iconLocationValue;
    unsigned long long _layoutLocation;
}

- (void).cxx_destruct;
- (void)_processAndReportLaunchedEventPayload:(id)arg1;
- (void)_processAndReportTappedEventPayload:(id)arg1;
- (id)init;

@end
