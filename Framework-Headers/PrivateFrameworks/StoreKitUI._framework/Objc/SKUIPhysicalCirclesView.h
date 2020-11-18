//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/PKPhysicsContactDelegate-Protocol.h>

@class CADisplayLink, NSMutableArray, NSObject, NSString, PKPhysicsBody, PKPhysicsWorld, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol OS_dispatch_source, SKUIPhysicalCirclesDataSource, SKUIPhysicalCirclesDelegate;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCirclesView : UIView <PKPhysicsContactDelegate>
{
    NSObject<OS_dispatch_source> *_circleLoadStepTimer;
    NSMutableArray *_circleBodies;
    struct SKUIPhysicalCircleConstants _constants;
    id<SKUIPhysicalCirclesDataSource> _dataSource;
    id<SKUIPhysicalCirclesDelegate> _delegate;
    CADisplayLink *_displayLink;
    PKPhysicsBody *_groundBody;
    long long _longPressCircleIndex;
    UILongPressGestureRecognizer *_longPressRecognizer;
    double _maximumFrequencyDistance;
    double _minimumFrequencyDistance;
    UIPanGestureRecognizer *_panRecognizer;
    void *_physicsKitFramework;
    PKPhysicsWorld *_physicsWorld;
    NSMutableArray *_repellors;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (nonatomic) struct SKUIPhysicalCircleConstants constants; // @synthesize constants=_constants;
@property (weak, nonatomic) id<SKUIPhysicalCirclesDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIPhysicalCirclesDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_addNextMissingSpringJoint;
- (void)_addSpringForCircleBody:(id)arg1;
- (void)_calculateFrequencyScaling;
- (void)_cancelStepTimers;
- (id)_circleBodyWithView:(id)arg1;
- (long long)_circleIndexForPoint:(struct CGPoint)arg1;
- (void)_displayLinkTick:(id)arg1;
- (struct CGPoint)_initialPositionForCircleIndex:(long long)arg1 view:(id)arg2;
- (void)_loadCirclesWithStartIndex:(long long)arg1 totalCount:(long long)arg2;
- (void)_longPressAction:(id)arg1;
- (void)_panGestureAction:(id)arg1;
- (void)_reloadDidFinish;
- (void)_removeCircleBodies:(id)arg1;
- (void)_startFluctuationForCircleView:(id)arg1;
- (void)_stopFluctuationForCircleView:(id)arg1;
- (void)_tapGestureAction:(id)arg1;
- (void)addCirclesWithCount:(long long)arg1;
- (id)addRepellorWithCenter:(struct CGPoint)arg1 radius:(double)arg2 bufferSize:(double)arg3;
- (id)circleViewAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reloadData;
- (void)removeAllCirclesAnimated:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)removeAllRepellors;
- (void)removeCircleAtIndex:(long long)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeCirclesInIndexSet:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removeCirclesInIndexSet:(id)arg1 byAnimatingToPoint:(struct CGPoint)arg2 delay:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)removeRepellor:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forCircleAtIndex:(long long)arg2;
- (void)startPhysics;
- (void)stopPhysics;

@end
