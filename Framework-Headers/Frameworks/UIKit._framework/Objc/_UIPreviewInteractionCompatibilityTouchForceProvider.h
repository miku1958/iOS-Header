//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding-Protocol.h>

@class NSString, UITouch, UIView, _UITouchesObservingGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCompatibilityTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding>
{
    UIView *_view;
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    UITouch *_currentTouch;
    BOOL _active;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double touchForce;
@property (readonly, weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)_handleTouchObservingGestureRecognizer:(id)arg1;
- (void)cancelInteraction;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithView:(id)arg1;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;

@end
