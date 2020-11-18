//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HMFMerging-Protocol.h>

@class CBService, HAPAccessory, NSArray, NSNumber, NSString;

@interface HAPService : HMFObject <HMFMerging>
{
    NSString *_type;
    NSNumber *_instanceID;
    HAPAccessory *_accessory;
    NSArray *_characteristics;
    NSArray *_linkedServices;
    unsigned long long _serviceProperties;
}

@property (weak, nonatomic) HAPAccessory *accessory; // @synthesize accessory=_accessory;
@property (strong, nonatomic, setter=setCBService:) CBService *cbService;
@property (strong, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property (strong, nonatomic) NSArray *linkedServices; // @synthesize linkedServices=_linkedServices;
@property (nonatomic) unsigned long long serviceProperties; // @synthesize serviceProperties=_serviceProperties;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;

- (void).cxx_destruct;
- (BOOL)_updateAndValidateCharacteristics;
- (BOOL)_updateCharacteristic:(id)arg1;
- (BOOL)_validateMandatoryCharacteristics;
- (BOOL)_validateServiceCharacteristics;
- (id)characteristicsOfType:(id)arg1;
- (id)initWithType:(id)arg1 instanceID:(id)arg2;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToService:(id)arg1;
- (BOOL)mergeObject:(id)arg1;
- (id)propertiesDescription;
- (BOOL)shouldMergeObject:(id)arg1;

@end

