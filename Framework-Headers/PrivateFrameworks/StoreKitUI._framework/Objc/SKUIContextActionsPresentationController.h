//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

@interface SKUIContextActionsPresentationController : UIPresentationController
{
    UIVisualEffectView *_backgroundView;
    CDUnknownBlockType _dismissalAnimations;
}

@property (strong, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (copy, nonatomic) CDUnknownBlockType dismissalAnimations; // @synthesize dismissalAnimations=_dismissalAnimations;

- (void).cxx_destruct;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (BOOL)shouldRemovePresentersView;

@end

