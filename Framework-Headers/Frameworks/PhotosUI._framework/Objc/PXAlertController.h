//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIActivityIndicatorView, UIProgressView, UIView, _PXAlertContentViewController;

@interface PXAlertController : UIAlertController
{
    _PXAlertContentViewController *_contentViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    UIProgressView *_progressView;
    UIView *_contentView;
}

@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;

+ (id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;
+ (id)progressAlertControllerWithMessage:(id)arg1;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

