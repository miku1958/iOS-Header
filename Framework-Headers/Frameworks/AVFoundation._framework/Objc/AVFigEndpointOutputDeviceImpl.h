//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputDeviceImpl-Protocol.h>

@class AVOutputDevice, AVWeakReference, NSArray, NSData, NSNumber, NSString;

@interface AVFigEndpointOutputDeviceImpl : NSObject <AVOutputDeviceImpl>
{
    AVOutputDevice *_parentDevice;
    AVWeakReference *_weakObserver;
    struct OpaqueFigEndpoint *_figEndpoint;
}

@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSNumber *batteryLevel;
@property (readonly, nonatomic) BOOL canAccessRemoteAssets;
@property (readonly, nonatomic) BOOL canBeGroupLeader;
@property (readonly, nonatomic) BOOL canBeGrouped;
@property (readonly, nonatomic) BOOL canRelayCommunicationChannel;
@property (readonly) BOOL canSetVolume;
@property (readonly, nonatomic) NSNumber *caseBatteryLevel;
@property (readonly, copy, nonatomic) NSArray *connectedPairedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long deviceFeatures;
@property (readonly, nonatomic) long long deviceSubType;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) BOOL groupContainsGroupLeader;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSData *identifyingMACAddress;
@property (readonly, nonatomic, getter=isInUseByPairedDevice) BOOL inUseByPairedDevice;
@property (readonly, nonatomic) BOOL isGroupLeader;
@property (readonly, nonatomic) NSNumber *leftBatteryLevel;
@property (readonly, nonatomic) NSString *logicalDeviceID;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, copy, nonatomic) NSString *name;
@property (weak) AVOutputDevice *parentOutputDevice; // @synthesize parentOutputDevice=_parentDevice;
@property (readonly, nonatomic) BOOL participatesInGroupPlayback;
@property (readonly, nonatomic) BOOL requiresAuthorization;
@property (readonly, nonatomic) NSNumber *rightBatteryLevel;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly) Class superclass;
@property (readonly) float volume;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_canSetEndpointVolumeDidChangeForEndpointWithID:(struct __CFString *)arg1;
- (id)_figEndpointPropertyValueForKey:(struct __CFString *)arg1;
- (void)_volumeDidChangeForEndpointWithID:(struct __CFString *)arg1;
- (void)configureUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (struct OpaqueFigEndpoint *)figEndpoint;
- (id)init;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setSecondDisplayEnabled:(BOOL)arg1;
- (void)setVolume:(float)arg1;

@end

