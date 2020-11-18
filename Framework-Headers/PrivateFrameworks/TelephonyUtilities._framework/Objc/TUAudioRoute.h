//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TURoute.h>

@class NSDictionary, NSString;

@interface TUAudioRoute : TURoute
{
    NSString *_avAudioRouteName;
    NSDictionary *_route;
}

@property (readonly, copy, nonatomic) NSString *avAudioRouteName; // @synthesize avAudioRouteName=_avAudioRouteName;
@property (readonly, copy, nonatomic) NSString *bluetoothProductIdentifier;
@property (readonly, nonatomic, getter=isHeadphoneJackConnected) BOOL headphoneJackConnected;
@property (readonly, copy, nonatomic) NSDictionary *route; // @synthesize route=_route;

- (void).cxx_destruct;
- (BOOL)_routeTypeEqualTo:(id)arg1;
- (long long)bluetoothEndpointType;
- (long long)deviceType;
- (id)identifiersOfOtherConnectedDevices;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isAirTunes;
- (BOOL)isBluetooth;
- (BOOL)isBluetoothLE;
- (BOOL)isCarAudio;
- (BOOL)isCurrentlyPicked;
- (BOOL)isDefaultRoute;
- (BOOL)isHandset;
- (BOOL)isPreferred;
- (BOOL)isPreferredAndActive;
- (BOOL)isReceiver;
- (BOOL)isSpeaker;
- (BOOL)isWiredHeadphones;
- (BOOL)isWiredHeadset;
- (BOOL)isWirelessHeadset;
- (BOOL)supportsPreferredAndActive;

@end

