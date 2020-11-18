//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewCellGrabber : UIControl
{
    UITableViewCell *_cell;
    struct CGPoint _downPoint;
}

+ (id)grabberImage;
- (void).cxx_destruct;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 tableViewCell:(id)arg2;
- (BOOL)shouldTrack;

@end
