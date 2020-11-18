//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString;

@interface _UIProgressiveBlurContextController : UIViewController <UIViewControllerTransitioningDelegate>
{
    UIViewController *_presentedViewController;
    long long _blurStyle;
}

@property (nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithPresentedViewController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)viewDidLoad;

@end

