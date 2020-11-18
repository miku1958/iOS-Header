//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMutablePointAnimator-Protocol.h>
#import <PhotosUICore/PXNumberAnimatorDisplayLinkTarget-Protocol.h>

@class NSString, PXNumberAnimator;
@protocol PXMutableNumberAnimator;

@interface PXPointAnimator : PXObservable <PXMutablePointAnimator, PXChangeObserver, PXNumberAnimatorDisplayLinkTarget>
{
    PXNumberAnimator<PXMutableNumberAnimator> *_xAnimator;
    PXNumberAnimator<PXMutableNumberAnimator> *_yAnimator;
    BOOL _isAnimating;
    NSString *_label;
    struct CGPoint _value;
    struct CGPoint _presentationValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double epsilon;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) struct CGPoint presentationValue; // @synthesize presentationValue=_presentationValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct CGPoint value; // @synthesize value=_value;
@property (readonly, nonatomic) PXNumberAnimator<PXMutableNumberAnimator> *xAnimator;
@property (readonly, nonatomic) PXNumberAnimator<PXMutableNumberAnimator> *yAnimator;

- (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (void)_setInternalValue:(struct CGPoint)arg1;
- (void)_update;
- (struct CGPoint)approximateVelocity;
- (void)didPerformChanges;
- (id)init;
- (id)initWithValue:(struct CGPoint)arg1;
- (id)initWithValue:(struct CGPoint)arg1 epsilon:(double)arg2;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(struct CGPoint)arg1 changes:(CDUnknownBlockType)arg2;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(struct CGPoint)arg3 changes:(CDUnknownBlockType)arg4;
- (void)performChangesWithDuration:(double)arg1 curve:(long long)arg2 changes:(CDUnknownBlockType)arg3;
- (void)performChangesWithoutAnimation:(CDUnknownBlockType)arg1;
- (void)setValue:(struct CGPoint)arg1;

@end
