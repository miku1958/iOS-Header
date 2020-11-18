//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PETDistributionEventTracker, PETGoalConversionEventTracker, PETScalarEventTracker;

@interface _PWTWidgetEventTracker : NSObject
{
    NSString *_identifier;
    PETScalarEventTracker *_resizeTracker;
    PETGoalConversionEventTracker *_conversionTracker;
    PETScalarEventTracker *_updateTracker;
    PETDistributionEventTracker *_screenLingerTracker;
    BOOL _hasReceivedActiveDisplayModeChangeNotificationOnce;
    BOOL _isCurrentlyVisible;
    BOOL _willBecomeVisible;
    BOOL _didBecomeVisibleWhileLocked;
    long long _activeDisplayMode;
    double _lastAppearTime;
}

@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
- (void)userEngagedWithWidget;
- (void)widgetActiveDisplayModeDidChange:(long long)arg1 withMaximumSize:(struct CGSize)arg2;
- (void)widgetDidAppear;
- (void)widgetDidDisappear;
- (void)widgetPerformedUpdateWithResult:(unsigned long long)arg1;
- (void)widgetWillAppear;
- (void)widgetWillDisappear;

@end

