//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UIInteraction-Protocol.h>
#import <WorkflowUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, UINavigationController, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UIView;

@interface WFDrawerNavigationControllerSwipeInteraction : NSObject <UINavigationControllerDelegate, UIInteraction>
{
    UIView *view;
    UINavigationController *_navigationController;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPercentDrivenInteractiveTransition *_currentTransition;
}

@property (strong, nonatomic) UIPercentDrivenInteractiveTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (strong, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // @synthesize view;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (id)initWithNavigationController:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)pan:(id)arg1;
- (void)willMoveToView:(id)arg1;

@end

