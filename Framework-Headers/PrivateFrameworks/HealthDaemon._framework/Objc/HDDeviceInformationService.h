//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@class HDHealthServicePropertyManager, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HDDeviceInformationService : HDHealthService
{
    BOOL _deviceInformationHasBeenLoaded;
    HDHealthServicePropertyManager *_propertyManager;
    NSMutableDictionary *_characteristics;
    NSMutableDictionary *_propertyValues;
    NSMutableSet *_propertiesLeftToFetch;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingDeviceInformationLoadedBlocks;
}

@property (strong, nonatomic) NSMutableDictionary *characteristics; // @synthesize characteristics=_characteristics;
@property (nonatomic) BOOL deviceInformationHasBeenLoaded; // @synthesize deviceInformationHasBeenLoaded=_deviceInformationHasBeenLoaded;
@property (readonly) NSString *firmwareRevision;
@property (readonly) NSString *hardwareRevision;
@property (readonly) NSString *manufacturerName;
@property (readonly) NSString *modelNumber;
@property (strong, nonatomic) NSMutableArray *pendingDeviceInformationLoadedBlocks; // @synthesize pendingDeviceInformationLoadedBlocks=_pendingDeviceInformationLoadedBlocks;
@property (strong, nonatomic) NSMutableSet *propertiesLeftToFetch; // @synthesize propertiesLeftToFetch=_propertiesLeftToFetch;
@property (weak, nonatomic) HDHealthServicePropertyManager *propertyManager; // @synthesize propertyManager=_propertyManager;
@property (strong, nonatomic) NSMutableDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *softwareRevision;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;
- (void).cxx_destruct;
- (id)_propertyValueForCharacteristic:(id)arg1;
- (id)_propertyValueForPropertyName:(id)arg1;
- (void)_queue_peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)_queue_peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)_queue_readProperty:(id)arg1;
- (void)_queue_setDeviceInformationHasBeenLoaded;
- (void)_startDeviceInformationLoadingTimeoutTimer;
- (id)initWithDevicePropertyManager:(id)arg1 healthDaemon:(id)arg2 peripheral:(id)arg3;
- (void)performWhenDeviceInformationHasBeenLoaded:(CDUnknownBlockType)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)readProperty:(id)arg1;

@end

