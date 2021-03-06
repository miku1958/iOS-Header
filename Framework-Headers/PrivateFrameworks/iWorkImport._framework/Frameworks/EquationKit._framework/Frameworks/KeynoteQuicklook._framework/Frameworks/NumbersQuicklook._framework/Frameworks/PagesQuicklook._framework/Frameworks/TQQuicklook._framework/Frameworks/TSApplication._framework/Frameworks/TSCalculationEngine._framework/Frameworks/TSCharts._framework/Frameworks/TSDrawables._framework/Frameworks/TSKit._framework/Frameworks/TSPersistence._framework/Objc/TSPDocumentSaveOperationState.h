//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPSaveOperationState.h>

@class NSData, NSProgress, NSString, NSURL, NSUUID, SFUCryptoKey, TSPDocumentProperties, TSPDocumentRevision, TSPObject, TSPPackageWriter;

@interface TSPDocumentSaveOperationState : TSPSaveOperationState
{
    BOOL _didResetDocumentRevision;
    BOOL _shouldResumeAsynchronousModifications;
    BOOL _didEndWriteOperation;
    BOOL _shouldLeavePendingEndSave;
    NSURL *_URL;
    long long _packageType;
    NSURL *_relativeURLForExternalData;
    NSProgress *_progress;
    TSPDocumentProperties *_documentProperties;
    TSPDocumentProperties *_documentSupportProperties;
    TSPDocumentRevision *_documentRevision;
    unsigned long long _saveToken;
    TSPObject *_documentObject;
    TSPObject *_supportObject;
    NSURL *_originalSupportURL;
    SFUCryptoKey *_encryptionKey;
    NSData *_passwordVerifier;
    NSString *_documentPasswordHint;
    TSPPackageWriter *_documentPackageWriter;
    TSPPackageWriter *_supportPackageWriter;
    NSUUID *_documentUUID;
}

@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (nonatomic) BOOL didEndWriteOperation; // @synthesize didEndWriteOperation=_didEndWriteOperation;
@property (nonatomic) BOOL didResetDocumentRevision; // @synthesize didResetDocumentRevision=_didResetDocumentRevision;
@property (strong, nonatomic) TSPObject *documentObject; // @synthesize documentObject=_documentObject;
@property (strong, nonatomic) TSPPackageWriter *documentPackageWriter; // @synthesize documentPackageWriter=_documentPackageWriter;
@property (copy, nonatomic) NSString *documentPasswordHint; // @synthesize documentPasswordHint=_documentPasswordHint;
@property (strong, nonatomic) TSPDocumentProperties *documentProperties; // @synthesize documentProperties=_documentProperties;
@property (strong, nonatomic) TSPDocumentRevision *documentRevision; // @synthesize documentRevision=_documentRevision;
@property (strong, nonatomic) TSPDocumentProperties *documentSupportProperties; // @synthesize documentSupportProperties=_documentSupportProperties;
@property (copy, nonatomic) NSUUID *documentUUID; // @synthesize documentUUID=_documentUUID;
@property (strong, nonatomic) SFUCryptoKey *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property (copy, nonatomic) NSURL *originalSupportURL; // @synthesize originalSupportURL=_originalSupportURL;
@property (readonly, nonatomic) long long packageType; // @synthesize packageType=_packageType;
@property (strong, nonatomic) NSData *passwordVerifier; // @synthesize passwordVerifier=_passwordVerifier;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (copy, nonatomic) NSURL *relativeURLForExternalData; // @synthesize relativeURLForExternalData=_relativeURLForExternalData;
@property (nonatomic) unsigned long long saveToken; // @synthesize saveToken=_saveToken;
@property (nonatomic) BOOL shouldLeavePendingEndSave; // @synthesize shouldLeavePendingEndSave=_shouldLeavePendingEndSave;
@property (nonatomic) BOOL shouldResumeAsynchronousModifications; // @synthesize shouldResumeAsynchronousModifications=_shouldResumeAsynchronousModifications;
@property (strong, nonatomic) TSPObject *supportObject; // @synthesize supportObject=_supportObject;
@property (strong, nonatomic) TSPPackageWriter *supportPackageWriter; // @synthesize supportPackageWriter=_supportPackageWriter;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3;

@end

