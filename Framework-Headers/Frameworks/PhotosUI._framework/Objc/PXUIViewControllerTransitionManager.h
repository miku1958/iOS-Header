//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXVerticalSwipeGestureRecognizerHelperDelegate-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/UINavigationControllerDelegate-Protocol.h>

@class NSMapTable, NSMutableSet, NSString, PXVerticalSwipeGestureRecognizerHelper;

@interface PXUIViewControllerTransitionManager : NSObject <UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate, UINavigationControllerDelegate>
{
    NSMapTable *__pinchGestureRecognizers;
    NSMapTable *_panGestureRecognizers;
    NSMapTable *__lastViewControllerTransitions;
    NSMutableSet *__pinchTransitions;
    NSMutableSet *_swipeDownTransitions;
    PXVerticalSwipeGestureRecognizerHelper *_swipeDownGestureRecognizerHelper;
}

@property (readonly, nonatomic) NSMapTable *_lastViewControllerTransitions; // @synthesize _lastViewControllerTransitions=__lastViewControllerTransitions;
@property (readonly, nonatomic) NSMapTable *_pinchGestureRecognizers; // @synthesize _pinchGestureRecognizers=__pinchGestureRecognizers;
@property (readonly, nonatomic) NSMutableSet *_pinchTransitions; // @synthesize _pinchTransitions=__pinchTransitions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMapTable *panGestureRecognizers; // @synthesize panGestureRecognizers=_panGestureRecognizers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *swipeDownGestureRecognizerHelper; // @synthesize swipeDownGestureRecognizerHelper=_swipeDownGestureRecognizerHelper;
@property (readonly, nonatomic) NSMutableSet *swipeDownTransitions; // @synthesize swipeDownTransitions=_swipeDownTransitions;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_deepestDescendantOfViewController:(id)arg1 atLocationOfGestureRecognizer:(id)arg2;
- (BOOL)_getMasterViewController:(out id *)arg1 detailViewController:(out id *)arg2 forPopAtLocationOfGestureRecognizer:(id)arg3;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handlePinchGestureRecognizer:(id)arg1;
- (id)_navigationControllerAtLocationOfGestureRecognizer:(id)arg1;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)_panGestureRecognizerForViewController:(id)arg1;
- (id)_pinchGestureRecognizerForViewController:(id)arg1;
- (id)_pinchTransitionForGestureRecognizer:(id)arg1;
- (id)_swipeDownTransitionForGestureRecognizer:(id)arg1;
- (id)_windowForViewController:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)lastTransitionForViewController:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (void)setLastTransition:(id)arg1 forViewController:(id)arg2;
- (BOOL)verticalSwipeGestureRecognizerHelper:(id)arg1 shouldRecognizeSwipeDownGestureRecognizer:(id)arg2;

@end

