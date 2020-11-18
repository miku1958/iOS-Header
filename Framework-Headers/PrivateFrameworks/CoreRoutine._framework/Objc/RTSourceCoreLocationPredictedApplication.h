//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreRoutine/RTSource.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class CLLocation, NSData, NSDate, NSNumber, NSString, NSUUID;

@interface RTSourceCoreLocationPredictedApplication : RTSource <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;
    NSData *_icon;
    NSString *_developer;
    NSNumber *_adamId;
    long long _installationState;
    CLLocation *_location;
    double _distance;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (strong, nonatomic) NSNumber *adamId; // @synthesize adamId=_adamId;
@property (strong, nonatomic) NSString *developer; // @synthesize developer=_developer;
@property (nonatomic) double distance; // @synthesize distance=_distance;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) NSData *icon; // @synthesize icon=_icon;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long installationState; // @synthesize installationState=_installationState;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (id)allowedKeys;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 developer:(id)arg2 adamId:(id)arg3 icon:(id)arg4 installationState:(long long)arg5 location:(id)arg6 distance:(double)arg7 startDate:(id)arg8 endDate:(id)arg9;
- (BOOL)isEqual:(id)arg1;
- (BOOL)validAtLocation:(id)arg1;
- (BOOL)validOnDate:(id)arg1;

@end
