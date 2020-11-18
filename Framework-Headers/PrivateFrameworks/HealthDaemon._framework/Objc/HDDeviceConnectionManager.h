//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>

@class HDDatabase, HDHealthDeviceManager, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDDeviceConnectionManager : NSObject <HDDatabaseProtectedDataObserver>
{
    BOOL _connecting;
    BOOL _BTLEEnabled;
    HDHealthDeviceManager *_deviceMgr;
    HDDatabase *_database;
    NSMutableDictionary *_activeServices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_transactionName:(id)arg1;
+ (void)connectToService:(id)arg1;
+ (void)connectToServicesWithDeviceManager:(id)arg1 healthDatabase:(id)arg2;
+ (void)disconnectFromService:(id)arg1;
+ (void)disconnectFromServices;
+ (void)reconnectToServices;
+ (id)sharedDeviceManager;
- (void).cxx_destruct;
- (void)_connectToService:(id)arg1;
- (void)_connectToServices;
- (void)_disconnectFromService:(id)arg1;
- (void)_disconnectFromServices;
- (void)_handleBluetoothUpdates:(long long)arg1;
- (void)_subscribeBluetoothStateUpdates;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (id)init;

@end

