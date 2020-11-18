//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIRemoveControlMinusButton;

@interface UIRemoveControl : UIView
{
    UIView *_target;
    id _delegate;
    UIView *_removeConfirmationButton;
    UIRemoveControlMinusButton *_minusButton;
    NSString *_label;
    struct {
        unsigned int removeButtonVisible:1;
        unsigned int removeConfirmationVisible:1;
        unsigned int removedFromTargetWhenHidden:1;
        unsigned int disableToggleRotate:1;
        unsigned int alwaysHideRemoveButton:1;
        unsigned int editingStyle:3;
        unsigned int reserved:23;
    } _removeControlFlags;
}

+ (void)hideAllRemoveConfirmationsInView:(id)arg1;
+ (float)removeButtonWidth;
+ (BOOL)removeConfirmationsVisibleInView:(id)arg1;
- (void)_confirmationAnimationDidEnd;
- (void)_doInsert:(id)arg1;
- (void)_doRemove:(id)arg1;
- (void)_hideRemoveAnimationDone;
- (void)_hideRemoveConfirmation;
- (id)_interceptEvent:(id)arg1;
- (id)_interceptMouseEvent:(struct __GSEvent *)arg1;
- (BOOL)_isInsertControl;
- (void)_minusButtonFadeAnimationStopped;
- (struct CGRect)_removeConfirmationEndingFrame;
- (struct CGRect)_removeConfirmationStartingFrame;
- (id)_scriptingInfo;
- (void)_setInsertControl:(BOOL)arg1;
- (void)_setInterceptMouseEvent:(BOOL)arg1;
- (void)_setRemoveConfirmationShowing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setTableViewCellEditingStyle:(long long)arg1;
- (void)_shouldRemoveTarget;
- (void)_showDeleteConfirmation:(id)arg1;
- (float)_verticalOffsetFromTarget;
- (void)addConfirmationButtonSubview:(id)arg1 withWidth:(float)arg2 target:(id)arg3;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)dealloc;
- (struct CGRect)defaultRemoveButtonEndingFrame;
- (struct CGRect)defaultRemoveButtonStartingFrame;
- (id)delegate;
- (void)hideControlsUsingRemoveAnimation;
- (id)initWithTarget:(id)arg1;
- (BOOL)isHighlighted;
- (BOOL)isRemoveButtonVisible;
- (BOOL)isRemoveConfirmationVisible;
- (void)layoutSubviews;
- (void)minusButtonDidHide:(id)arg1;
- (float)removeButtonAnimationDuration;
- (struct CGRect)removeButtonEndingFrame;
- (struct CGRect)removeButtonStartingFrame;
- (id)removeConfirmationButton;
- (id)removeConfirmationView;
- (void)removeFromSuperview;
- (BOOL)removedFromTargetWhenHidden;
- (void)setAlpha:(double)arg1;
- (void)setAlwaysHideRemoveButton:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setRemoveConfirmationLabel:(id)arg1;
- (void)setRemoveConfirmationVisible:(BOOL)arg1;
- (void)setRemoveConfirmationVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRemovedFromTargetWhenHidden:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)showRemoveButton:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGRect)targetContentBounds;

@end
