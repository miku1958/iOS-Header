//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl : UIControl
{
    UITableViewCell *_cell;
    struct CGPoint _downPoint;
    double _focalY;
    double _focalHeight;
}

@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;

- (void).cxx_destruct;
- (id)_imageView;
- (void)_updateImageView;
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)grabberImage;
- (id)initWithTableViewCell:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)shouldTrack;

@end
