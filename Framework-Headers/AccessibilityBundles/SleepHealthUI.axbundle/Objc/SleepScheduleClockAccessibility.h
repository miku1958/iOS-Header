//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SleepScheduleClockAccessibility_super.h"

@interface SleepScheduleClockAccessibility : __SleepScheduleClockAccessibility_super
{
    BOOL _accessibilityDraggingBedtimeHand;
}

@property (nonatomic) BOOL accessibilityDraggingBedtimeHand; // @synthesize accessibilityDraggingBedtimeHand=_accessibilityDraggingBedtimeHand;

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_axClockComponentsHeader;
- (id)_axClockTimeLabelText;
- (double)_axLastOutputTimeInterval;
- (id)_axLastSpokenMessage;
- (void)_axSetLastOutputTimeInterval:(double)arg1;
- (void)_axSetLastSpokenMessage:(id)arg1;
- (void)_axSpeakMessageIfNeeded:(id)arg1;
- (void)gestureRecognizerDidEnd:(id)arg1;
- (void)gestureRecognizerDidMove:(id)arg1;
- (void)gestureRecognizerDidStart:(id)arg1;

@end
