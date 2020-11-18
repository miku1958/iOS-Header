//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CMWakeGestureDelegate;

@interface CMWakeGestureManager : NSObject
{
    id<CMWakeGestureDelegate> _delegate;
}

@property (nonatomic) id<CMWakeGestureDelegate> delegate; // @synthesize delegate=_delegate;

+ (BOOL)isWakeGestureAvailable;
+ (BOOL)isWakeGestureOverrideEnabled;
+ (id)sharedManager;
- (void)logAssert;
- (BOOL)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2;
- (void)startWakeGestureUpdates;
- (void)stopWakeGestureUpdates;

@end

