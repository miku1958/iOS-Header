//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBLockScreenManager, SBMainDisplayPolicyAggregator;

@interface SBTodayWidgetXCodeDebuggingUtility : NSObject
{
    SBLockScreenManager *_lockScreenManager;
    SBMainDisplayPolicyAggregator *_policyAggregator;
}

- (void).cxx_destruct;
- (void)_reallyLaunchTodayViewFromCurrentContextWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)launchTodayViewFromCurrentContextWithCompletion:(CDUnknownBlockType)arg1;

@end
