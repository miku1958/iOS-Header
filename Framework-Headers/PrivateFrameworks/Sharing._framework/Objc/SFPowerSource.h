//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFPowerSource : NSObject <NSSecureCoding>
{
    struct OpaqueIOPSPowerSourceID *_psID;
    int _lowPowerMonitoringToken;
    double _lowWarnLevel;
    BOOL _charging;
    BOOL _lowPowerModeEnabled;
    BOOL _showChargingUI;
    BOOL _adapterSharedSource;
    BOOL _added;
    BOOL _present;
    int _powerState;
    int _role;
    unsigned int _changes;
    NSString *_accessoryCategory;
    NSString *_accessoryID;
    NSData *_batteryCaseAddress;
    double _chargeLevel;
    long long _color;
    long long _familyCode;
    NSString *_groupID;
    NSArray *_LEDs;
    double _maxCapacity;
    NSString *_name;
    NSString *_partID;
    NSString *_partName;
    long long _productID;
    long long _sourceID;
    NSString *_state;
    long long _temperature;
    NSString *_transportType;
    NSString *_type;
    long long _vendorID;
    long long _adapterErrorFlags;
    long long _adapterFamilyCode;
    NSString *_adapterName;
    long long _adapterSourceID;
    NSDictionary *_ioKitAdapterDescription;
    NSDictionary *_ioKitDescription;
}

@property (copy, nonatomic) NSArray *LEDs; // @synthesize LEDs=_LEDs;
@property (copy, nonatomic) NSString *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property (copy, nonatomic) NSString *accessoryID; // @synthesize accessoryID=_accessoryID;
@property (nonatomic) long long adapterErrorFlags; // @synthesize adapterErrorFlags=_adapterErrorFlags;
@property (nonatomic) long long adapterFamilyCode; // @synthesize adapterFamilyCode=_adapterFamilyCode;
@property (copy, nonatomic) NSString *adapterName; // @synthesize adapterName=_adapterName;
@property (nonatomic) BOOL adapterSharedSource; // @synthesize adapterSharedSource=_adapterSharedSource;
@property (nonatomic) long long adapterSourceID; // @synthesize adapterSourceID=_adapterSourceID;
@property (nonatomic) BOOL added; // @synthesize added=_added;
@property (copy, nonatomic) NSData *batteryCaseAddress; // @synthesize batteryCaseAddress=_batteryCaseAddress;
@property (nonatomic) unsigned int changes; // @synthesize changes=_changes;
@property (nonatomic) double chargeLevel; // @synthesize chargeLevel=_chargeLevel;
@property (nonatomic) BOOL charging; // @synthesize charging=_charging;
@property (nonatomic) long long color; // @synthesize color=_color;
@property (nonatomic) long long familyCode; // @synthesize familyCode=_familyCode;
@property (copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property (readonly, nonatomic, getter=isInternal) BOOL internal;
@property (copy, nonatomic) NSDictionary *ioKitAdapterDescription; // @synthesize ioKitAdapterDescription=_ioKitAdapterDescription;
@property (copy, nonatomic) NSDictionary *ioKitDescription; // @synthesize ioKitDescription=_ioKitDescription;
@property (readonly, nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled; // @synthesize lowPowerModeEnabled=_lowPowerModeEnabled;
@property (nonatomic) double lowWarnLevel; // @synthesize lowWarnLevel=_lowWarnLevel;
@property (readonly, nonatomic) long long matID;
@property (nonatomic) double maxCapacity; // @synthesize maxCapacity=_maxCapacity;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *partID; // @synthesize partID=_partID;
@property (copy, nonatomic) NSString *partName; // @synthesize partName=_partName;
@property (nonatomic) int powerState; // @synthesize powerState=_powerState;
@property (nonatomic) BOOL present; // @synthesize present=_present;
@property (nonatomic) long long productID; // @synthesize productID=_productID;
@property (nonatomic) int role; // @synthesize role=_role;
@property (nonatomic) BOOL showChargingUI; // @synthesize showChargingUI=_showChargingUI;
@property (nonatomic) long long sourceID; // @synthesize sourceID=_sourceID;
@property (copy, nonatomic) NSString *state; // @synthesize state=_state;
@property (nonatomic) long long temperature; // @synthesize temperature=_temperature;
@property (copy, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (nonatomic) long long vendorID; // @synthesize vendorID=_vendorID;
@property (readonly, nonatomic) BOOL wirelessCharging;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_updateWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (void)lowPowerModeChanged:(int)arg1;
- (int)publish;
- (void)startLowPowerMonitoringIfAppropriate;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
- (void)updateWithPowerSource:(id)arg1;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;

@end

