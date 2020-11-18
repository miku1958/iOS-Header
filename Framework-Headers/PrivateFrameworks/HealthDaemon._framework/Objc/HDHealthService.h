//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDHSCharacteristicsDelegate-Protocol.h>

@class HDDeviceEntity, HDHealthPeripheral, HDHealthServiceManager, HDProfile, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HDHealthService : NSObject <HDHSCharacteristicsDelegate>
{
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMutableArray *_pendingObjectBuffer;
    NSMutableArray *_pendingCharacteristicBuffer;
    HDDeviceEntity *_deviceEntity;
    BOOL _deliverData;
    BOOL _characteristicsDiscovered;
    int _deviceInformationLoaded;
    HDProfile *_profile;
    HDHealthPeripheral *_healthPeripheral;
    NSUUID *_peripheralUUID;
    NSString *_serviceId;
    HDHealthServiceManager *_serviceManager;
    NSMutableDictionary *_writableCharacteristics;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableArray *_pendingWrites;
}

@property (readonly, nonatomic) BOOL characteristicsDiscovered; // @synthesize characteristicsDiscovered=_characteristicsDiscovered;
@property BOOL deliverData; // @synthesize deliverData=_deliverData;
@property (nonatomic) int deviceInformationLoaded; // @synthesize deviceInformationLoaded=_deviceInformationLoaded;
@property (readonly, weak, nonatomic) HDHealthPeripheral *healthPeripheral; // @synthesize healthPeripheral=_healthPeripheral;
@property (strong, nonatomic) NSMutableArray *pendingWrites; // @synthesize pendingWrites=_pendingWrites;
@property (readonly, nonatomic) NSUUID *peripheralUUID; // @synthesize peripheralUUID=_peripheralUUID;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property (strong, nonatomic) HDHealthServiceManager *serviceManager; // @synthesize serviceManager=_serviceManager;
@property (strong, nonatomic) NSMutableDictionary *writableCharacteristics; // @synthesize writableCharacteristics=_writableCharacteristics;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;
- (void).cxx_destruct;
- (void)_bufferCharacteristicToBeNotified:(id)arg1;
- (void)_bufferObjectToBePersisted:(id)arg1;
- (void)_dataQueue_deliverDataIfPossible;
- (id)_dataQueue_deviceEntity;
- (void)_dataQueue_notifyCharacteristic:(id)arg1;
- (void)_dataQueue_persistData:(id)arg1;
- (BOOL)_shouldNotifyReceivedData;
- (void)characteristicDataReceived:(id)arg1;
- (id)description;
- (void)deviceDisconnecting;
- (void)deviceInformationSetOnPeripheral;
- (void)executeFirstWrite;
- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;
- (void)markCharacteristicsDiscovered;
- (void)mfaSucceededOnPeripheral;
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristics:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (BOOL)processAdvertisementData:(id)arg1;
- (void)readProperty:(id)arg1;
- (void)respondFirstWriteWithData:(id)arg1 error:(id)arg2;
- (void)serviceDataReceived:(id)arg1;
- (id)servicesInProfile;
- (void)setWritableCharacteristic:(id)arg1;
- (BOOL)supportsOperation:(id)arg1;
- (BOOL)supportsWritingCharacteristic:(id)arg1;
- (void)writeCharacteristic:(id)arg1 expectResponse:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

