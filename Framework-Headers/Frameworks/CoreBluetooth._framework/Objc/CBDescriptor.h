//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreBluetooth/CBAttribute.h>

@class CBCharacteristic, CBPeripheral, NSNumber;

@interface CBDescriptor : CBAttribute
{
    CBCharacteristic *_characteristic;
    id _value;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
}

@property (nonatomic) CBCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
@property (readonly, nonatomic) NSNumber *handle; // @synthesize handle=_handle;
@property (readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property (strong) id value; // @synthesize value=_value;

- (void).cxx_destruct;
- (id)description;
- (id)handleValueUpdated:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2;
- (void)invalidate;

@end

