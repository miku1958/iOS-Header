//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIPreviewInteractionTouchForceProviding-Protocol.h>

@class NSString, UITouchForceGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionGestureRecognizerTouchForceProvider : NSObject <UIGestureRecognizerDelegate, _UIPreviewInteractionTouchForceProviding>
{
    BOOL _active;
    UITouchForceGestureRecognizer *_gestureRecognizer;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITouchForceGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double touchForce;

- (void).cxx_destruct;
- (void)_handleGestureRecognizer:(id)arg1;
- (void)cancelInteraction;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1;
- (id)initWithView:(id)arg1 configuration:(CDUnknownBlockType)arg2;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;

@end

