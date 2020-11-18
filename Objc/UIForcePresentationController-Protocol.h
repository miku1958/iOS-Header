//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIGestureRecognizer, UIView, _UIStatesFeedbackGenerator;
@protocol _UIForcePresentationControllerDelegate;

@protocol UIForcePresentationController <NSObject>

@property (readonly, nonatomic) UIView *_revealContainerView;
@property (nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed;
@property (strong, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;
@property (strong, nonatomic) UIGestureRecognizer *panningGestureRecognizer;
@property (copy, nonatomic) CDUnknownBlockType presentationPhaseCompletionBlock;

- (BOOL)_canCommitPresentation;
- (BOOL)_canDismissPresentation;

@optional
- (void)_willCommitPresentation;
@end

