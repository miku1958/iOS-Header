//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HKPersistentTimer : NSObject
{
    NSString *_fullTimerKey;
}

@property (strong, nonatomic) NSString *fullTimerKey; // @synthesize fullTimerKey=_fullTimerKey;

+ (id)_prefixedKeyWithTimerKey:(id)arg1;
+ (id)timerWithKey:(id)arg1;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)elapsedNanoseconds;
- (unsigned long long)elapsedSeconds;
- (void)start;
- (id)timerValue;

@end

