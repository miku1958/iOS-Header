//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDNanoSyncServerInterface-Protocol.h>

@class HDNanoSyncManager, NSString;

@interface HDNanoSyncServer : HDSubserver <HDNanoSyncServerInterface>
{
    HDNanoSyncManager *_nanoSyncManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithParentServer:(id)arg1;
- (void)remote_fetchNanoSyncPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_resetNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end
