//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NRDevicePropertyObserver-Protocol.h>
#import <CompanionSync/SYStateLoggable-Protocol.h>

@class NRDevice, NSDate, NSString, NSUUID, PBCodable;

@interface SYDevice : NSObject <NRDevicePropertyObserver, SYStateLoggable>
{
    NRDevice *_nrDevice;
    NSUUID *_pairingID;
    long long _state;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceClass;
@property (readonly, nonatomic) long long deviceCode;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDate *lastActiveDate;
@property (readonly, nonatomic) NRDevice *nrDevice; // @synthesize nrDevice=_nrDevice;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) NSUUID *pairingID; // @synthesize pairingID=_pairingID;
@property (readonly, copy, nonatomic) NSString *pairingStorePath;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly, nonatomic) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFileTransferMessageSend;
@property (readonly, nonatomic) NSString *systemBuildVersion;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic, getter=isTargetable) BOOL targetable;

+ (id)deviceForIDSDevice:(id)arg1;
+ (id)deviceForIDSDeviceID:(id)arg1 fromList:(id)arg2;
+ (id)deviceForNRDevice:(id)arg1;
+ (id)knownDevices;
+ (id)targetableDevice;
- (void).cxx_destruct;
- (void)_updateStateFlagsPostingNotifications:(BOOL)arg1;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)findMatchingIDSDeviceFromList:(id)arg1;
- (id)init;
- (id)initWithNRDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
