//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID, SFBLEDevice, SFProximityEstimator;

@interface SFDevice : NSObject <NSSecureCoding>
{
    BOOL _autoUnlockEnabled;
    BOOL _autoUnlockWatch;
    unsigned char _deviceActionType;
    unsigned char _deviceClassCode;
    unsigned char _deviceModelCode;
    BOOL _hasProblem;
    BOOL _needsKeyboard;
    BOOL _needsSetup;
    BOOL _wakeDevice;
    BOOL _watchLocked;
    unsigned char _osVersion;
    BOOL _paired;
    unsigned int _systemPairState;
    NSArray *_batteryInfo;
    SFBLEDevice *_bleDevice;
    NSString *_contactIdentifier;
    long long _deviceType;
    long long _distance;
    NSUUID *_identifier;
    NSString *_idsIdentifier;
    NSString *_model;
    NSString *_name;
    NSString *_requestSSID;
    SFProximityEstimator *_setupProximityEstimator;
}

@property (nonatomic) BOOL autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
@property (nonatomic) BOOL autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property (copy, nonatomic) NSArray *batteryInfo; // @synthesize batteryInfo=_batteryInfo;
@property (strong, nonatomic) SFBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property (copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (readonly, nonatomic) unsigned char deviceActionType; // @synthesize deviceActionType=_deviceActionType;
@property (nonatomic) unsigned char deviceClassCode; // @synthesize deviceClassCode=_deviceClassCode;
@property (readonly, nonatomic) unsigned char deviceModelCode; // @synthesize deviceModelCode=_deviceModelCode;
@property (readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property (nonatomic) long long distance; // @synthesize distance=_distance;
@property (nonatomic) BOOL hasProblem; // @synthesize hasProblem=_hasProblem;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property (nonatomic) BOOL needsSetup; // @synthesize needsSetup=_needsSetup;
@property (nonatomic) unsigned char osVersion; // @synthesize osVersion=_osVersion;
@property (nonatomic) BOOL paired; // @synthesize paired=_paired;
@property (copy, nonatomic) NSString *requestSSID; // @synthesize requestSSID=_requestSSID;
@property (strong, nonatomic) SFProximityEstimator *setupProximityEstimator; // @synthesize setupProximityEstimator=_setupProximityEstimator;
@property (nonatomic) unsigned int systemPairState; // @synthesize systemPairState=_systemPairState;
@property (nonatomic) BOOL wakeDevice; // @synthesize wakeDevice=_wakeDevice;
@property (nonatomic) BOOL watchLocked; // @synthesize watchLocked=_watchLocked;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)updateWithBLEDevice:(id)arg1;
- (void)updateWithPairedPeer:(id)arg1;

@end

