//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCyclerPrimaryDeviceCoordinatorDelegate-Protocol.h>
#import <SafariShared/WBSCyclerSecondaryDeviceCoordinatorDelegate-Protocol.h>

@class NSNumber, NSString, WBSCyclerPrimaryDeviceCoordinator, WBSCyclerSecondaryDeviceCoordinator;
@protocol OS_dispatch_queue, WBSCyclerDeviceCoordinatorDelegate;

@interface WBSCyclerDeviceCoordinator : NSObject <WBSCyclerPrimaryDeviceCoordinatorDelegate, WBSCyclerSecondaryDeviceCoordinatorDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _primaryDevicePort;
    NSString *_primaryDeviceHost;
    WBSCyclerPrimaryDeviceCoordinator *_primaryDeviceCoordinator;
    WBSCyclerSecondaryDeviceCoordinator *_secondaryDeviceCoordinator;
    id<WBSCyclerDeviceCoordinatorDelegate> _delegate;
    NSNumber *_numberOfSecondaryDevices;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSCyclerDeviceCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNumber *numberOfSecondaryDevices; // @synthesize numberOfSecondaryDevices=_numberOfSecondaryDevices;
@property (readonly, copy, nonatomic) NSString *primaryDeviceAddress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (void)_didEncounterError:(id)arg1;
- (void)_didFinishConnectingToDevices;
- (void)_didStartListeningAsPrimaryDeviceOnPort:(unsigned long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (id)_ipAddress;
- (BOOL)_parseAddress:(id)arg1 intoHost:(id *)arg2 port:(unsigned long long *)arg3;
- (id)_primaryDeviceAddressOnInternalQueue;
- (BOOL)_setPrimaryCyclerAddressOnInternalQueue:(id)arg1 error:(id *)arg2;
- (BOOL)_setSecondaryCyclerCountOnInternalQueue:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)primaryDeviceCoordinator:(id)arg1 didEncounterError:(id)arg2;
- (void)primaryDeviceCoordinator:(id)arg1 didStartListeningForSecondaryDevicesOnPort:(unsigned long long)arg2;
- (void)primaryDeviceCoordinatorDidConnectToAllSecondaryDevices:(id)arg1;
- (void)secondaryDeviceCoordinator:(id)arg1 didEncounterError:(id)arg2;
- (void)secondaryDeviceCoordinatorDidConnectToPrimaryDevice:(id)arg1;
- (BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2 error:(id *)arg3;
- (void)startCoordinatingWithTimeout:(double)arg1;

@end

