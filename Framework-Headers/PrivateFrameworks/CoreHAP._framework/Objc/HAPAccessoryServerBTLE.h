//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

@class CBPeripheral, HAPAccessoryServerBrowserBTLE, NSNumber;

@interface HAPAccessoryServerBTLE : HAPAccessoryServer
{
    unsigned char _connectReason;
    BOOL _stateChanged;
    BOOL _notifyingCharacteristicUpdated;
    unsigned char _connectionIdleTime;
    NSNumber *_stateNumber;
    CBPeripheral *_peripheral;
    unsigned long long _hapBLEProtocolVersion;
    unsigned long long _resumeSessionID;
    HAPAccessoryServerBrowserBTLE *_browser;
}

@property (readonly, weak, nonatomic) HAPAccessoryServerBrowserBTLE *browser; // @synthesize browser=_browser;
@property (nonatomic) unsigned char connectReason; // @synthesize connectReason=_connectReason;
@property (nonatomic) unsigned char connectionIdleTime; // @synthesize connectionIdleTime=_connectionIdleTime;
@property (readonly, nonatomic) unsigned long long hapBLEProtocolVersion; // @synthesize hapBLEProtocolVersion=_hapBLEProtocolVersion;
@property (nonatomic) BOOL notifyingCharacteristicUpdated; // @synthesize notifyingCharacteristicUpdated=_notifyingCharacteristicUpdated;
@property (readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property (readonly, nonatomic) unsigned long long resumeSessionID; // @synthesize resumeSessionID=_resumeSessionID;
@property (nonatomic) BOOL stateChanged; // @synthesize stateChanged=_stateChanged;
@property (strong, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;

+ (id)hapUUIDFromBTLEUUID:(id)arg1;
- (void).cxx_destruct;
- (void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(BOOL)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13;
- (long long)linkType;
- (void)notifyDelegateUdpatedStateNumber;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (void)updatePeripheral:(id)arg1;
- (BOOL)updatePeripheralIdentifier:(id *)arg1;
- (BOOL)updateResumeSessionID:(unsigned long long)arg1;

@end

