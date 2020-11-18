//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDClientProtocol-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDWorkerProtocol-Protocol.h>

@class DEDIDSConnection, NSString;
@protocol OS_os_log;

@interface DEDIDSOutbound : NSObject <DEDWorkerProtocol, DEDClientProtocol, DEDSecureArchiving>
{
    DEDIDSConnection *_connection;
    NSString *_deviceAddress;
    NSString *_sessionID;
    NSObject<OS_os_log> *_log;
}

@property (weak) DEDIDSConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) NSString *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property (strong) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)sessionWithID:(id)arg1 withDeviceAtAddress:(id)arg2 connection:(id)arg3;
- (void).cxx_destruct;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)cancelNotificationForSession:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)didCancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)didGetState:(long long)arg1 info:(id)arg2 sessionID:(id)arg3;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)getSessionStateWithSession:(id)arg1;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
- (id)init;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (void)pingSession:(id)arg1;
- (void)pongSession:(id)arg1;
- (void)scheduleNotificationForSession:(id)arg1;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (long long)transportType;
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;

@end
