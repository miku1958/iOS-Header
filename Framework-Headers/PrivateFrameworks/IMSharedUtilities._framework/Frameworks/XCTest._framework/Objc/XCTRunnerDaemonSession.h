//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCTestManager_TestsInterface-Protocol.h>
#import <XCTest/XCUIRemoteAXInterface-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, XCTUIApplicationMonitor, XCTestManager_ManagerInterface, XCUIAXNotificationHandling;

@interface XCTRunnerDaemonSession : NSObject <XCTestManager_TestsInterface, XCUIRemoteAXInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    id<XCTUIApplicationMonitor> _applicationMonitor;
    id<XCUIAXNotificationHandling> _accessibilityClient;
    NSXPCConnection *_connection;
    unsigned long long _daemonProtocolVersion;
    NSMutableDictionary *_invalidationHandlers;
}

@property id<XCUIAXNotificationHandling> accessibilityClient; // @synthesize accessibilityClient=_accessibilityClient;
@property id<XCTUIApplicationMonitor> applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property unsigned long long daemonProtocolVersion;
@property (readonly) id<XCTestManager_ManagerInterface> daemonProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSMutableDictionary *invalidationHandlers; // @synthesize invalidationHandlers=_invalidationHandlers;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (readonly) BOOL useLegacyEventCoordinateTransformationPath;
@property (readonly) BOOL useLegacyScreenshotPath;
@property (readonly) BOOL useLegacySnapshotPath;
@property (readonly) BOOL usePointTransformationsForFrameConversions;

+ (BOOL)isSupported;
+ (id)sharedSession;
- (void).cxx_destruct;
- (void)_XCT_applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
- (void)_XCT_receivedAccessibilityNotification:(int)arg1 withPayload:(id)arg2;
- (void)_reportInvalidation;
- (void)dealloc;
- (void)enableFauxCollectionViewCells:(CDUnknownBlockType)arg1;
- (void)fetchAttributes:(id)arg1 forElement:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchAttributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchParameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getDeviceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1;
- (void)injectAssistantRecognitionStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)injectVoiceRecognitionAudioInputPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)launchApplicationWithBundleID:(id)arg1 arguments:(id)arg2 environment:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadAccessibilityWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)performAccessibilityAction:(int)arg1 onElement:(id)arg2 value:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)performDeviceEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerForAccessibilityNotification:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (id)registerInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)requestAutomationSessionForTestTargetWithPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestBundleIDForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestElementAtPoint:(struct CGPoint)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestIDEConnectionTransportForSessionIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestScreenshotOfScreenWithID:(unsigned int)arg1 withRect:(struct CGRect)arg2 formatUTI:(id)arg3 compressionQuality:(double)arg4 imageFormatRespected:(BOOL *)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)requestScreenshotWithReply:(CDUnknownBlockType)arg1;
- (void)requestSiriEnabledStatus:(CDUnknownBlockType)arg1;
- (void)requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendString:(id)arg1 maximumFrequency:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAXTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setLocalizableStringsDataGatheringEnabled:(BOOL)arg1 reply:(CDUnknownBlockType)arg2;
- (void)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)startMonitoringApplicationWithBundleID:(id)arg1;
- (void)startSiriUIRequestWithAudioFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSiriUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synthesizeEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminateApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterForAccessibilityNotification:(int)arg1 registrationToken:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)unregisterInvalidationHandlerWithToken:(id)arg1;
- (void)updateDeviceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

