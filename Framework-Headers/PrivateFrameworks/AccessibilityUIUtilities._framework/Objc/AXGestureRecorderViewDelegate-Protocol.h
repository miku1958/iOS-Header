//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUIUtilities/NSObject-Protocol.h>

@class AXGestureRecorderView, UIBezierPath;

@protocol AXGestureRecorderViewDelegate <NSObject>
- (BOOL)canToggleChromeForGestureRecorderView:(AXGestureRecorderView *)arg1;
- (UIBezierPath *)gestureRecorderView:(AXGestureRecorderView *)arg1 dynamicFingerPathAtIndex:(unsigned long long)arg2;
- (void)gestureRecorderView:(AXGestureRecorderView *)arg1 setChromeVisible:(BOOL)arg2;
- (BOOL)isChromeVisibleForGestureRecorderView:(AXGestureRecorderView *)arg1;
- (unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(AXGestureRecorderView *)arg1;
@end
