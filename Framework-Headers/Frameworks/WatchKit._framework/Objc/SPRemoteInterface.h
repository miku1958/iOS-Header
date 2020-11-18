//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchKit/SPRemoteInterfaceProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, SPRemoteInterfaceDataDelegateProtocol;

@interface SPRemoteInterface : NSObject <SPRemoteInterfaceProtocol>
{
    id<SPRemoteInterfaceDataDelegateProtocol> _dataDelegate;
    NSMutableArray *_activeComplicationsConnections;
    id _runLoopObserver;
    NSMutableDictionary *_interfaceControllers;
    NSMutableDictionary *_interfaceControllersOwners;
    NSMutableSet *_missingInterfaceControllers;
    NSObject<OS_dispatch_queue> *_interfaceControllersAccessQueue;
    NSString *_rootViewControllerID;
    NSString *_navigatingViewControllerID;
    NSString *_appClientIdentifier;
    CDUnknownBlockType _textInputCompletion;
    CDUnknownBlockType _textInputSuggestions;
    CDUnknownBlockType _mediaPlayerControllerCompletion;
    CDUnknownBlockType _audioRecorderControllerCompletion;
    NSMutableArray *_openParentRequests;
    CDUnknownBlockType _addPassesCompletion;
}

@property (strong, nonatomic) NSMutableArray *activeComplicationsConnections; // @synthesize activeComplicationsConnections=_activeComplicationsConnections;
@property (copy, nonatomic) CDUnknownBlockType addPassesCompletion; // @synthesize addPassesCompletion=_addPassesCompletion;
@property (strong, nonatomic) NSString *appClientIdentifier; // @synthesize appClientIdentifier=_appClientIdentifier;
@property (copy, nonatomic) CDUnknownBlockType audioRecorderControllerCompletion; // @synthesize audioRecorderControllerCompletion=_audioRecorderControllerCompletion;
@property (strong, nonatomic) id<SPRemoteInterfaceDataDelegateProtocol> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *interfaceControllers; // @synthesize interfaceControllers=_interfaceControllers;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *interfaceControllersAccessQueue; // @synthesize interfaceControllersAccessQueue=_interfaceControllersAccessQueue;
@property (strong, nonatomic) NSMutableDictionary *interfaceControllersOwners; // @synthesize interfaceControllersOwners=_interfaceControllersOwners;
@property (copy, nonatomic) CDUnknownBlockType mediaPlayerControllerCompletion; // @synthesize mediaPlayerControllerCompletion=_mediaPlayerControllerCompletion;
@property (strong, nonatomic) NSMutableSet *missingInterfaceControllers; // @synthesize missingInterfaceControllers=_missingInterfaceControllers;
@property (strong, nonatomic) NSString *navigatingViewControllerID; // @synthesize navigatingViewControllerID=_navigatingViewControllerID;
@property (strong, nonatomic) NSMutableArray *openParentRequests; // @synthesize openParentRequests=_openParentRequests;
@property (strong, nonatomic) NSString *rootViewControllerID; // @synthesize rootViewControllerID=_rootViewControllerID;
@property (strong, nonatomic) id runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType textInputCompletion; // @synthesize textInputCompletion=_textInputCompletion;
@property (copy, nonatomic) CDUnknownBlockType textInputSuggestions; // @synthesize textInputSuggestions=_textInputSuggestions;

+ (id)SerializablePropertyValue:(id)arg1;
+ (void)_logDuplicate:(id)arg1 controller:(id)arg2 key:(id)arg3 property:(id)arg4 value:(id)arg5;
+ (id)_remoteIdentifier;
+ (void)_setupStorageForController:(id)arg1;
+ (void)_updateAccessibility;
+ (BOOL)allowUIUpdate:(id)arg1;
+ (BOOL)allowUIUpdate:(id)arg1 isSetValue:(BOOL)arg2;
+ (id)cacheIdentifier;
+ (void)clearStorageForController:(id)arg1;
+ (void)controller:(id)arg1 presentAddPassesControllerWithPasses:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)controller:(id)arg1 presentInterfaceController:(id)arg2 context:(id)arg3;
+ (void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 contexts:(id)arg3;
+ (void)controller:(id)arg1 presentTextInputControllerWithSuggestions:(id)arg2 allowedInputMode:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)controller:(id)arg1 presentTextInputControllerWithSuggestionsForLanguage:(CDUnknownBlockType)arg2 allowedInputMode:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)controller:(id)arg1 pushInterfaceController:(id)arg2 context:(id)arg3;
+ (id)controller:(id)arg1 setupProperties:(id)arg2 viewControllerID:(id)arg3 tableIndex:(long long)arg4 rowIndex:(long long)arg5 classForType:(CDUnknownFunctionPointerType)arg6;
+ (void)controllerBecomeCurrentPage:(id)arg1;
+ (void)controllerDismiss:(id)arg1;
+ (void)controllerDismissAddPassesController:(id)arg1;
+ (void)controllerDismissTextInputController:(id)arg1;
+ (void)controllerPop:(id)arg1;
+ (void)controllerPopToRoot:(id)arg1;
+ (void)didFinishHandlingActivity:(id)arg1;
+ (void)handleEvent:(CDUnknownBlockType)arg1;
+ (void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 contexts:(id)arg3;
+ (void)movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
+ (void)notificationController:(id)arg1 showNotificationInterfaceType:(long long)arg2;
+ (BOOL)openParentApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)openSystemURL:(id)arg1;
+ (void)reloadRootControllersWithNames:(id)arg1 contexts:(id)arg2;
+ (void)removePageControllerAtIndexes:(id)arg1;
+ (void)sendCacheRequest:(id)arg1;
+ (void)sendCacheRequestMessage:(id)arg1;
+ (BOOL)sendDataToApp:(id)arg1;
+ (BOOL)sendDataToApp:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)setController:(id)arg1 key:(id)arg2 property:(id)arg3 value:(id)arg4;
+ (void)setControllerActive:(id)arg1;
+ (void)setControllerInactive:(id)arg1;
+ (id)startRemoteInterface;
+ (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 interfaceController:(id)arg4;
- (void).cxx_destruct;
- (void)_activateViewController:(id)arg1 clientIdentifier:(id)arg2;
- (id)_allInterfaceControllers;
- (void)_callDidDeactivate;
- (void)_deregisterInterfaceControllerID:(id)arg1;
- (void)_dumpInterfaceDictionary;
- (void)_fillDataWithRandom:(id)arg1 length:(long long)arg2;
- (BOOL)_handleAction:(id)arg1 forNotification:(id)arg2 remoteNotificationContext:(id)arg3 localNotification:(id)arg4 unNotification:(id)arg5 handler:(id)arg6 controller:(id)arg7;
- (id)_interfaceControllerClientIDForControllerID:(id)arg1;
- (id)_interfaceControllerID:(id)arg1;
- (id)_interfaceControllerIDsForClientID:(id)arg1;
- (id)_interfaceControllerWithID:(id)arg1;
- (void)_registerInterfaceController:(id)arg1 interfaceControllerID:(id)arg2 interfaceControllerClientID:(id)arg3 applicationRootController:(BOOL)arg4;
- (void)_requestTimingData:(id)arg1;
- (void)_saveReceiveTime;
- (void)_saveSendTimeAndSize:(unsigned long long)arg1;
- (BOOL)_sendDataToApp:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_sendOpenParentApplicationRequest;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setupSignalHandlers;
- (void)activateViewController:(id)arg1 clientIdentifier:(id)arg2;
- (void)applicationContentsDidReset:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidFinishConnecting:(id)arg1;
- (void)applicationDidReceiveNotification:(id)arg1 clientIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)applicationDidTerminate:(id)arg1;
- (void)applicationHandleWatchTaskKeys:(id)arg1 returnToPrimaryUI:(BOOL)arg2 visibleVCID:(id)arg3 clientIdentifier:(id)arg4;
- (void)applicationIsStillActive;
- (void)applicationWillResignActive:(id)arg1;
- (void)controller:(id)arg1 presentInterfaceController:(id)arg2 initializationContextID:(id)arg3;
- (void)controller:(id)arg1 presentInterfaceControllers:(id)arg2 initializationContextIDs:(id)arg3;
- (void)controller:(id)arg1 pushInterfaceController:(id)arg2 initializationContextID:(id)arg3;
- (void)controllerBecomeCurrentPage:(id)arg1;
- (void)controllerDismiss:(id)arg1;
- (void)controllerDismissAddPassesController:(id)arg1;
- (void)controllerDismissTextInputController:(id)arg1;
- (id)controllerMethods:(id)arg1;
- (void)controllerPop:(id)arg1;
- (void)controllerPopToRoot:(id)arg1;
- (void)controllerPresentAddPassesController:(id)arg1 passes:(id)arg2;
- (void)controllerPresentTextInputController:(id)arg1 allowedInputMode:(id)arg2 suggestions:(id)arg3;
- (void)createViewController:(id)arg1 className:(id)arg2 properties:(id)arg3 contextID:(id)arg4 info:(id)arg5 gestureDescriptions:(id)arg6 clientIdentifier:(id)arg7;
- (void)dataInterfaceDidBecomeActive:(id)arg1;
- (void)dataInterfaceWillResignActive:(id)arg1;
- (void)deactivateViewController:(id)arg1 clientIdentifier:(id)arg2;
- (void)dealloc;
- (void)didFinishHandlingActivity:(id)arg1;
- (void)extensionDidBeginNotificationUICreation;
- (void)extensionDidEndNotificationUICreation;
- (void)fetchNotificationForNotificationID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishActivatingVCWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getComplicationData:(id)arg1;
- (void)handlePlistDictionary:(id)arg1 fromIdentifier:(id)arg2;
- (void)handleProtoPlist:(id)arg1 fromIdentifier:(id)arg2;
- (id)init;
- (void)insertPageControllerAtIndexes:(id)arg1 withNames:(id)arg2 initializationContextIDs:(id)arg3;
- (id)interfaceCreationContextForID:(id)arg1;
- (void)layoutDirection:(long long)arg1;
- (void)movePageControllerAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)notificationController:(id)arg1 showNotificationInterfaceType:(long long)arg2;
- (BOOL)openParentApplication:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)openSystemURL:(id)arg1;
- (void)performAfterApplicationDidFinishLaunching:(CDUnknownBlockType)arg1;
- (void)preferredContentSizeCategory:(id)arg1;
- (void)receiveData:(id)arg1 fromIdentifier:(id)arg2;
- (void)receiveDataFromApplication:(id)arg1 fromIdentifier:(id)arg2;
- (void)receiveNavigationReply:(id)arg1 clientIdentifier:(id)arg2;
- (void)receiveProtoData:(id)arg1 fromIdentifier:(id)arg2;
- (void)recoverFromMissingIntefaceControllerWithID:(id)arg1;
- (void)releaseViewController:(id)arg1 clientIdentifier:(id)arg2;
- (void)reloadRootControllersWithNames:(id)arg1 initializationContextIDs:(id)arg2;
- (void)removeInterfaceControllersForClient:(id)arg1;
- (void)removePageControllerAtIndexes:(id)arg1;
- (void)replyTimingData:(id)arg1;
- (void)replyWithExtensionTimingData:(id)arg1;
- (void)rootInterfaceController:(id)arg1 performActionWithItemID:(id)arg2 forNotificationID:(id)arg3 userInfo:(id)arg4 clientIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)sendCacheRequestMessage:(id)arg1;
- (void)sendComplicationObject:(id)arg1;
- (void)sendData:(id)arg1 clientIdentifiers:(id)arg2;
- (void)sendData:(id)arg1 clientIdentifiers:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sendPlist:(id)arg1 clientIdentifiers:(id)arg2;
- (void)sendSetViewController:(id)arg1 key:(id)arg2 property:(id)arg3 value:(id)arg4 clientIdentifiers:(id)arg5;
- (void)sendSetViewController:(id)arg1 values:(id)arg2 clientIdentifiers:(id)arg3;
- (void)sendWillActivateReplyForController:(id)arg1;
- (id)storeInterfaceCreationContext:(id)arg1;
- (void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 controller:(id)arg4;

@end

