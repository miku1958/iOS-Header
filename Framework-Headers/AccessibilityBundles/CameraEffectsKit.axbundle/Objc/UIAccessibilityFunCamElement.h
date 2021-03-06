//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class AXDispatchTimer;

@interface UIAccessibilityFunCamElement : UIAccessibilityElement
{
    BOOL _tracked;
    AXDispatchTimer *_timer;
}

@property (strong, nonatomic) AXDispatchTimer *timer; // @synthesize timer=_timer;
@property BOOL tracked; // @synthesize tracked=_tracked;

- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)updateElementFrame;

@end

