//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDPairedDeviceCapabilityProviding-Protocol.h>

@protocol HDPairedDeviceCapabilityProvidingDelegate;

@interface HDNanoRegistryPairedDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding>
{
    id<HDPairedDeviceCapabilityProvidingDelegate> _delegate;
}

@property (weak, nonatomic) id<HDPairedDeviceCapabilityProvidingDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_pairedOrActiveDevicesDidChange:(id)arg1;
- (id)activePairedDevice;
- (id)deviceForPairingID:(id)arg1;
- (id)isCapabilitySupported:(id)arg1 onDevice:(id)arg2 error:(id *)arg3;
- (id)isCapabilitySupportedOnActivePairedDevice:(id)arg1 error:(id *)arg2;
- (void)startListeningForUpdates;

@end
