//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDLocationDelegate-Protocol.h>
#import <HomeKitDaemon/HMMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class CLLocation, HMDHome, HMMessageDispatcher, NSDate, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHomeLocationHandler : NSObject <HMDLocationDelegate, HMMessageReceiver, NSSecureCoding>
{
    int _locationAuthorization;
    CLLocation *_location;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    NSDate *_locationUpdateTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (nonatomic) int locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property (strong, nonatomic) NSDate *locationUpdateTimestamp; // @synthesize locationUpdateTimestamp=_locationUpdateTimestamp;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (BOOL)mergeLocationDataForLocalHome:(id)arg1 withCloudHome:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_canExtractLocation;
- (void)_evaluateLocationExtraction;
- (void)_handleLocationAuthorization:(int)arg1;
- (void)_handleLocationAuthorizationMessage:(id)arg1;
- (void)_handleRetrieveLocation:(id)arg1;
- (BOOL)_needToExtractLocation;
- (void)_registerForMessages;
- (void)_saveToLocalstoreWithLocalChange:(BOOL)arg1;
- (void)_sendLocationUpdate;
- (void)_setNewlocation:(id)arg1;
- (void)_updateLocation:(id)arg1;
- (void)accessoriesReachabilityStateChanged;
- (void)accessoryAdded;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (void)didDetermineLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)extractHomeLocation:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
