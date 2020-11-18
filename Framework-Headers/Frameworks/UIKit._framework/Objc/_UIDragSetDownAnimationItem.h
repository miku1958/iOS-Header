//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView, UIViewPropertyAnimator, _UIInternalDraggingItem, _UIPortalView;
@protocol _UIDraggingItemVisualTarget;

__attribute__((visibility("hidden")))
@interface _UIDragSetDownAnimationItem : NSObject
{
    BOOL _hasStartedSpringAnimation;
    BOOL _reachedTarget;
    BOOL _done;
    BOOL _fastAnimation;
    BOOL _shouldDrivePropertyAnimator;
    BOOL _ignoreRetargeting;
    BOOL _requiresDefaultAnimation;
    BOOL _midwayToTarget;
    BOOL _almostToTarget;
    BOOL _portalHidden;
    int _animationCount;
    _UIInternalDraggingItem *_item;
    unsigned long long _droppedItemIndex;
    UIView *_retargetingContainerView;
    _UIPortalView *_retargetingContainerPortalView;
    UIView *_view;
    UIView *_componentsView;
    double _initialDistanceFromTargetFrame;
    id<_UIDraggingItemVisualTarget> _visualTarget;
    UIViewPropertyAnimator *_propertyAnimator;
    UIViewPropertyAnimator *_systemDefaultPropertyAnimator;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _targetUpdateHandler;
    CDUnknownBlockType _midpointHandler;
    CDUnknownBlockType _nearCompletionHandler;
    CDUnknownBlockType _updatedDroppedItemHandler;
    struct CGPoint _center;
    struct CGPoint _initialVelocity;
    struct CGPoint _initialTargetVelocity;
    struct CGRect _targetFrame;
}

@property (nonatomic) BOOL almostToTarget; // @synthesize almostToTarget=_almostToTarget;
@property (nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property (nonatomic) struct CGPoint center; // @synthesize center=_center;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) UIView *componentsView; // @synthesize componentsView=_componentsView;
@property (nonatomic) BOOL done; // @synthesize done=_done;
@property (nonatomic) unsigned long long droppedItemIndex; // @synthesize droppedItemIndex=_droppedItemIndex;
@property (nonatomic) BOOL fastAnimation; // @synthesize fastAnimation=_fastAnimation;
@property (nonatomic) BOOL hasStartedSpringAnimation; // @synthesize hasStartedSpringAnimation=_hasStartedSpringAnimation;
@property (nonatomic) BOOL ignoreRetargeting; // @synthesize ignoreRetargeting=_ignoreRetargeting;
@property (nonatomic) double initialDistanceFromTargetFrame; // @synthesize initialDistanceFromTargetFrame=_initialDistanceFromTargetFrame;
@property (nonatomic) struct CGPoint initialTargetVelocity; // @synthesize initialTargetVelocity=_initialTargetVelocity;
@property (nonatomic) struct CGPoint initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property (strong, nonatomic) _UIInternalDraggingItem *item; // @synthesize item=_item;
@property (copy, nonatomic) CDUnknownBlockType midpointHandler; // @synthesize midpointHandler=_midpointHandler;
@property (nonatomic) BOOL midwayToTarget; // @synthesize midwayToTarget=_midwayToTarget;
@property (copy, nonatomic) CDUnknownBlockType nearCompletionHandler; // @synthesize nearCompletionHandler=_nearCompletionHandler;
@property (nonatomic, getter=isPortalHidden) BOOL portalHidden; // @synthesize portalHidden=_portalHidden;
@property (strong, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
@property (nonatomic) BOOL reachedTarget; // @synthesize reachedTarget=_reachedTarget;
@property (nonatomic) BOOL requiresDefaultAnimation; // @synthesize requiresDefaultAnimation=_requiresDefaultAnimation;
@property (strong, nonatomic) _UIPortalView *retargetingContainerPortalView; // @synthesize retargetingContainerPortalView=_retargetingContainerPortalView;
@property (strong, nonatomic) UIView *retargetingContainerView; // @synthesize retargetingContainerView=_retargetingContainerView;
@property (nonatomic) BOOL shouldDrivePropertyAnimator; // @synthesize shouldDrivePropertyAnimator=_shouldDrivePropertyAnimator;
@property (strong, nonatomic) UIViewPropertyAnimator *systemDefaultPropertyAnimator; // @synthesize systemDefaultPropertyAnimator=_systemDefaultPropertyAnimator;
@property (nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property (copy, nonatomic) CDUnknownBlockType targetUpdateHandler; // @synthesize targetUpdateHandler=_targetUpdateHandler;
@property (copy, nonatomic) CDUnknownBlockType updatedDroppedItemHandler; // @synthesize updatedDroppedItemHandler=_updatedDroppedItemHandler;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;
@property (strong, nonatomic) id<_UIDraggingItemVisualTarget> visualTarget; // @synthesize visualTarget=_visualTarget;

- (void).cxx_destruct;

@end
