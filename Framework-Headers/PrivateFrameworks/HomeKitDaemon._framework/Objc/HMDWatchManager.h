//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class IDSService, NSArray, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDWatchManager : HMFObject <HMFLogging, IDSServiceDelegate>
{
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _pairedWithWatch;
    NSArray *_connectedWatches;
    IDSService *_service;
}

@property (readonly, copy) NSArray *connectedWatches; // @synthesize connectedWatches=_connectedWatches;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isPairedWithWatch) BOOL pairedWithWatch; // @synthesize pairedWithWatch=_pairedWithWatch;
@property (readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *watches;

+ (BOOL)isCompatibleWatchDevice:(id)arg1;
+ (id)logCategory;
+ (id)sharedManager;
+ (id)shortDescription;
- (void).cxx_destruct;
- (void)__initializeConnectedDevices;
- (id)attributeDescriptions;
- (id)connectedWatchFromDeviceID:(id)arg1;
- (id)init;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;

@end

