//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@interface TADeviceRecordSettings : NSObject <NSSecureCoding>
{
    double _expiryTimeInterval;
    double _purgeTimeInterval;
    double _keepAliveInterval;
    double _minimumStagingInterval;
    long long _stagingBackstopHour;
    long long _assumedKeyRollHour;
    double _scanInterval;
}

@property (readonly, nonatomic) long long assumedKeyRollHour; // @synthesize assumedKeyRollHour=_assumedKeyRollHour;
@property (nonatomic) double expiryTimeInterval; // @synthesize expiryTimeInterval=_expiryTimeInterval;
@property (readonly, nonatomic) double keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
@property (readonly, nonatomic) double minimumStagingInterval; // @synthesize minimumStagingInterval=_minimumStagingInterval;
@property (nonatomic) double purgeTimeInterval; // @synthesize purgeTimeInterval=_purgeTimeInterval;
@property (readonly, nonatomic) double scanInterval; // @synthesize scanInterval=_scanInterval;
@property (readonly, nonatomic) long long stagingBackstopHour; // @synthesize stagingBackstopHour=_stagingBackstopHour;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpiryTimeInterval:(double)arg1 purgeTimeInterval:(double)arg2 keepAliveInterval:(double)arg3 minimumStagingInterval:(double)arg4 stagingBackstopHour:(unsigned long long)arg5 assumedKeyRollHour:(unsigned long long)arg6 scanInterval:(double)arg7;
- (id)initWithExpiryTimeIntervalOrDefault:(id)arg1 purgeTimeIntervalOrDefault:(id)arg2 keepAliveIntervalOrDefault:(id)arg3 minimumStagingIntervalOrDefault:(id)arg4 stagingBackstopHourOrDefault:(id)arg5 assumedKeyRollHourOrDefault:(id)arg6 scanIntervalOrDefault:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end

