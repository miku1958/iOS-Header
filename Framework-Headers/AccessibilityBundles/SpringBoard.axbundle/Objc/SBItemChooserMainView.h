//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBVoiceOverTouchItemChooser;

@interface SBItemChooserMainView : UIView
{
    SBVoiceOverTouchItemChooser *_itemChooser;
}

@property (strong, nonatomic) SBVoiceOverTouchItemChooser *itemChooser; // @synthesize itemChooser=_itemChooser;

- (id)_accessibilityObscuredScreenAllowedViews;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformEscape;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityViewIsModal;
- (void)dealloc;

@end

