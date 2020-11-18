//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBFAnalyticsBackendEventHandling-Protocol.h>

@class NSString, PETDistributionEventTracker;

@interface SBIconPageHidingMetric : NSObject <SBFAnalyticsBackendEventHandling>
{
    PETDistributionEventTracker *_pagesHiddenTracker;
    PETDistributionEventTracker *_pagesVisibleTracker;
    PETDistributionEventTracker *_pagesTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;

@end
