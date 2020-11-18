//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import <UIKit/UIForceInteractionController-Protocol.h>
#import <UIKit/UIInteractionProgressObserver-Protocol.h>

@class NSString, UIAlertController;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerInteractionController : UIPercentDrivenInteractiveTransition <UIForceInteractionController, UIInteractionProgressObserver>
{
    UIAlertController *_alertController;
    id<UIViewControllerContextTransitioning> _context;
}

@property (strong, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (strong, nonatomic) id<UIViewControllerContextTransitioning> context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;

@end
