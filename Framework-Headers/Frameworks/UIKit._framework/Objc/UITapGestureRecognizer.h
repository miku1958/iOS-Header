//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

#import <UIKitCore/UITapRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UITapRecognizer;

@interface UITapGestureRecognizer : UIGestureRecognizer <UITapRecognizerDelegate>
{
    struct CGPoint _locationInView;
    UITapRecognizer *_imp;
    unsigned int _delaysRecognitionForGreaterTapCounts;
    BOOL _isSingleKeyPressGesture;
    long long _buttonType;
}

@property (nonatomic, setter=_setButtonType:) long long _buttonType; // @synthesize _buttonType;
@property (nonatomic) long long buttonMaskRequired;
@property (readonly, nonatomic) struct CGPoint centroid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSingleKeyPressGesture; // @synthesize isSingleKeyPressGesture=_isSingleKeyPressGesture;
@property (readonly, nonatomic) struct CGPoint location;
@property (nonatomic) double maximumTapDuration;
@property (nonatomic) unsigned long long numberOfTapsRequired;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *touches;

+ (BOOL)_supportsTouchContinuation;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (double)_allowableSeparation;
- (double)_allowableTouchTimeSeparation;
- (void)_appendSubclassDescription:(id)arg1;
- (long long)_buttonMaskRequired;
- (BOOL)_delaysRecognitionForGreaterTapCounts;
- (struct CGPoint)_digitizerLocation;
- (long long)_finalStateForRecognition;
- (BOOL)_isGestureType:(long long)arg1;
- (void)_resetGestureRecognizer;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (void)_setButtonMaskRequired:(long long)arg1;
- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)arg1;
- (BOOL)_shouldFailInResponseToPresses:(id)arg1 withEvent:(id)arg2;
- (BOOL)_shouldReceivePress:(id)arg1;
- (double)_touchSloppinessFactor;
- (double)allowableMovement;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (double)maximumSingleTapDuration;
- (unsigned long long)numberOfTouches;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setAllowableMovement:(double)arg1;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

