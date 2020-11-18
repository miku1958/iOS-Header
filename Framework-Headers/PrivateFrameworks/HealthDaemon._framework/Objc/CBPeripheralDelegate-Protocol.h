//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class CBCharacteristic, CBDescriptor, CBPeripheral, CBService, NSArray, NSError, NSNumber;

@protocol CBPeripheralDelegate <NSObject>

@optional
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverCharacteristicsForService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverDescriptorsForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverIncludedServicesForService:(CBService *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didDiscoverServices:(NSError *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didModifyServices:(NSArray *)arg2;
- (void)peripheral:(CBPeripheral *)arg1 didReadRSSI:(NSNumber *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateNotificationStateForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didUpdateValueForDescriptor:(CBDescriptor *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForCharacteristic:(CBCharacteristic *)arg2 error:(NSError *)arg3;
- (void)peripheral:(CBPeripheral *)arg1 didWriteValueForDescriptor:(CBDescriptor *)arg2 error:(NSError *)arg3;
- (void)peripheralDidUpdateName:(CBPeripheral *)arg1;
- (void)peripheralDidUpdateRSSI:(CBPeripheral *)arg1 error:(NSError *)arg2;
@end

