//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/UIViewControllerTransitioningDelegate-Protocol.h>
#import <VideosUI/VUIConfirmationAnimatedTransitioningDelegate-Protocol.h>

@class NSString, VUIConfirmationAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface VUIConfirmationTransitioningDelegate : NSObject <VUIConfirmationAnimatedTransitioningDelegate, UIViewControllerTransitioningDelegate>
{
    VUIConfirmationAnimatedTransitioning *_presentTransition;
    VUIConfirmationAnimatedTransitioning *_dismissTransition;
    CDUnknownBlockType _presentedHandlerBlock;
    CDUnknownBlockType _dismissedHandlerBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dismissedHandlerBlock; // @synthesize dismissedHandlerBlock=_dismissedHandlerBlock;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType presentedHandlerBlock; // @synthesize presentedHandlerBlock=_presentedHandlerBlock;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)confirmationAnimatedTransitioningAnimationDidEnd:(id)arg1;
- (id)init;

@end
