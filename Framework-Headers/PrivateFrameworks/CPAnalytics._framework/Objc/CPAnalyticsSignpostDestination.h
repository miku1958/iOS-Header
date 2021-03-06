//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CPAnalytics/CPAnalyticsDestination-Protocol.h>

@class CPAnalytics, NSMutableIndexSet, NSString;

@interface CPAnalyticsSignpostDestination : NSObject <CPAnalyticsDestination>
{
    CPAnalytics *_cpAnalyticsInstance;
    NSMutableIndexSet *_startedSignpostIDs;
}

@property (weak, nonatomic) CPAnalytics *cpAnalyticsInstance; // @synthesize cpAnalyticsInstance=_cpAnalyticsInstance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableIndexSet *startedSignpostIDs; // @synthesize startedSignpostIDs=_startedSignpostIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkSignpostsEndForEvent:(id)arg1;
- (void)_sendCPAnalyticsEvent:(id)arg1 withPayload:(id)arg2 withDuration:(double)arg3;
- (void)_trackSignpostsStartForEvent:(id)arg1;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)processEvent:(id)arg1;

@end

