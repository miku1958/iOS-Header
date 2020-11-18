//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;
@protocol _UIDigitizerGestureRecognizerImpDelegate;

__attribute__((visibility("hidden")))
@interface _UIDigitizerGestureRecognizerImp : NSObject
{
    id<_UIDigitizerGestureRecognizerImpDelegate> _delegate;
    double _minimumPressDuration;
    double _maximumPressDuration;
    long long _numberOfActiveTouches;
    double _pressEndToTouchBeginDuration;
    double _touchEndToPressEndDuration;
    double _touchEndTime;
    double _pressBeginTime;
    double _pressEndTime;
    double _lastRecognitionTime;
    NSTimer *_shortTimer;
    struct CGPoint _digitizerLocation;
}

@property (weak, nonatomic) id<_UIDigitizerGestureRecognizerImpDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
@property (nonatomic) double lastRecognitionTime; // @synthesize lastRecognitionTime=_lastRecognitionTime;
@property (nonatomic) double maximumPressDuration; // @synthesize maximumPressDuration=_maximumPressDuration;
@property (nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
@property (nonatomic) long long numberOfActiveTouches; // @synthesize numberOfActiveTouches=_numberOfActiveTouches;
@property (nonatomic) double pressBeginTime; // @synthesize pressBeginTime=_pressBeginTime;
@property (nonatomic) double pressEndTime; // @synthesize pressEndTime=_pressEndTime;
@property (nonatomic) double pressEndToTouchBeginDuration; // @synthesize pressEndToTouchBeginDuration=_pressEndToTouchBeginDuration;
@property (weak, nonatomic) NSTimer *shortTimer; // @synthesize shortTimer=_shortTimer;
@property (nonatomic) double touchEndTime; // @synthesize touchEndTime=_touchEndTime;
@property (nonatomic) double touchEndToPressEndDuration; // @synthesize touchEndToPressEndDuration=_touchEndToPressEndDuration;

- (void).cxx_destruct;
- (BOOL)_senderOfPressesHasTouchSurface:(id)arg1 withEvent:(id)arg2;
- (void)_shortTimerFired:(id)arg1;
- (struct CGPoint)defaultDigitizerLocation;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

