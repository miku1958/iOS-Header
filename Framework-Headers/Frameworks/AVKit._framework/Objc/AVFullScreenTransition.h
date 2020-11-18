//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVTransition.h>

@class AVFullScreenViewController;

@interface AVFullScreenTransition : AVTransition
{
    BOOL _prefersBlackBarsDuringTransition;
    AVFullScreenViewController *_fullScreenViewController;
}

@property (readonly, nonatomic) struct CGRect frameOfPlayerViewControllerWithinContainerView;
@property (readonly, nonatomic) AVFullScreenViewController *fullScreenViewController; // @synthesize fullScreenViewController=_fullScreenViewController;
@property (nonatomic) BOOL prefersBlackBarsDuringTransition; // @synthesize prefersBlackBarsDuringTransition=_prefersBlackBarsDuringTransition;

- (void).cxx_destruct;
- (id)backgroundView;
- (void)completeTransition:(BOOL)arg1;
- (BOOL)shouldRemovePresentingView;
- (void)transitionWillBegin;

@end

