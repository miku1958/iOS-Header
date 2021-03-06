//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIViewController;
@protocol SKRemoteDismissingViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteDismissingTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIViewController<SKRemoteDismissingViewController> *_viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIViewController<SKRemoteDismissingViewController> *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)dismissRemoteViewController:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

