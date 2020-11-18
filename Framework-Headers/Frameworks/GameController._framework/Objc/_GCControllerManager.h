//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/GameControllerClientProtocol-Protocol.h>
#import <GameController/_GCHIDEventSource-Protocol.h>
#import <GameController/_GCIPCObjectMaterializationContext-Protocol.h>
#import <GameController/_GCIPCObjectRegistry-Protocol.h>
#import <GameController/_GCIPCServiceRegistry-Protocol.h>
#import <GameController/_GCImplicitIPCObject-Protocol.h>

@class GCController, GCExtendedGamepad, GCKeyboardAndMouseManager, GCMicroGamepad, GCMouse, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, NSThread, NSTimer, NSXPCConnection, _GCHIDEventSubject;
@protocol GCRemoteDaemonProxy, NSObject><NSCopying><NSSecureCoding, OS_dispatch_queue, _GCIPCObjectRegistry, _GCIPCServiceRegistry;

__attribute__((visibility("hidden")))
@interface _GCControllerManager : NSObject <_GCImplicitIPCObject, _GCIPCObjectRegistry, _GCIPCServiceRegistry, _GCIPCObjectMaterializationContext, GameControllerClientProtocol, _GCHIDEventSource>
{
    NSObject<OS_dispatch_queue> *_controllersQueue;
    NSObject<OS_dispatch_queue> *_hidSystemClientQueue;
    struct os_unfair_lock_s _ipcRegistryLock;
    NSMapTable *_ipcObjectRegistry;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    _GCHIDEventSubject *_hidEventSource;
    GCController *_currentController;
    GCMicroGamepad *_currentMicroGamepad;
    GCExtendedGamepad *_currentExtendedGamepad;
    NSXPCConnection *_connection;
    NSXPCConnection *_daemonConnection;
    NSObject<GCRemoteDaemonProxy> *_remote;
    NSThread *_hidInputThread;
    struct __CFRunLoop *_hidInputThreadRunLoop;
    struct __CFRunLoopSource *_hidThreadRunLoopSource;
    NSMutableArray *_hidThreadExecutionBlocks;
    struct __IOHIDManager *_hidManager;
    struct IONotificationPort *_usbNotify;
    unsigned int _usbAddedIterator;
    unsigned int _usbRemovedIterator;
    id _hidEventObservation;
    BOOL _shouldKeepRunning;
    CDUnknownBlockType _requestConnectedHostsCallback;
    NSMutableDictionary *_controllersByUDID;
    NSMutableDictionary *_controllersByRegistryID;
    CDUnknownBlockType _logger;
    GCController *_firstMicroGamepad;
    NSTimer *_idleWatchTimer;
    BOOL _gameControllerActive;
    BOOL _isAppInBackground;
    BOOL _shouldMonitorBackgroundEvents;
    long long _currentMediaRemoteInputMode;
    GCKeyboardAndMouseManager *_keyboardAndMouseManager;
    NSObject<OS_dispatch_queue> *_hidSystemPropertyQueue;
}

@property (readonly) id<_GCIPCObjectRegistry> IPCObjectRegistry;
@property (readonly) id<_GCIPCServiceRegistry> IPCServiceRegistry;
@property (strong, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *controllersQueue; // @synthesize controllersQueue=_controllersQueue;
@property (strong) GCController *currentController;
@property (strong) GCExtendedGamepad *currentExtendedGamepad;
@property (strong) GCMicroGamepad *currentMicroGamepad;
@property (strong) GCMouse *currentMouse;
@property (strong, nonatomic) NSXPCConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) GCController *firstMicroGamepad;
@property (nonatomic) BOOL gameControllerActive;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSThread *hidInputThread;
@property (readonly, nonatomic) struct __CFRunLoop *hidInputThreadRunLoop;
@property (nonatomic) struct __IOHIDManager *hidManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *hidSystemPropertyQueue; // @synthesize hidSystemPropertyQueue=_hidSystemPropertyQueue;
@property (readonly, nonatomic) NSMutableArray *hidThreadExecutionBlocks;
@property (readonly, nonatomic) struct __CFRunLoopSource *hidThreadRunLoopSource;
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;
@property (readonly, nonatomic) BOOL isAppInBackground;
@property (copy, nonatomic) CDUnknownBlockType logger;
@property (strong, nonatomic) NSObject<GCRemoteDaemonProxy> *remote;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (id)HIDDeviceMatchingAttributes;
- (id)IPCObjectWithIdentifier:(id)arg1;
- (void)_legacy_addControllerWithServiceRef:(struct __IOHIDServiceClient *)arg1;
- (id)_legacy_coalescedKeyboard;
- (id)_legacy_controllers;
- (void)_legacy_dealloc;
- (void)_legacy_init;
- (id)_legacy_makeHIDEventSource:(struct __IOHIDEventSystemClient *)arg1;
- (id)_legacy_mice;
- (void)_legacy_publishController:(id)arg1;
- (void)_legacy_removeControllerWithServiceRef:(struct __IOHIDServiceClient *)arg1;
- (void)_legacy_startHIDDeviceMonitor;
- (void)_legacy_startHIDEventMonitor;
- (void)_legacy_stopHIDDeviceMonitor;
- (void)_legacy_stopHIDEventMonitor;
- (void)_legacy_unpublishController:(id)arg1;
- (void)_legacy_updateControllerWithEvent:(struct __IOHIDEvent *)arg1;
- (void)_queue_removeController:(id)arg1 registryID:(id)arg2;
- (void)addController:(id)arg1;
- (void)addControllerForAppStoreRemote:(id)arg1;
- (void)async_HIDBlock:(CDUnknownBlockType)arg1;
- (id)coalescedKeyboard;
- (BOOL)combineSiriRemoteHIDDevicesWithNewController:(id)arg1 existingController:(id)arg2;
- (void)controller:(id)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (id)controllers;
- (void)dealloc;
- (id)init;
- (BOOL)isExistingController:(id)arg1;
- (BOOL)isPhysicalB239:(id)arg1;
- (void)launchHIDInputThread;
- (id)makeHIDEventSource:(struct __IOHIDEventSystemClient *)arg1;
- (id)mice;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4;
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5;
- (id)observeHIDEvents:(CDUnknownBlockType)arg1;
- (id)observeHIDEvents:(CDUnknownBlockType)arg1 forService:(id)arg2;
- (void)onHIDDeviceAdded:(struct __IOHIDServiceClient *)arg1;
- (void)onHIDDeviceRemoved:(struct __IOHIDServiceClient *)arg1;
- (void)onScreenshotTriggeredWithController:(id)arg1;
- (void)onVideoRecordingToggledWithController:(id)arg1;
- (void)open;
- (void)registerIPCObject:(id)arg1;
- (void)removeCoalescedControllerComponent:(id)arg1;
- (void)removeController:(id)arg1;
- (void)removeController:(id)arg1 registryID:(id)arg2;
- (id)serviceClientForIPCService:(id)arg1;
- (void)setupHIDMonitor:(BOOL)arg1;
- (BOOL)shouldStoreController:(id)arg1;
- (void)startIdleWatchTimer;
- (void)storeController:(id)arg1;
- (void)teardownHIDMonitor:(BOOL)arg1;
- (void)threadHIDInputOffMain:(id)arg1;
- (void)threadHIDInputOnMain:(id)arg1;
- (void)updateCurrentControllerAndProfileForUnpublishedController:(id)arg1;
- (void)updateIdleTimer:(id)arg1;

@end
