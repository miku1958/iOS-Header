//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/AKMainEventHandler.h>

#import <AnnotationKit/UIGestureRecognizerDelegate-Protocol.h>

@class AKPanGestureRecognizer, NSString, UILongPressGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@interface AKMainEventHandler_iOS : AKMainEventHandler <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UILongPressGestureRecognizer *_pressRecognizer;
    AKPanGestureRecognizer *_panRecognizer;
    UIRotationGestureRecognizer *_rotationRecognizer;
    double _lastRotationAngleInRotationGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
@property (readonly) unsigned long long hash;
@property double lastRotationAngleInRotationGesture; // @synthesize lastRotationAngleInRotationGesture=_lastRotationAngleInRotationGesture;
@property (strong) AKPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property (strong) UILongPressGestureRecognizer *pressRecognizer; // @synthesize pressRecognizer=_pressRecognizer;
@property (strong) UIRotationGestureRecognizer *rotationRecognizer; // @synthesize rotationRecognizer=_rotationRecognizer;
@property (readonly) Class superclass;
@property (strong) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;

- (void).cxx_destruct;
- (BOOL)_hitTestAnnotationsIncludingPOI:(BOOL)arg1 atPointInWindow:(struct CGPoint)arg2 outAnnotation:(id *)arg3;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)forwardRecognizerToMainHandleEvent:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)teardown;

@end

