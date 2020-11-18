//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class IDSService, NSArray, NSMutableSet, NSString;
@protocol HMDWatchManagerDelegate, OS_dispatch_queue;

@interface HMDWatchManager : NSObject <IDSServiceDelegate>
{
    NSMutableSet *_connectedWatches;
    BOOL _pairedWithWatch;
    id<HMDWatchManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    IDSService *_service;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy, nonatomic) NSArray *connectedWatches;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDWatchManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPairedWithWatch) BOOL pairedWithWatch; // @synthesize pairedWithWatch=_pairedWithWatch;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *watches;

+ (BOOL)isCompatibleWatchDevice:(id)arg1;
- (void).cxx_destruct;
- (void)__initializeConnectedDevices;
- (void)_updateConnectedDevices:(id)arg1;
- (void)addConnectedWatch:(id)arg1;
- (id)init;
- (void)notifyDelegateOfAddedConnectedWatch:(id)arg1;
- (void)notifyDelegateOfRemovedConnectedWatch:(id)arg1;
- (void)removeConnectedWatch:(id)arg1;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;

@end

