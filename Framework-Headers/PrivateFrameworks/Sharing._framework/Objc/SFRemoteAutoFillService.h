//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, NSArray, NSData, NSString, NSURL, SFDeviceDiscovery, SFService, SFSession;
@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillService : NSObject
{
    BOOL _activateCalled;
    CDUnknownBlockType _activateCompletion;
    SFDeviceDiscovery *_discovery;
    int _discoveryState;
    struct NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    NSString *_receivedPassword;
    NSString *_receivedUsername;
    BOOL _requestingAutoFill;
    SFService *_service;
    int _serviceState;
    SFSession *_session;
    NSData *_systemBTAddress;
    CUSystemMonitor *_systemMonitor;
    int _systemMonitorState;
    NSURL *_urlForVisualScanning;
    BOOL _unitTesting;
    NSArray *_associatedDomains;
    NSString *_bundleID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_fixedPIN;
    NSString *_localizedAppName;
    NSString *_unlocalizedAppName;
    NSString *_urlString;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _hidePINHandler;
    CDUnknownBlockType _receivedCredentialsHandler;
    CDUnknownBlockType _sessionStartedHandler;
    CDUnknownBlockType _sessionEndedHandler;
    CDUnknownBlockType _showPINHandlerEx;
    CDUnknownBlockType _discoveredDevicesChanged;
    CDUnknownBlockType _urlForVisualScanningChanged;
}

@property (copy, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property (copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, nonatomic) unsigned long long discoveredDevices;
@property (copy, nonatomic) CDUnknownBlockType discoveredDevicesChanged; // @synthesize discoveredDevicesChanged=_discoveredDevicesChanged;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (copy, nonatomic) NSString *fixedPIN; // @synthesize fixedPIN=_fixedPIN;
@property (copy, nonatomic) CDUnknownBlockType hidePINHandler; // @synthesize hidePINHandler=_hidePINHandler;
@property (copy, nonatomic) NSString *localizedAppName; // @synthesize localizedAppName=_localizedAppName;
@property (readonly, nonatomic) BOOL needsSetup;
@property (copy, nonatomic) CDUnknownBlockType receivedCredentialsHandler; // @synthesize receivedCredentialsHandler=_receivedCredentialsHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionEndedHandler; // @synthesize sessionEndedHandler=_sessionEndedHandler;
@property (copy, nonatomic) CDUnknownBlockType sessionStartedHandler; // @synthesize sessionStartedHandler=_sessionStartedHandler;
@property (copy, nonatomic) CDUnknownBlockType showPINHandlerEx; // @synthesize showPINHandlerEx=_showPINHandlerEx;
@property (nonatomic) BOOL unitTesting; // @synthesize unitTesting=_unitTesting;
@property (copy, nonatomic) NSString *unlocalizedAppName; // @synthesize unlocalizedAppName=_unlocalizedAppName;
@property (copy, nonatomic) CDUnknownBlockType urlForVisualScanningChanged; // @synthesize urlForVisualScanningChanged=_urlForVisualScanningChanged;
@property (copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_activated;
- (void)_bluetoothAddressChanged;
- (void)_cleanup;
- (void)_completedWithError:(id)arg1;
- (void)_discoveryChanged:(id)arg1;
- (void)_discoveryFound:(id)arg1;
- (void)_discoveryLost:(id)arg1;
- (void)_discoveryStart;
- (int)_readyForAutoFillRequest;
- (void)_serviceHandleReceivedContextRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_serviceHandleReceivedCredentialRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_serviceHandleReceivedRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_serviceHidePIN;
- (void)_serviceSessionEnded:(id)arg1 withError:(id)arg2;
- (void)_serviceSessionStarted:(id)arg1;
- (void)_serviceStart;
- (void)_systemMonitorStart;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (void)startRequestingAutoFill;
- (void)stopRequestingAutoFill;
- (void)updateURLForVisualScanning;
- (id)urlForVisualScanning;

@end

