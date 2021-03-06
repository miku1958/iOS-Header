//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDActiveSiriSessionInfoDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDActiveSiriSessionInfo, HMDSiriRemoteInputServer, NSString;

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging>
{
    NSString *_identifier;
    HMDSiriRemoteInputServer *_server;
    HMDActiveSiriSessionInfo *_activeSessionInfo;
}

@property (strong, nonatomic) HMDActiveSiriSessionInfo *activeSessionInfo; // @synthesize activeSessionInfo=_activeSessionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (weak, nonatomic) HMDSiriRemoteInputServer *server; // @synthesize server=_server;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)siriSessionForUI;
- (void).cxx_destruct;
- (id)_createArgsDictionaryWithError:(id)arg1;
- (BOOL)_startStream;
- (void)_stopStream;
- (BOOL)activateWithAccessory:(id)arg1;
- (id)activeSessionToken;
- (void)activeSiriSession:(id)arg1 didCreateAudioFrame:(id)arg2 sequenceNumber:(id)arg3 gain:(id)arg4;
- (void)activeSiriSessionDidStop:(id)arg1;
- (void)deactivate;
- (void)handleResetStream;
- (void)handleStartStream;
- (void)handleStopStream;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidate;
- (void)publish;
- (void)sendMsg:(const char *)arg1 args:(id)arg2;
- (void)setActiveBulkSendSession:(id)arg1;

@end

