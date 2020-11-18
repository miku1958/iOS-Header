//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <TVMLKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSArray, NSHashTable, NSString, _TVPlaybackFadeAnimator, _UIProgressiveBlurPresentationAnimator;

@interface TVModalPresenter : NSObject <UIViewControllerTransitioningDelegate, UIPopoverPresentationControllerDelegate>
{
    NSHashTable *__presentationControllers;
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
    _TVPlaybackFadeAnimator *_playbackAnimator;
}

@property (readonly, nonatomic) NSHashTable *_presentationControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *presentedViewControllers;
@property (readonly) Class superclass;

+ (id)_viewControllerForResponder:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissAllViewControllersWithAnimation:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissViewControllerWithResponder:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)presentViewController:(id)arg1 forResponder:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end
