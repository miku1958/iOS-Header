//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol UIKeyboardTypingStyleEstimatorDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardTypingStyleEstimator : NSObject
{
    NSTimer *_tapTypingFlipTimer;
    double _lastContinuousPathEvent;
    unsigned long long _currentTypingStyle;
    id<UIKeyboardTypingStyleEstimatorDelegate> _delegate;
}

@property (weak, nonatomic) id<UIKeyboardTypingStyleEstimatorDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_setTypingStyleEstimation:(unsigned long long)arg1;
- (void)beganContinuousPath;
- (void)cancelContinuousPath;
- (unsigned long long)currentTypingStyleEstimation;
- (void)endedContinuousPath;
- (void)tapTypedKey;

@end
