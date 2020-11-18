//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/UINavigationControllerDelegate-Protocol.h>

@class NSMapTable, NSMutableSet, NSString;

@interface PXUIViewControllerTransitionManager : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate>
{
    NSMapTable *__pinchGestureRecognizers;
    NSMapTable *__lastViewControllerTransitions;
    NSMutableSet *__pinchTransitions;
}

@property (readonly, nonatomic) NSMapTable *_lastViewControllerTransitions; // @synthesize _lastViewControllerTransitions=__lastViewControllerTransitions;
@property (readonly, nonatomic) NSMapTable *_pinchGestureRecognizers; // @synthesize _pinchGestureRecognizers=__pinchGestureRecognizers;
@property (readonly, nonatomic) NSMutableSet *_pinchTransitions; // @synthesize _pinchTransitions=__pinchTransitions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_deepestDescendantOfViewController:(id)arg1 atLocationOfGestureRecognizer:(id)arg2;
- (void)_handlePinchGestureRecognizer:(id)arg1;
- (id)_navigationControllerAtLocationOfGestureRecognizer:(id)arg1;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)_pinchGestureRecognizerForViewController:(id)arg1;
- (id)_pinchTransitionForGestureRecognizer:(id)arg1;
- (id)_windowForViewController:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)lastTransitionForViewController:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (void)setLastTransition:(id)arg1 forViewController:(id)arg2;

@end

