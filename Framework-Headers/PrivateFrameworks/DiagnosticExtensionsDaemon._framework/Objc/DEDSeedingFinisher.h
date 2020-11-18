//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDFinisher-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSeedingClientDelegate-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class DEDBugSession, DEDBugSessionConfiguration, DEDSeedingClient, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_source, OS_os_log, OS_os_transaction;

@interface DEDSeedingFinisher : NSObject <DEDFinisher, DEDSeedingClientDelegate, NSSecureCoding, DEDSecureArchiving>
{
    NSObject<OS_dispatch_source> *_timerSource;
    DEDBugSessionConfiguration *_config;
    NSMutableSet *_uploads;
    unsigned long long _totalUploadSize;
    NSObject<OS_os_log> *_log;
    DEDBugSession *_session;
    NSObject<OS_os_transaction> *_transaction;
    DEDSeedingClient *_client;
    NSMutableDictionary *_promises;
}

@property (strong) DEDSeedingClient *client; // @synthesize client=_client;
@property (strong) DEDBugSessionConfiguration *config; // @synthesize config=_config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property (strong) NSMutableDictionary *promises; // @synthesize promises=_promises;
@property (weak) DEDBugSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property unsigned long long totalUploadSize; // @synthesize totalUploadSize=_totalUploadSize;
@property (strong) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property (strong) NSMutableSet *uploads; // @synthesize uploads=_uploads;

+ (id)archivedClasses;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)archiveItemsInDirectory:(id)arg1;
- (id)attachmentHandler;
- (void)cleanup;
- (void)didAdoptAttachmentGroup:(id)arg1;
- (void)didCancelCollectionOnExtension:(id)arg1;
- (void)didCollectAttachmentGroup:(id)arg1;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (id)prepareSessionDirectoryForSubmission:(id)arg1;
- (id)prepareUpload:(id)arg1 forSubmissionWithSession:(id)arg2 metadata:(id)arg3;
- (void)save;
- (void)startProgressNotifier;
- (void)updateSessionUploadProgress;
- (id)uploadItemForTask:(id)arg1;
- (void)uploadTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)uploadTask:(id)arg1 didSendBytes:(long long)arg2;
- (BOOL)uploadsAreComplete;

@end
