//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol _GEOThrottler <NSObject>

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) double timeWindow;

+ (BOOL)stateIsExpired:(NSDictionary *)arg1;
- (BOOL)addRequestTimestamp;
- (NSDictionary *)captureState;
- (id)initWithKeyPath:(NSString *)arg1 requestCount:(unsigned long long)arg2 interval:(double)arg3 savedState:(NSDictionary *)arg4;
- (BOOL)isExpired;
- (unsigned int)maxReqCount;
- (unsigned long long)remainingEntries;
- (double)timeUntilReset;
- (NSDictionary *)userInfoForError;
@end

