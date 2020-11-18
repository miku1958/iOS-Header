//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFDiagnosticsGenerator-Protocol.h>
#import <Message/RadiosPreferencesDelegate-Protocol.h>

@class AWDMailNetworkDiagnosticsReport, NSLock, NSMutableArray, NSMutableSet, NSString, NSThread, RadiosPreferences;
@protocol OS_dispatch_queue;

@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate>
{
    NSLock *_lock;
    struct __CFRunLoop *_rl;
    NSThread *_thread;
    NSMutableArray *_observers;
    unsigned int _flags;
    BOOL _dns;
    NSMutableSet *_calls;
    NSMutableSet *_backgroundWifiClients;
    int _interface;
    struct __SCPreferences *_wiFiPreferences;
    BOOL _hasCellDataCapability;
    BOOL _hasWiFiCapability;
    BOOL _isWiFiEnabled;
    BOOL _isRoamingAllowed;
    BOOL _data;
    NSString *_dataIndicator;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    int _symptomsToken;
    struct __SCNetworkReachability *_reachability;
    struct __SCDynamicStore *_store;
    struct __CFRunLoopSource *_store_source;
    struct __CTServerConnection *_telephony;
}

@property (readonly, nonatomic) AWDMailNetworkDiagnosticsReport *awdNetworkDiagnosticReport;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)networkAssertionWithIdentifier:(id)arg1;
+ (id)sharedInstance;
- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore *)arg2;
- (void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(struct __CTServerConnection *)arg3;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (void)_inititializeWifiManager;
- (BOOL)_isNetworkUp_nts;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (CDStruct_1ef3fb1f)_pollDataAndCallStatus_nts;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability *)arg2;
- (void)_setUpTelephony_nts;
- (void)_setupSymptons;
- (BOOL)_simulationOverrideForType:(unsigned long long)arg1 actualValue:(BOOL)arg2;
- (void)_tearDownTelephony_nts;
- (void)_updateWifiClientType;
- (void)addBackgroundWifiClient:(id)arg1;
- (id)addNetworkObserverBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)airplaneModeChanged;
- (id)copyDiagnosticInformation;
- (int)dataStatus;
- (void)dealloc;
- (BOOL)inAirplaneMode;
- (id)init;
- (void)invalidate;
- (BOOL)is3GConnection;
- (BOOL)is4GConnection;
- (BOOL)isDataAvailable;
- (BOOL)isFatPipe;
- (BOOL)isNetworkUp;
- (BOOL)isOnWWAN;
- (void)removeBackgroundWifiClient:(id)arg1;
- (void)removeNetworkObserver:(id)arg1;

@end

