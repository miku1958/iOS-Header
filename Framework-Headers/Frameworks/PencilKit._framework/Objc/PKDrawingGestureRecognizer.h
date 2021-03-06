//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <PencilKit/PKDrawingGestureRecognizerProtocol-Protocol.h>

@class NSString, UITouch;
@protocol PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget;

@interface PKDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol>
{
    double _thresholdDistance;
    double _squaredThreshold;
    struct CGPoint _drawTouchStartPoint;
    BOOL _drawingTargetIsDrawing;
    BOOL _gestureDetected;
    BOOL _ignoreFingerTouchesUntilReset;
    id<PKDrawingGestureTarget> drawingTarget;
    unsigned long long _activeInputProperties;
    UITouch *_drawingTouch;
}

@property (readonly, nonatomic) unsigned long long activeInputProperties; // @synthesize activeInputProperties=_activeInputProperties;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKDrawingGestureRecognizerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<PKDrawingGestureTarget> drawingTarget; // @synthesize drawingTarget;
@property (strong, nonatomic) UITouch *drawingTouch; // @synthesize drawingTouch=_drawingTouch;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isReplaying;
@property (readonly) Class superclass;
@property (nonatomic) double thresholdDistance; // @synthesize thresholdDistance=_thresholdDistance;

- (void).cxx_destruct;
- (void)_beginDrawingWithTouch:(id)arg1;
- (void)_cancelDrawing;
- (void)_drawingBegan;
- (void)_drawingCancelled;
- (void)_drawingEnded;
- (void)_drawingMoved:(id)arg1;
- (void)_endDrawing;
- (BOOL)_shouldBeginDrawing:(id)arg1 withEvent:(id)arg2;
- (void)_updateDrawingWithEvent:(id)arg1;
- (void)cancel;
- (void)end;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

