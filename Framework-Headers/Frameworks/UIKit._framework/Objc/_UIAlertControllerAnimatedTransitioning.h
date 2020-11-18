//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIAlertController, UIInteractionProgress;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _presentation;
    UIAlertController *_alertController;
    UIInteractionProgress *_interactionProgress;
}

@property (strong, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
@property (getter=isPresentation) BOOL presentation; // @synthesize presentation=_presentation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alertControllerForContext:(id)arg1;
- (void)_animateTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)animateTransition:(id)arg1;
- (id)initWithInteractionProgress:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

