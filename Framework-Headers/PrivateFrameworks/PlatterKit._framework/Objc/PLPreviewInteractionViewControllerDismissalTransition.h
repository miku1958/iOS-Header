//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLPreviewInteractionViewControllerTransition.h>

@class PLPreviewInteractionViewControllerPresentationTransition;

@interface PLPreviewInteractionViewControllerDismissalTransition : PLPreviewInteractionViewControllerTransition
{
    PLPreviewInteractionViewControllerPresentationTransition *_presentationTransition;
}

@property (weak, nonatomic) PLPreviewInteractionViewControllerPresentationTransition *presentationTransition; // @synthesize presentationTransition=_presentationTransition;

- (void).cxx_destruct;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)_newAnimator;
- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

