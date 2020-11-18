//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserActivity/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

@interface UAPingResults : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_devices;
    NSMutableDictionary *_errorsMap;
    NSMutableDictionary *_resultsMap;
    double _pingAvg;
}

@property (strong) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property (strong) NSMutableDictionary *errorsMap; // @synthesize errorsMap=_errorsMap;
@property double pingAvg; // @synthesize pingAvg=_pingAvg;
@property (strong) NSMutableDictionary *resultsMap; // @synthesize resultsMap=_resultsMap;

+ (id)sharedFormatter;
+ (BOOL)supportsSecureCoding;
- (void)addDevice:(id)arg1;
- (void)addKeysForDevice:(id)arg1;
- (double)averagePingTime;
- (void)clear;
- (id)copy;
- (id)dateDeviceLastSeen:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (void)incrementResultForStatus:(long long)arg1 andDevice:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)resultCountsForDevice:(id)arg1;
- (id)seenDevices;
- (long long)statusForDevice:(id)arg1;
- (id)statusStringForResultStatus:(long long)arg1;
- (id)toDictionary;
- (void)updateDevice:(id)arg1 withError:(id)arg2;
- (void)updateDevice:(id)arg1 withStatus:(long long)arg2;
- (void)updatePingAverageWithInterval:(double)arg1;

@end

