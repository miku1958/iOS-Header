//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, TUAudioRoutePreferredRouteOptions;

@interface TUAudioRoute : NSObject
{
    NSString *_uniqueIdentifier;
    NSString *_name;
    TUAudioRoutePreferredRouteOptions *_preferredRouteOptions;
    NSDictionary *_route;
}

@property (readonly, nonatomic, getter=isAirTunes) BOOL airTunes;
@property (readonly, nonatomic, getter=isBluetooth) BOOL bluetooth;
@property (readonly, nonatomic) long long bluetoothEndpointType;
@property (readonly, nonatomic, getter=isBluetoothLE) BOOL bluetoothLE;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isCarAudio) BOOL carAudio;
@property (readonly, nonatomic, getter=isCurrentlyPicked) BOOL currentlyPicked;
@property (readonly, nonatomic, getter=isDefaultRoute) BOOL defaultRoute;
@property (readonly, nonatomic) long long deviceModelType;
@property (readonly, nonatomic, getter=isHandset) BOOL handset;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, nonatomic) NSArray *identifiersOfOtherConnectedDevices;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic, getter=isPreferred) BOOL preferred;
@property (strong, nonatomic) TUAudioRoutePreferredRouteOptions *preferredRouteOptions; // @synthesize preferredRouteOptions=_preferredRouteOptions;
@property (readonly, nonatomic, getter=isReceiver) BOOL receiver;
@property (readonly, copy, nonatomic) NSDictionary *route; // @synthesize route=_route;
@property (readonly, nonatomic, getter=isSpeaker) BOOL speaker;
@property (copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic, getter=isWiredHeadphones) BOOL wiredHeadphones;
@property (readonly, nonatomic, getter=isWiredHeadset) BOOL wiredHeadset;
@property (readonly, nonatomic, getter=isWirelessHeadset) BOOL wirelessHeadset;

- (void).cxx_destruct;
- (BOOL)_routeNameEqualTo:(id)arg1;
- (BOOL)_routeTypeEqualTo:(id)arg1;
- (void)_updatePreferredRouteOptions;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTUAudioRoute:(id)arg1;

@end

