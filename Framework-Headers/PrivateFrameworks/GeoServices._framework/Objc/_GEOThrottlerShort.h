//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOThrottler-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOThrottlerShort : NSObject <_GEOThrottler>
{
    NSString *_keyPath;
    struct vector<(anonymous namespace)::Timestamp, std::__1::allocator<(anonymous namespace)::Timestamp>> _lastRequestTimes;
    unsigned int _currentIndex;
    double _timeWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeWindow; // @synthesize timeWindow=_timeWindow;

+ (BOOL)stateIsExpired:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addRequestTimestamp;
- (id)captureState;
- (id)initWithKeyPath:(id)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(id)arg4;
- (BOOL)isExpired;
- (unsigned int)maxReqCount;
- (unsigned long long)remainingEntries;
- (double)timeUntilReset;
- (id)userInfoForError;

@end

