//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKLocationManager : NSObject <CLLocationManagerDelegate>
{
    int _didChangeNotificationToken;
    NSDictionary *_lastKnownLocation;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    CDUnknownBlockType _locationUpdateBlock;
    CLLocationManager *_clLocationManager;
    NSXPCConnection *_connection;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (strong, nonatomic) CLLocationManager *clLocationManager; // @synthesize clLocationManager=_clLocationManager;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int didChangeNotificationToken; // @synthesize didChangeNotificationToken=_didChangeNotificationToken;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDictionary *lastKnownLocation; // @synthesize lastKnownLocation=_lastKnownLocation;
@property (copy, nonatomic) CDUnknownBlockType locationUpdateBlock; // @synthesize locationUpdateBlock=_locationUpdateBlock;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
@property (readonly) Class superclass;

+ (id)defaultLocationManager;
- (void).cxx_destruct;
- (id)_connection;
- (id)_copyLastKnownLocation;
- (id)_createLocationObjFromLocationDictionary:(id)arg1;
- (id)_dictionaryForCLLocation:(id)arg1;
- (id)_dictionaryOnDisk;
- (void)_dictionaryOnDisk:(CDUnknownBlockType)arg1;
- (id)_dictionaryRepresentation;
- (double)_getDistanceOfLastKnownLocationDictionary:(id)arg1 fromLocation:(id)arg2;
- (BOOL)_isLastKnownLocation:(id)arg1 freshForMaxAge:(double)arg2 fromNewTimestamp:(double)arg3;
- (BOOL)_isLastKnownLocationFresh:(id)arg1;
- (void)_readFromDisk;
- (void)_requestActiveLocationChangeUpdates;
- (void)_requestCLLocationUpdates:(CDUnknownBlockType)arg1;
- (void)_requestRecentCLLocation:(CDUnknownBlockType)arg1;
- (BOOL)_shouldLastKnownLocation:(id)arg1 beUpdatedTo:(id)arg2;
- (long long)_statusForCLAuthorizationStatus:(int)arg1;
- (id)_supportPath;
- (void)_writeToDisk;
- (void)_writeToDisk:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)authorizationStatus;
- (void)dealloc;
- (id)init;
- (BOOL)isLastKnownLocation:(id)arg1 significantlyOlderThanNewLocation:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)requestAuthorization;
- (void)setLastKnownLocation:(id)arg1;
- (void)updateLocationIfNeeded;

@end

