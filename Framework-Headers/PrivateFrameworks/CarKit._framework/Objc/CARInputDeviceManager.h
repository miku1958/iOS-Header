//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/CARInputDeviceTouchpadDelegate-Protocol.h>

@class CARSession, NSArray, NSString;

@interface CARInputDeviceManager : NSObject <CARInputDeviceTouchpadDelegate>
{
    NSArray *_inputDevices;
    CARSession *_session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *inputDevices; // @synthesize inputDevices=_inputDevices;
@property (readonly, weak, nonatomic) CARSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateTouchpadsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_generateInputDevicesWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3;
- (id)_initWithInputDevices:(id)arg1 session:(id)arg2;
- (id)_inputDeviceWithSenderID:(unsigned long long)arg1;
- (id)_touchpadSettingsFromVehicleInformation:(id)arg1;
- (void)_updateTouchpadSettings:(id)arg1;
- (id)initWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3 session:(id)arg4;
- (void)performHapticType:(unsigned long long)arg1 deviceUUID:(id)arg2;
- (BOOL)touchpadCharacterRecognitionSupported;
- (id)touchpadWithSenderID:(unsigned long long)arg1;
- (void)vehicleInformationChanged:(id)arg1;

@end

