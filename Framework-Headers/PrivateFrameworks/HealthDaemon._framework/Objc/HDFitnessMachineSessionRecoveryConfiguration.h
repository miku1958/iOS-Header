//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSUUID;

@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <NSSecureCoding>
{
    NSUUID *_sessionUUID;
    NSUUID *_machineUUID;
    unsigned long long _machineType;
    NSString *_machineName;
    NSString *_machineBrand;
    unsigned long long _activityType;
    NSDate *_machineStartDate;
    NSDate *_machinePreferredUntilDate;
    NSData *_nfcSessionIDData;
}

@property (readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property (copy, nonatomic) NSString *machineBrand; // @synthesize machineBrand=_machineBrand;
@property (readonly, copy, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property (readonly, nonatomic) NSDate *machinePreferredUntilDate; // @synthesize machinePreferredUntilDate=_machinePreferredUntilDate;
@property (readonly, nonatomic) NSDate *machineStartDate; // @synthesize machineStartDate=_machineStartDate;
@property (readonly, nonatomic) unsigned long long machineType; // @synthesize machineType=_machineType;
@property (readonly, nonatomic) NSUUID *machineUUID; // @synthesize machineUUID=_machineUUID;
@property (readonly, nonatomic) NSData *nfcSessionIDData; // @synthesize nfcSessionIDData=_nfcSessionIDData;
@property (readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 machineUUID:(id)arg2 machineType:(unsigned long long)arg3 machineName:(id)arg4 machineBrand:(id)arg5 activityType:(unsigned long long)arg6 machineStartDate:(id)arg7 machinePreferredUntilDate:(id)arg8 nfcSessionIDData:(id)arg9;

@end

