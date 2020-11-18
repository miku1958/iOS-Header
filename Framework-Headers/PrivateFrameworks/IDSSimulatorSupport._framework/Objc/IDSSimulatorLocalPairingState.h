//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol OS_dispatch_queue;

@interface IDSSimulatorLocalPairingState : NSObject
{
    NSUUID *_activePairedDeviceSimulatorID;
    NSObject<OS_dispatch_queue> *_didSwitchActivePairedDeviceCallbackQueue;
    CDUnknownBlockType _didSwitchActivePairedDeviceCallback;
    NSUUID *_pendingQuickSwitchAcknowledgementID;
}

@property (strong) NSUUID *activePairedDeviceSimulatorID; // @synthesize activePairedDeviceSimulatorID=_activePairedDeviceSimulatorID;
@property (copy, nonatomic) CDUnknownBlockType didSwitchActivePairedDeviceCallback; // @synthesize didSwitchActivePairedDeviceCallback=_didSwitchActivePairedDeviceCallback;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *didSwitchActivePairedDeviceCallbackQueue; // @synthesize didSwitchActivePairedDeviceCallbackQueue=_didSwitchActivePairedDeviceCallbackQueue;
@property (strong) NSUUID *pendingQuickSwitchAcknowledgementID; // @synthesize pendingQuickSwitchAcknowledgementID=_pendingQuickSwitchAcknowledgementID;

+ (id)sharedInstance;
- (void).cxx_destruct;

@end

