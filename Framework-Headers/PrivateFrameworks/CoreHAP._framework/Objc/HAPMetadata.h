//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSSet, NSString;

@interface HAPMetadata : HMFObject
{
    NSNumber *_version;
    NSNumber *_schemaVersion;
    NSString *_hapBaseUUIDSuffix;
    NSDictionary *_rawPlist;
    NSMutableArray *_parsedUUIDs;
    NSDictionary *_hapUnitMap;
    NSDictionary *_hapPropertyMap;
    NSDictionary *_hapCharacteristicMap;
    NSDictionary *_hapServiceMap;
    NSSet *_hapSupportsAuthDataSet;
    NSDictionary *_hapCharacteristicNameTypeMap;
    NSDictionary *_hapServiceNameTypeMap;
}

@property (strong, nonatomic) NSString *hapBaseUUIDSuffix; // @synthesize hapBaseUUIDSuffix=_hapBaseUUIDSuffix;
@property (strong, nonatomic) NSDictionary *hapCharacteristicMap; // @synthesize hapCharacteristicMap=_hapCharacteristicMap;
@property (strong, nonatomic) NSDictionary *hapCharacteristicNameTypeMap; // @synthesize hapCharacteristicNameTypeMap=_hapCharacteristicNameTypeMap;
@property (readonly, nonatomic) NSArray *hapCharacteristics;
@property (readonly, nonatomic) NSArray *hapProperties;
@property (strong, nonatomic) NSDictionary *hapPropertyMap; // @synthesize hapPropertyMap=_hapPropertyMap;
@property (strong, nonatomic) NSDictionary *hapServiceMap; // @synthesize hapServiceMap=_hapServiceMap;
@property (strong, nonatomic) NSDictionary *hapServiceNameTypeMap; // @synthesize hapServiceNameTypeMap=_hapServiceNameTypeMap;
@property (readonly, nonatomic) NSArray *hapServices;
@property (strong, nonatomic) NSSet *hapSupportsAuthDataSet; // @synthesize hapSupportsAuthDataSet=_hapSupportsAuthDataSet;
@property (readonly, nonatomic) NSArray *hapSupportsAuthDataTuples;
@property (strong, nonatomic) NSDictionary *hapUnitMap; // @synthesize hapUnitMap=_hapUnitMap;
@property (readonly, nonatomic) NSArray *hapValueUnits;
@property (strong, nonatomic) NSMutableArray *parsedUUIDs; // @synthesize parsedUUIDs=_parsedUUIDs;
@property (readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property (strong, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property (strong, nonatomic) NSNumber *version; // @synthesize version=_version;

+ (id)getBuiltinInstance;
+ (id)getSharedInstance;
+ (void)setBuiltinInstanceWithDictionary:(id)arg1;
+ (BOOL)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3;
+ (id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2;
- (void).cxx_destruct;
- (BOOL)allowAssociatedService:(id)arg1;
- (id)btleToServiceType:(id)arg1;
- (id)characteristicTypeFromUTI:(id)arg1;
- (id)characteristicUTIFromType:(id)arg1;
- (id)characteristicValueUnitOfType:(id)arg1;
- (id)descriptionFromCharacteristicType:(id)arg1;
- (id)descriptionFromServiceType:(id)arg1;
- (id)generateDictionary;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (id)getDefaultCharacteristicMetadata:(id)arg1;
- (id)getDefaultCharacteristicProperties:(id)arg1;
- (id)getDefaultServiceProperties:(id)arg1;
- (id)hapCharacteristicFromName:(id)arg1;
- (id)hapCharacteristicFromType:(id)arg1;
- (id)hapServiceFromName:(id)arg1;
- (id)hapServiceFromType:(id)arg1;
- (id)hapUnitFromName:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6;
- (BOOL)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2;
- (BOOL)isStandardHAPCharacteristic:(id)arg1;
- (BOOL)isStandardHAPCharacteristicName:(id)arg1;
- (BOOL)isStandardHAPService:(id)arg1;
- (BOOL)isStandardHAPServiceName:(id)arg1;
- (BOOL)isStandardHAPUnitName:(id)arg1;
- (id)parseCharacteristicServiceTuples:(id)arg1;
- (id)parseCharacteristicValue:(id)arg1;
- (id)parseCharacteristics:(id)arg1;
- (BOOL)parseMetadata:(id)arg1;
- (id)parseProperties:(id)arg1;
- (id)parseServiceCharacteristics:(id)arg1;
- (id)parseServices:(id)arg1;
- (id)parseUnits:(id)arg1;
- (BOOL)parseVersion:(id)arg1;
- (id)serviceTypeFromUTI:(id)arg1;
- (id)serviceTypeToBTLE:(id)arg1;
- (id)serviceUTIFromType:(id)arg1;
- (BOOL)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2;
- (BOOL)updateRawPlist;
- (BOOL)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2;

@end

