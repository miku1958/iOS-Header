//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSTimer, PSPointerClientController;

@interface TITypingAssertion : NSObject
{
    BOOL _active;
    NSMutableSet *_restingPathIndices;
    NSTimer *_timer;
    PSPointerClientController *_pointerClientController;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (strong, nonatomic) PSPointerClientController *pointerClientController; // @synthesize pointerClientController=_pointerClientController;
@property (strong, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

+ (id)sharedTypingAssertion;
- (void).cxx_destruct;
- (id)__restingPathIndices;
- (void)_sbsSetTypingActive:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)restResetTouches;
- (void)restTouchEndWithPathIndex:(long long)arg1;
- (void)restTouchStartWithPathIndex:(long long)arg1;
- (void)timerFired:(id)arg1;
- (void)touchWithDuration:(double)arg1 reason:(long long)arg2;
- (void)touchWithReason:(long long)arg1;

@end
