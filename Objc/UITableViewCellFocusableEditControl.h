//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCellEditControl.h>

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl
{
    _UIFloatingContentView *_focusedFloatingContentView;
}

- (void).cxx_destruct;
- (void)_ensureFocusedFloatingContentView;
- (BOOL)_shouldHandlePressEvent:(id)arg1;
- (void)focusedViewDidChange;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)wantsMaskingWhileAnimatingDisabled;

@end
