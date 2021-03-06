//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CPAnalytics/CPAnalyticsDestination-Protocol.h>

@class NSMapTable, NSString;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination>
{
    NSMapTable *_eventRoutes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *eventRoutes; // @synthesize eventRoutes=_eventRoutes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg1 withPropertiesToInclude:(id)arg2;
- (void)_sendCoreAnalyticsEvent:(id)arg1 eventPayload:(id)arg2;
- (void)_sendCoreAnalyticsEventWithCustomConfig:(id)arg1 eventRoute:(id)arg2;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)processEvent:(id)arg1;

@end

