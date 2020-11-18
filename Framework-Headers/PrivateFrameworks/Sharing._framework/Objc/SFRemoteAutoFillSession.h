//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, SFDevice, SFSession;
@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillSession : NSObject
{
    BOOL _activateCalled;
    NSString *_contextBundleID;
    NSString *_contextLocalizedAppName;
    int _contextRequestState;
    NSString *_contextUnlocalizedAppName;
    NSArray *_contextAssociatedDomains;
    NSString *_contextURL;
    BOOL _invalidateCalled;
    BOOL _pairingFinishedNotified;
    NSDate *_pairClock;
    int _pairState;
    struct PairingSubstate _pairSubstate;
    int _passwordPickerState;
    NSString *_pickedPassword;
    NSString *_pickedUsername;
    int _sendCredentialsState;
    SFSession *_session;
    int _sessionState;
    BOOL _prefPairContactsDisabled;
    BOOL _prefPairHomeKitDisabled;
    BOOL _prefPairVerifyDisabled;
    BOOL _prefPairVisualDisabled;
    CDUnknownBlockType _completedHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    CDUnknownBlockType _pairingFinishedHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _promptForPickerHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completedHandler; // @synthesize completedHandler=_completedHandler;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType pairingFinishedHandler; // @synthesize pairingFinishedHandler=_pairingFinishedHandler;
@property (strong, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPickerHandler; // @synthesize promptForPickerHandler=_promptForPickerHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completedWithError:(id)arg1;
- (void)_handleContextRequestResponse:(id)arg1 error:(id)arg2;
- (void)_handlePasswordPickerResponse:(id)arg1 password:(id)arg2 error:(id)arg3;
- (void)_handleSendCredentialsResponse:(id)arg1 error:(id)arg2;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_run;
- (int)_runContextRequest;
- (int)_runPair;
- (int)_runPairContacts;
- (int)_runPairHomeKit;
- (int)_runPairPIN;
- (int)_runPairVerify;
- (int)_runPairVisual;
- (int)_runPasswordPicker;
- (int)_runSendCredentials;
- (int)_runSessionStart;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)tryPIN:(id)arg1;

@end

