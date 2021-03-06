//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CalActivatable-Protocol.h>
#import <CalendarDaemon/ClientConnectionDelegate-Protocol.h>
#import <CalendarDaemon/DatabaseChangeHandling-Protocol.h>
#import <CalendarDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSLock, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CADServer : NSObject <NSXPCListenerDelegate, ClientConnectionDelegate, DatabaseChangeHandling, CalActivatable>
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _backgroundTaskCount;
    NSXPCListener *_NSXPCListener;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMutableSet *_clientConnections;
    NSLock *_connectionLock;
    NSArray *_signalSensors;
    BOOL _initializationFinished;
    BOOL _active;
    NSArray *_modules;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_alarmQueue;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *alarmQueue; // @synthesize alarmQueue=_alarmQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *modules; // @synthesize modules=_modules;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)_cleanupChangeTablesInDatabase:(struct CalDatabase *)arg1;
- (void)_deactivateAndExitWithStatus:(int)arg1;
- (void)_dumpState;
- (void)_enableICloudBackups;
- (void)_exitWithStatus:(int)arg1;
- (void)_finishInitializationWithDataAvailable;
- (void)_handleDatabaseChanged;
- (void)_handleXPCConnection:(id)arg1;
- (void)_protectedDataDidBecomeAvailable;
- (void)_registerActivityWithIdentifier:(const char *)arg1 block:(CDUnknownBlockType)arg2;
- (void)_registerForAlarmEvents;
- (void)_registerForAnalyticsCollection;
- (void)_registerForAttachmentCleanup;
- (void)_registerForChangeTableCleanup;
- (void)_registerForDatabaseCleanup;
- (void)_registerForNotifications;
- (void)_registerMaintenanceActivities;
- (void)_setUpSignalHandlers;
- (void)_tearDownSignalHandlers;
- (BOOL)_trimAndExtendOccurrenceCache;
- (void)_updateOccurrenceCacheTimeZone;
- (void)activate;
- (void)cleanupDatabase:(struct CalDatabase *)arg1;
- (void)clientConnectionDied:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (id)initWithModules:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

