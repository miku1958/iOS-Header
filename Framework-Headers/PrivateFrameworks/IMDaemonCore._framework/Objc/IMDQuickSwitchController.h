//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMDaemonCore/IDSServiceDelegate-Protocol.h>

@class IDSService, NSString;

@interface IMDQuickSwitchController : NSObject <IDSServiceDelegate>
{
    IDSService *_quickSwitchIDSService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IDSService *quickSwitchIDSService; // @synthesize quickSwitchIDSService=_quickSwitchIDSService;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)_cleanUpTemporaryFiles;
- (void)_compressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_decompressFileAtPath:(id)arg1 toPath:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_defaultPairedDevice;
- (void)_deleteFileAtPath:(id)arg1;
- (long long)_getCurrentDBVersion;
- (id)_getDowngradedDBPath;
- (unsigned long long)_getFileSizeAtPath:(id)arg1;
- (id)_getTempDBPath;
- (id)_getTempRecentsPath;
- (id)_getTruncatedDBPath;
- (id)_getZippedDBPath;
- (id)_getZippedRecentsPath;
- (void)_handleDBVersionResponse:(id)arg1;
- (void)_handleIncomingDB:(id)arg1;
- (void)_handleIncomingRecents:(id)arg1;
- (void)_handleQuickSwitchCompleted:(id)arg1;
- (void)_handleQuickSwitchInitiateRequest;
- (void)_handleRecentsRequest;
- (void)_initiateQuickSwitch;
- (BOOL)_isPairedDeviceInProxyMode;
- (void)_notifyPSYDataSent;
- (void)_notifyPSYWithResult:(BOOL)arg1;
- (void)_quickSwitchCompleted:(BOOL)arg1;
- (void)_sendDBVersionResponse:(long long)arg1;
- (BOOL)_sendIDSFile:(id)arg1 withCommand:(long long)arg2;
- (BOOL)_sendIDSMessage:(id)arg1;
- (void)_sendQuickSwitchCompletedWithResult:(BOOL)arg1;
- (void)_sendRecentsRequest;
- (BOOL)_sendZippedFileAtPath:(id)arg1 withCommand:(long long)arg2;
- (BOOL)_truncateDBToPath:(id)arg1;
- (void)dealloc;
- (void)dummyMethod;
- (id)init;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;

@end
