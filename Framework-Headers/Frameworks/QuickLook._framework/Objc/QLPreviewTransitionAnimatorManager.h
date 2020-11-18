//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QuickLook/UINavigationControllerDelegate-Protocol.h>
#import <QuickLook/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLPreviewTransitionAnimatorManager : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
{
    BOOL _transitionWantsStatusBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property BOOL transitionWantsStatusBar; // @synthesize transitionWantsStatusBar=_transitionWantsStatusBar;

+ (id)sharedManager;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animatorForShowing:(BOOL)arg1 previewController:(id)arg2 presentingController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;

@end
