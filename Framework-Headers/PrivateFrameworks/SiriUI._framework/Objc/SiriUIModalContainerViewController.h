//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol SiriUIModalContainerViewControllerDelegate;

@interface SiriUIModalContainerViewController : UIViewController
{
    UIViewController *_contentViewController;
    id<SiriUIModalContainerViewControllerDelegate> _delegate;
}

@property (readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (weak, nonatomic) id<SiriUIModalContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)initWithContentViewController:(id)arg1;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;

@end
