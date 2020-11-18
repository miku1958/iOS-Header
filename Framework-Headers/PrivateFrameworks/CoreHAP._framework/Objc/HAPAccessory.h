//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HAPAccessoryServer, NSArray, NSNumber, NSString;
@protocol HAPAccessoryDelegate, OS_dispatch_queue;

@interface HAPAccessory : NSObject
{
    BOOL _reachable;
    BOOL _supportsBridgeConfiguration;
    BOOL _primary;
    BOOL _supportsRelay;
    NSNumber *_category;
    id<HAPAccessoryDelegate> _delegate;
    HAPAccessoryServer *_server;
    NSString *_identifier;
    NSNumber *_instanceID;
    NSArray *_services;
    NSString *_serverIdentifier;
    long long _linkType;
    NSString *_uniqueIdentifier;
    NSString *_name;
    NSString *_model;
    NSString *_manufacturer;
    NSString *_serialNumber;
    NSString *_firmwareVersion;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (copy, nonatomic) NSNumber *category; // @synthesize category=_category;
@property (weak, nonatomic) id<HAPAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property (readonly, nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property (copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (nonatomic, getter=isPrimary) BOOL primary; // @synthesize primary=_primary;
@property (nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property (weak, nonatomic) HAPAccessoryServer *server; // @synthesize server=_server;
@property (copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property (strong, nonatomic) NSArray *services; // @synthesize services=_services;
@property (nonatomic) BOOL supportsBridgeConfiguration; // @synthesize supportsBridgeConfiguration=_supportsBridgeConfiguration;
@property (nonatomic) BOOL supportsRelay; // @synthesize supportsRelay=_supportsRelay;
@property (copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (strong) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)instanceIDForUniqueIdentifier:(id)arg1;
+ (BOOL)isAccessoryPairedWithIdentifier:(id)arg1;
+ (BOOL)isAccessoryPrimaryWithUniqueIdentifier:(id)arg1;
+ (id)serverIdentifierWithUniqueIdentifier:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_isReachable;
- (void)_setCategory:(id)arg1;
- (void)_setReachable:(BOOL)arg1;
- (void)_setSupportsBridgeConfiguration:(BOOL)arg1;
- (BOOL)_supportsBridgeConfiguration;
- (BOOL)_updateAndValidateServices;
- (BOOL)_updateForAccessoryInformationService;
- (BOOL)_updateService:(id)arg1;
- (id)characteristicOfType:(id)arg1 serviceType:(id)arg2;
- (id)characteristicsOfType:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (void)invalidate;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)servicesOfType:(id)arg1;
- (BOOL)validateCharacteristicValues:(id *)arg1;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
