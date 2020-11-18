//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSPointerArray;

@interface UIInteractionProgress : NSObject
{
    NSPointerArray *_observers;
    double _previousPercentComplete;
    double _previousUpdateTime;
    double _mostRecentUpdateTime;
    long long _atLeastTwoUpdates;
    double _percentComplete;
}

@property (readonly, nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property (readonly, nonatomic) double velocity;

- (void).cxx_destruct;
- (unsigned long long)_indexOfObserver:(id)arg1;
- (void)addProgressObserver:(id)arg1;
- (id)description;
- (void)endInteraction:(BOOL)arg1;
- (void)endInteraction:(BOOL)arg1 finalVelocity:(double)arg2;
- (id)init;
- (void)removeProgressObserver:(id)arg1;
- (void)setPercentComplete:(double)arg1;

@end

