//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VirtualGarage/VGExternalAccessory-Protocol.h>

@class EAAccessory, NSString, VGExternalAccessoryState, VGVehicle, VGVehicleState;
@protocol VGExternalAccessoryUpdating;

__attribute__((visibility("hidden")))
@interface VGExternalAccessory : NSObject <VGExternalAccessory>
{
    EAAccessory *_accessory;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
    id<VGExternalAccessoryUpdating> _accessoryUpdateDelegate;
}

@property (weak, nonatomic) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate; // @synthesize accessoryUpdateDelegate=_accessoryUpdateDelegate;
@property (readonly, nonatomic) NSString *bluetoothIdentifier;
@property (readonly, nonatomic) VGExternalAccessoryState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnectedToElectricVehicle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessoryDidConnect:(id)arg1;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_accessoryDidUpdate:(id)arg1;
- (void)_accessoryDidUpdateVehicle:(id)arg1;
- (void)_loadInitialAccessoryState;
- (void)_updateFromVehicleInfo:(id)arg1;
- (void)dealloc;
- (void)getStateOfChargeForVehicle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)listCarsWithCompletion:(CDUnknownBlockType)arg1;

@end

