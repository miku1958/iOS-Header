//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CPAnalytics/CPAnalyticsEventMatcher.h>

@class NSArray, NSString;

@interface CPAnalyticsLogEventMatcher : CPAnalyticsEventMatcher
{
    CPAnalyticsEventMatcher *_eventMatcher;
    BOOL _shouldLogEventName;
    NSString *_eventTypeLabel;
    NSArray *_eventPropertiesToLog;
}

@property (readonly, nonatomic) NSArray *eventPropertiesToLog; // @synthesize eventPropertiesToLog=_eventPropertiesToLog;
@property (readonly, nonatomic) NSString *eventTypeLabel; // @synthesize eventTypeLabel=_eventTypeLabel;
@property (readonly, nonatomic) BOOL shouldLogEventName; // @synthesize shouldLogEventName=_shouldLogEventName;

- (void).cxx_destruct;
- (BOOL)doesMatch:(id)arg1;
- (id)init;
- (id)initWithConfig:(id)arg1;

@end
