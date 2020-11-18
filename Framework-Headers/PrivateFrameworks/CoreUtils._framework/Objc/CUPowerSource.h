//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface CUPowerSource : NSObject <NSSecureCoding>
{
    struct OpaqueIOPSPowerSourceID *_psID;
    BOOL _aggregate;
    BOOL _charging;
    BOOL _showChargingUI;
    BOOL _adapterSharedSource;
    BOOL _present;
    unsigned int _expectedComponents;
    int _powerState;
    int _role;
    NSString *_accessoryCategory;
    NSString *_accessoryID;
    double _chargeLevel;
    long long _familyCode;
    NSString *_groupID;
    double _maxCapacity;
    NSString *_name;
    NSString *_partID;
    NSString *_partName;
    long long _productID;
    long long _sourceID;
    NSString *_state;
    CUPowerSource *_subLeft;
    CUPowerSource *_subRight;
    CUPowerSource *_subCase;
    CUPowerSource *_subMain;
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

@property (copy, nonatomic) NSString *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property (copy, nonatomic) NSString *accessoryID; // @synthesize accessoryID=_accessoryID;
@property (nonatomic) long long adapterErrorFlags; // @synthesize adapterErrorFlags=_adapterErrorFlags;
@property (nonatomic) long long adapterFamilyCode; // @synthesize adapterFamilyCode=_adapterFamilyCode;
@property (copy, nonatomic) NSString *adapterName; // @synthesize adapterName=_adapterName;
@property (nonatomic) BOOL adapterSharedSource; // @synthesize adapterSharedSource=_adapterSharedSource;
@property (nonatomic) long long adapterSourceID; // @synthesize adapterSourceID=_adapterSourceID;
@property (nonatomic) BOOL aggregate; // @synthesize aggregate=_aggregate;
@property (nonatomic) double chargeLevel; // @synthesize chargeLevel=_chargeLevel;
@property (nonatomic) BOOL charging; // @synthesize charging=_charging;
@property (nonatomic) unsigned int expectedComponents; // @synthesize expectedComponents=_expectedComponents;
@property (nonatomic) long long familyCode; // @synthesize familyCode=_familyCode;
@property (copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property (copy, nonatomic) NSDictionary *ioKitAdapterDescription; // @synthesize ioKitAdapterDescription=_ioKitAdapterDescription;
@property (copy, nonatomic) NSDictionary *ioKitDescription; // @synthesize ioKitDescription=_ioKitDescription;
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
@property (strong, nonatomic) CUPowerSource *subCase; // @synthesize subCase=_subCase;
@property (strong, nonatomic) CUPowerSource *subLeft; // @synthesize subLeft=_subLeft;
@property (strong, nonatomic) CUPowerSource *subMain; // @synthesize subMain=_subMain;
@property (strong, nonatomic) CUPowerSource *subRight; // @synthesize subRight=_subRight;
@property (nonatomic) long long temperature; // @synthesize temperature=_temperature;
@property (copy, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (nonatomic) long long vendorID; // @synthesize vendorID=_vendorID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)handleSubComponentsUpdated;
- (void)handleSubComponentsUpdatedWithBaseSource:(id)arg1;
- (BOOL)hasAllComponents;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (BOOL)isAggregateComponent;
- (BOOL)isEqual:(id)arg1;
- (int)publish;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;

@end
