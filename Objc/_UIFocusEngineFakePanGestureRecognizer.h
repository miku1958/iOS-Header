//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIFocusEngineFakePanGestureRecognizer : NSObject
{
    long long _state;
    struct CGPoint _digitizerLocation;
    struct CGPoint _velocity;
}

@property (nonatomic) struct CGPoint digitizerLocation; // @synthesize digitizerLocation=_digitizerLocation;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;

- (struct CGPoint)_digitizerLocation;
- (struct CGPoint)velocityInView:(id)arg1;

@end

