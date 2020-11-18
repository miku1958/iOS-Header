//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class UIView;

@protocol _UIPreviewInteractionViewControllerTransition <NSObject>
- (void)performTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
- (void)transitionDidEnd:(BOOL)arg1;

@optional
- (void)performWithCustomAnimator:(void (^)(void))arg1 completion:(void (^)(BOOL))arg2;
- (void)prepareTransitionFromView:(UIView *)arg1 toView:(UIView *)arg2 containerView:(UIView *)arg3;
@end

