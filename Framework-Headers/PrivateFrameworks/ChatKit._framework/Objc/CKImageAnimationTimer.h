//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface CKImageAnimationTimer : NSObject
{
    unsigned long long _frame;
    NSMutableSet *_observers;
    CADisplayLink *_displayLink;
}

@property (strong, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (strong, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;

+ (id)sharedTimer;
- (void)addAnimationTimerObserver:(id)arg1;
- (void)animationTimerFired;
- (void)dealloc;
- (unsigned long long)frame;
- (id)init;
- (void)removeAnimationTimerObserver:(id)arg1;
- (void)updateDisplayLink;

@end
