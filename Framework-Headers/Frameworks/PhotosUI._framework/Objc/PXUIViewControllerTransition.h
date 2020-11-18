//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <PhotosUICore/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NSString, UIViewController;

@interface PXUIViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    UIViewController *_internalMasterViewController;
    UIViewController *_internalDetailViewController;
    CDUnknownBlockType _transitionAnimationCompletionHandler;
    BOOL _supportsEdgeSwipeBackGesture;
    BOOL _interactive;
    id __pauseToken;
}

@property (strong, nonatomic, setter=_setPauseToken:) id _pauseToken; // @synthesize _pauseToken=__pauseToken;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) UIViewController *detailViewController;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive; // @synthesize interactive=_interactive;
@property (readonly, weak, nonatomic) UIViewController *masterViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsEdgeSwipeBackGesture; // @synthesize supportsEdgeSwipeBackGesture=_supportsEdgeSwipeBackGesture;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;

+ (BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)didEndTransition;
- (id)init;
- (id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
- (void)installTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)willEndTransition;
- (void)willStartTransition;

@end

