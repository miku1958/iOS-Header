//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponents, NSMutableDictionary, PETDistributionEventTracker, PETScalarEventTracker;

@interface WGWidgetEventTracker : NSObject
{
    NSDateComponents *_previousTodayViewAppearDateComponents;
    NSDate *_previousTodayViewAppearanceDate;
    NSMutableDictionary *_previousWidgetAppearanceDateByIdentifier;
    unsigned long long _location;
    PETDistributionEventTracker *_widgetLingerTracker;
    PETScalarEventTracker *_widgetShownTracker;
    PETScalarEventTracker *_widgetStatusTracker;
    PETDistributionEventTracker *_widgetListLingerTracker;
    PETScalarEventTracker *_widgetToggleContractTracker;
    PETScalarEventTracker *_widgetToggleExpandTracker;
    PETScalarEventTracker *_widgetListShownTracker;
    PETScalarEventTracker *_widgetToggleContract;
    PETScalarEventTracker *_widgetToggleExpand;
    BOOL _authenticated;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_authenticationProperty;
- (id)_locationProperty;
- (void)_lockedStateDidChange;
- (id)_modeProperty;
- (id)_statusProperty;
- (void)_trackWidgetContractEventForWidget:(id)arg1;
- (void)_trackWidgetExpandEventForWidget:(id)arg1;
- (void)_trackWidgetLingerEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4 duration:(double)arg5;
- (void)_trackWidgetListLingerEventWithLocation:(unsigned long long)arg1 authenticated:(BOOL)arg2 duration:(double)arg3;
- (void)_trackWidgetListShownEventWithLocation:(unsigned long long)arg1 authenticated:(BOOL)arg2;
- (void)_trackWidgetShownEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(BOOL)arg3 mode:(long long)arg4;
- (void)_trackWidgetStatusEventForWidget:(id)arg1 withStatus:(BOOL)arg2;
- (id)_widgetLingerTracker;
- (id)_widgetListLingerTracker;
- (id)_widgetProperty;
- (id)_widgetShownTracker;
- (id)_widgetStatusTracker;
- (id)_widgetToggleContractTracker;
- (void)dealloc;
- (id)init;
- (void)widget:(id)arg1 didAppearInMode:(long long)arg2;
- (void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (void)widget:(id)arg1 didDisappearInMode:(long long)arg2;
- (void)widgetListDidAppearAtLocation:(unsigned long long)arg1 withEnabledWidgets:(id)arg2 disabledWidgets:(id)arg3;
- (void)widgetListDidDisappearAtLocation:(unsigned long long)arg1;
- (id)widgetListShownTracker;
- (id)widgetToggleExpandTracker;
- (void)widgetViewDidAppearWithWidget:(id)arg1;
- (void)widgetViewDidDisappearWithWidget:(id)arg1;

@end
