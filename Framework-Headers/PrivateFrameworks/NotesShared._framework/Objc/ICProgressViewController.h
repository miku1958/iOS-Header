//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UILabel;
@protocol ICProgressViewControllerDelegate;

@interface ICProgressViewController : UIViewController
{
    id<ICProgressViewControllerDelegate> _progressDelegate;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;
@property (weak, nonatomic) id<ICProgressViewControllerDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

