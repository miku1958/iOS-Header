//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccessibilityUtilities/AXIDCManager.h>

#import <AXHearingSupport/AXHADeviceControllerProtocol-Protocol.h>
#import <AXHearingSupport/AXIDCRemoteControllerDelegate-Protocol.h>
#import <AXHearingSupport/NSNetServiceBrowserDelegate-Protocol.h>

@class AXHAAccessQueueTimer, AXHearingSlaveController, NSMutableArray, NSMutableDictionary, NSString;
@protocol AXIDCManagerSecurityDelegate;

@interface AXHAControllerBrowser : AXIDCManager <NSNetServiceBrowserDelegate, AXIDCRemoteControllerDelegate, AXHADeviceControllerProtocol>
{
    AXHAAccessQueueTimer *_deviceUpdatesTimer;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXHearingSlaveController *_slaveController;
    NSMutableArray *_updateDeviceBlocks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id<AXIDCManagerSecurityDelegate> securityDelegate;
@property (strong, nonatomic) AXHearingSlaveController *slaveController; // @synthesize slaveController=_slaveController;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableArray *updateDeviceBlocks; // @synthesize updateDeviceBlocks=_updateDeviceBlocks;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)becomeMaster;
- (void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
- (void)controller:(id)arg1 didFinishSendingData:(id)arg2;
- (void)controller:(id)arg1 didReceiveData:(id)arg2;
- (void)controllerDidFinishConnecting:(id)arg1;
- (void)dealloc;
- (void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
- (id)init;
- (void)logWifiName;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)registerForPropertyUpdates:(CDUnknownBlockType)arg1;
- (void)repairSplitConnection;
- (void)resolveMasterWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)shouldBecomeMaster;
- (BOOL)shouldRelinquishConnectionForReason:(long long)arg1;
- (void)stopPropertyUpdates;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)writePayload:(id)arg1 toControllers:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forControllers:(id)arg3;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3;

@end
