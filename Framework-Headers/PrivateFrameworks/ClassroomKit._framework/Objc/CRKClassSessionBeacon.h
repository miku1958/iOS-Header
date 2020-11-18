//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CBPeripheralManagerDelegate-Protocol.h>

@class CBPeripheralManager, DMFControlSessionIdentifier, NSDictionary, NSString;

@interface CRKClassSessionBeacon : NSObject <CBPeripheralManagerDelegate>
{
    CBPeripheralManager *mPeripheralManager;
    NSDictionary *mBeaconAdvertisement;
    BOOL _isAdvertising;
    unsigned short _flags;
    DMFControlSessionIdentifier *_advertisedIdentifier;
}

@property (copy, nonatomic) DMFControlSessionIdentifier *advertisedIdentifier; // @synthesize advertisedIdentifier=_advertisedIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short flags; // @synthesize flags=_flags;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)startAdvertisingClassSessionWithIdentifier:(id)arg1;
- (void)stopAdvertising;

@end
