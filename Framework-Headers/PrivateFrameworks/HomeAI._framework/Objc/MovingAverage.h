//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSMutableArray;

@interface MovingAverage : NSObject
{
    double _movingAverage;
    HMFUnfairLock *_lock;
    NSMutableArray *_queue;
    unsigned long long _windowSize;
}

@property (readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property double movingAverage; // @synthesize movingAverage=_movingAverage;
@property (strong, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) unsigned long long windowSize; // @synthesize windowSize=_windowSize;

- (void).cxx_destruct;
- (void)addNumber:(id)arg1;
- (id)initWithWindowSize:(unsigned long long)arg1;
- (double)movingAverageForInterval:(double)arg1 defaultValue:(double)arg2;

@end
