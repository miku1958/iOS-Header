//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIView, UIViewController, _UIRotatingAlertController;

@protocol _UIRotatingAlertControllerDelegate <NSObject>
- (UIView *)hostViewForSheet:(_UIRotatingAlertController *)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet:(_UIRotatingAlertController *)arg1;
- (struct CGRect)presentationRectInHostViewForSheet:(_UIRotatingAlertController *)arg1;

@optional
- (void)sheet:(_UIRotatingAlertController *)arg1 presentingViewControllerDidChange:(UIViewController *)arg2;
- (void)sheet:(_UIRotatingAlertController *)arg1 presentingViewControllerWillChange:(UIViewController *)arg2;
@end
