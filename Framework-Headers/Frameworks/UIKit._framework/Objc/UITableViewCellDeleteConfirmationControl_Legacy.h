//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UITableViewCellDeleteConfirmationGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UITableViewCellDeleteConfirmationControl_Legacy : UIControl
{
    BOOL _visible;
    UITableViewCellDeleteConfirmationGestureRecognizer *_deleteConfirmationGesture;
}

@property (nonatomic, getter=isVisible) BOOL visible;

+ (struct CGSize)defaultSizeForTitle:(id)arg1;
- (void).cxx_destruct;
- (void)_confirmationAnimationDidEnd;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelDeleteConfirmationWithGesture:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (struct CGSize)defaultSize;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)touchUpInside:(id)arg1;
- (void)touchUpOutside:(id)arg1;

@end

