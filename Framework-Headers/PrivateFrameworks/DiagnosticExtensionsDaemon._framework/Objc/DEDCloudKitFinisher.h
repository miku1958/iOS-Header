//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDFinisher-Protocol.h>
#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class DEDBugSession, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_os_log;

@interface DEDCloudKitFinisher : NSObject <DEDFinisher, NSSecureCoding, DEDSecureArchiving>
{
    DEDBugSession *_session;
    NSObject<OS_os_log> *_log;
    unsigned long long _totalUploadSize;
    NSArray *_attachmentURLs;
    NSMutableArray *_attachmentRecords;
    NSMutableArray *_attachments;
    NSMutableDictionary *_uploadedBytes;
}

@property (strong) NSMutableArray *attachmentRecords; // @synthesize attachmentRecords=_attachmentRecords;
@property (strong) NSArray *attachmentURLs; // @synthesize attachmentURLs=_attachmentURLs;
@property (strong) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property (weak) DEDBugSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;
@property unsigned long long totalUploadSize; // @synthesize totalUploadSize=_totalUploadSize;
@property (strong) NSMutableDictionary *uploadedBytes; // @synthesize uploadedBytes=_uploadedBytes;

+ (id)archivedClasses;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)finishSession:(id)arg1 withConfiguration:(id)arg2;
- (id)flattenDirectories:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 session:(id)arg2;
- (void)localCleanup;

@end

