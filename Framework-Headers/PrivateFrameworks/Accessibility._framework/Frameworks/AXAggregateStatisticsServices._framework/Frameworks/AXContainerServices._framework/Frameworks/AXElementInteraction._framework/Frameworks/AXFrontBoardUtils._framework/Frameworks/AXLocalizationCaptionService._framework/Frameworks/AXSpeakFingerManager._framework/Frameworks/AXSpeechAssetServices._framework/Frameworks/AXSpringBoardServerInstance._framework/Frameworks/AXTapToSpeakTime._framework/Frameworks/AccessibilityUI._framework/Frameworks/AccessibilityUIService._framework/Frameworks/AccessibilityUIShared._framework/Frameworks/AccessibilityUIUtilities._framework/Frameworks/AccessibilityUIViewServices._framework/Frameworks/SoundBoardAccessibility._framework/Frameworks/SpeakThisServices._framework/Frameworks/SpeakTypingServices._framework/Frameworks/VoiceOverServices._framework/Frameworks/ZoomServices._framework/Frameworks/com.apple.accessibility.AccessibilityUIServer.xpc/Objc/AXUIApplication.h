//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface AXUIApplication : UIApplication
{
}

@property (readonly, nonatomic) long long _expectedViewOrientation; // @dynamic _expectedViewOrientation;

- (BOOL)_accessibilityIsAccessibilityUIServer;
- (id)_accessibilityIsolatedWindows;
- (long long)_accessibilityOrientationForCompareGeometry;
- (BOOL)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
- (void)_run;
- (BOOL)_shouldAllowKeyboardArbiter;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (void)dealloc;

@end
