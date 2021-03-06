//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIPreviewInteractionTouchForceProviding-Protocol.h>

@class NSString;
@protocol UICoordinateSpace, _UIPreviewInteractionTouchForceProviding;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionDecayTouchForceProvider : NSObject <_UIPreviewInteractionTouchForceProviding>
{
    id<_UIPreviewInteractionTouchForceProviding> _touchForceProvider;
    double _initialTouchForce;
    struct CGPoint _location;
    id<UICoordinateSpace> _coordinateSpace;
    BOOL _active;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double touchForce;

- (void).cxx_destruct;
- (void)cancelInteraction;
- (id)initWithTouchForceProvider:(id)arg1;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;

@end

