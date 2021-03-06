//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSDate, NSNumber, NSString, NSUUID, SPHandle;

@interface SPCommand : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _enableLostMode;
    NSUUID *_identifier;
    NSUUID *_beaconIdentifier;
    long long _type;
    NSDate *_expiration;
    NSNumber *_duration;
    long long _playSoundContext;
    SPHandle *_handle;
    NSString *_lostModeMessage;
    NSString *_lostModePhoneNumber;
    NSString *_obfuscatedIdentifier;
}

@property (copy, nonatomic) NSUUID *beaconIdentifier; // @synthesize beaconIdentifier=_beaconIdentifier;
@property (copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL enableLostMode; // @synthesize enableLostMode=_enableLostMode;
@property (copy, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property (copy, nonatomic) SPHandle *handle; // @synthesize handle=_handle;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *lostModeMessage; // @synthesize lostModeMessage=_lostModeMessage;
@property (copy, nonatomic) NSString *lostModePhoneNumber; // @synthesize lostModePhoneNumber=_lostModePhoneNumber;
@property (copy, nonatomic) NSString *obfuscatedIdentifier; // @synthesize obfuscatedIdentifier=_obfuscatedIdentifier;
@property (nonatomic) long long playSoundContext; // @synthesize playSoundContext=_playSoundContext;
@property (readonly, copy, nonatomic) NSString *taskName;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (id)acceptShareWithBeaconUUID:(id)arg1;
+ (id)beginLeashingWithBeaconUUID:(id)arg1;
+ (id)connectToBeaconUUID:(id)arg1;
+ (id)declineShareWithBeaconUUID:(id)arg1;
+ (id)disableLostModeForBeaconUUID:(id)arg1;
+ (id)disableNotifyWhenFound:(id)arg1;
+ (id)enableLostModeForBeaconUUID:(id)arg1 message:(id)arg2 phoneNumber:(id)arg3;
+ (id)enableNotifyWhenFound:(id)arg1;
+ (id)endLeashingWithBeaconUUID:(id)arg1;
+ (id)locate:(id)arg1;
+ (id)playSoundWithBeaconUUID:(id)arg1;
+ (id)playSoundWithBeaconUUID:(id)arg1 duration:(double)arg2;
+ (id)playSoundWithBeaconUUID:(id)arg1 withContext:(long long)arg2;
+ (id)setObfuscatedIdentifier:(id)arg1;
+ (id)startNotifyWhenFound:(id)arg1;
+ (id)startSharingWithBeaconUUID:(id)arg1 handle:(id)arg2 expiration:(id)arg3;
+ (id)stopNotifyWhenFound:(id)arg1;
+ (id)stopSharingWithBeaconUUID:(id)arg1 handle:(id)arg2;
+ (id)stopSoundWithBeaconUUID:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)updateAccessoryFirmware:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 handle:(id)arg5 lostModeMessage:(id)arg6 lostModePhoneNumber:(id)arg7 obfuscatedIdentifier:(id)arg8 identifier:(id)arg9;
- (id)initWithBeaconUUID:(id)arg1 type:(long long)arg2 expiration:(id)arg3 duration:(id)arg4 playSoundContext:(long long)arg5 handle:(id)arg6 lostModeMessage:(id)arg7 lostModePhoneNumber:(id)arg8 obfuscatedIdentifier:(id)arg9 identifier:(id)arg10;
- (id)initWithCoder:(id)arg1;

@end

