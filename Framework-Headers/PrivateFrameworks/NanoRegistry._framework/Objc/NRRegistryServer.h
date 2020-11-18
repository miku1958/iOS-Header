//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRRegistryHistoryStore.h>

#import <NanoRegistry/NRXPCRegistryDelegate-Protocol.h>
#import <NanoRegistry/NRXPCServerDelegate-Protocol.h>

@class NRXPCServer, NSString;

@interface NRRegistryServer : NRRegistryHistoryStore <NRXPCServerDelegate, NRXPCRegistryDelegate>
{
    BOOL _sentLaunchUpdate;
    int _devicesUpdateCounterNotifyToken;
    unsigned long long _tokenValue;
    NRXPCServer *_registryServer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicesUpdateCounterNotifyToken; // @synthesize devicesUpdateCounterNotifyToken=_devicesUpdateCounterNotifyToken;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NRXPCServer *registryServer; // @synthesize registryServer=_registryServer;
@property (nonatomic) BOOL sentLaunchUpdate; // @synthesize sentLaunchUpdate=_sentLaunchUpdate;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tokenValue; // @synthesize tokenValue=_tokenValue;

+ (Class)proxyClass;
+ (Class)xpcListenerClass;
- (void).cxx_destruct;
- (id)_dumpSecureProperties:(id)arg1 propertyIDList:(id)arg2;
- (void)_notifyClients;
- (unsigned long long)_tokenValue;
- (id)initWithParameters:(id)arg1;
- (void)invalidate;
- (void)xpcApplyDiff:(id)arg1 withSecureProperties:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)xpcClientInfo:(CDUnknownBlockType)arg1;
- (void)xpcDeviceIDAtSwitchIndex:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)xpcGetChangeHistoryWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcGetDeviceCollectionWithBlock:(CDUnknownBlockType)arg1;
- (void)xpcGetDiffSinceTokenValue:(unsigned long long)arg1 getSecureProperties:(BOOL)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)xpcRetrieveSecureProperties:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)xpcSetMigrationConsented:(BOOL)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)xpcSwitchIndex:(CDUnknownBlockType)arg1;

@end
