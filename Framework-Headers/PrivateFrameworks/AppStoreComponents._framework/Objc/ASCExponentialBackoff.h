//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/ASCBackoff-Protocol.h>

@class JEUnfairLock, NSString;

__attribute__((visibility("hidden")))
@interface ASCExponentialBackoff : NSObject <ASCBackoff>
{
    double _baseSleepTimeInterval;
    double _maxSleepTimeInterval;
    JEUnfairLock *_attemptLock;
    long long _attemptsMade;
}

@property (readonly, nonatomic) JEUnfairLock *attemptLock; // @synthesize attemptLock=_attemptLock;
@property (nonatomic) long long attemptsMade; // @synthesize attemptsMade=_attemptsMade;
@property (readonly, nonatomic) double baseSleepTimeInterval; // @synthesize baseSleepTimeInterval=_baseSleepTimeInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double maxSleepTimeInterval; // @synthesize maxSleepTimeInterval=_maxSleepTimeInterval;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2;
- (double)nextSleepTimeInterval;
- (void)reset;

@end

