//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;
@protocol AVFullScreenViewControllerDelegate;

@interface AVFullScreenViewController : UIViewController
{
    BOOL _canChangeStatusBarHidden;
    UIView *_presentationBackgroundView;
    id<AVFullScreenViewControllerDelegate> _delegate;
    UIView *_contentView;
}

@property (nonatomic) BOOL canChangeStatusBarHidden; // @synthesize canChangeStatusBarHidden=_canChangeStatusBarHidden;
@property (weak, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (weak, nonatomic) id<AVFullScreenViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UIView *presentationBackgroundView; // @synthesize presentationBackgroundView=_presentationBackgroundView;

- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)dealloc;
- (void)fullScreenPresentationWillBegin;
- (id)initWithDelegate:(id)arg1 presentingViewController:(id)arg2 sourceView:(id)arg3;
- (id)keyCommands;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (long long)preferredStatusBarStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)prefersStatusBarHidden;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
