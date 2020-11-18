//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID, SFBLEDevice;

@interface SFDevice : NSObject <NSSecureCoding>
{
    BOOL _autoUnlockEnabled;
    BOOL _autoUnlockWatch;
    unsigned char _deviceClass;
    BOOL _hasProblem;
    BOOL _needsKeyboard;
    BOOL _needsSetup;
    BOOL _wakeDevice;
    BOOL _watchLocked;
    BOOL _paired;
    NSArray *_batteryInfo;
    SFBLEDevice *_bleDevice;
    long long _deviceType;
    long long _distance;
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
}

@property (nonatomic) BOOL autoUnlockEnabled; // @synthesize autoUnlockEnabled=_autoUnlockEnabled;
@property (nonatomic) BOOL autoUnlockWatch; // @synthesize autoUnlockWatch=_autoUnlockWatch;
@property (readonly, copy, nonatomic) NSArray *batteryInfo; // @synthesize batteryInfo=_batteryInfo;
@property (strong, nonatomic) SFBLEDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property (readonly, nonatomic) unsigned char deviceClass; // @synthesize deviceClass=_deviceClass;
@property (readonly, nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property (nonatomic) long long distance; // @synthesize distance=_distance;
@property (nonatomic) BOOL hasProblem; // @synthesize hasProblem=_hasProblem;
@property (copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) BOOL needsKeyboard; // @synthesize needsKeyboard=_needsKeyboard;
@property (nonatomic) BOOL needsSetup; // @synthesize needsSetup=_needsSetup;
@property (nonatomic) BOOL paired; // @synthesize paired=_paired;
@property (nonatomic) BOOL wakeDevice; // @synthesize wakeDevice=_wakeDevice;
@property (nonatomic) BOOL watchLocked; // @synthesize watchLocked=_watchLocked;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)updateWithBLEDevice:(id)arg1;

@end

