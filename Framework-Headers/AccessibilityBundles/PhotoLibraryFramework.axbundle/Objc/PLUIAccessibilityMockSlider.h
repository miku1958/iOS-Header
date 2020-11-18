//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface PLUIAccessibilityMockSlider : UIAccessibilityElement
{
    UIView *_view;
    id _mockSliderDelegate;
}

@property (weak, nonatomic) id mockSliderDelegate; // @synthesize mockSliderDelegate=_mockSliderDelegate;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (struct CGRect)accessibilityFrame;
- (void)accessibilityIncrement;
- (BOOL)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;

@end
