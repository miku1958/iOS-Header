//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VirtualGarage/INIntentResponseObserver-Protocol.h>
#import <VirtualGarage/VGOEMApplication-Protocol.h>

@class INCExtensionConnection, LSApplicationRecord, NSArray, NSString;
@protocol OS_dispatch_queue, VGOEMAppSOCStreaming;

@interface VGOEMApplication : NSObject <INIntentResponseObserver, VGOEMApplication>
{
    NSObject<OS_dispatch_queue> *_queue;
    INCExtensionConnection *_chargeStreamingConnection;
    BOOL _enabled;
    LSApplicationRecord *_applicationRecord;
    id<VGOEMAppSOCStreaming> _chargeStreamingDelegate;
    NSString *_identifier;
    NSArray *_allowedFormulaIDs;
}

@property (strong, nonatomic) NSArray *allowedFormulaIDs; // @synthesize allowedFormulaIDs=_allowedFormulaIDs;
@property (readonly, nonatomic) LSApplicationRecord *applicationRecord; // @synthesize applicationRecord=_applicationRecord;
@property (weak, nonatomic) id<VGOEMAppSOCStreaming> chargeStreamingDelegate; // @synthesize chargeStreamingDelegate=_chargeStreamingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_VGChargingConnectorTypeOptionFromINCarChargingConnectorType:(id)arg1;
- (unsigned long long)_VGChargingConnectorTypeOptionsFromINCarChargingConnectorTypes:(id)arg1;
- (id)_connectionWithIntent:(id)arg1;
- (void)_createChargeStreamingConnectionIfNeededForVehicle:(id)arg1;
- (BOOL)_isValidConsumptionModelForResponse:(id)arg1;
- (id)_powerByConnectorDictionaryFromCar:(id)arg1;
- (id)_vehicleStateFromResponse:(id)arg1 error:(id *)arg2;
- (id)_vehiclesFromListCarsIntentResponse:(id)arg1;
- (void)getStateOfChargeForVehicle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithIdentifier:(id)arg1 applicationRecord:(id)arg2;
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)listCarsWithCompletion:(CDUnknownBlockType)arg1;
- (void)startSendingChargeUpdatesForVehicle:(id)arg1;
- (void)stopSendingChargeUpdatesForVehicle:(id)arg1;

@end
