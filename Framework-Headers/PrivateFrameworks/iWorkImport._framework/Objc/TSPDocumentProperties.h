//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSDictionary, NSUUID, TSPDocumentRevision;

__attribute__((visibility("hidden")))
@interface TSPDocumentProperties : NSObject <NSCopying>
{
    NSUUID *_versionUUID;
    NSUUID *_shareUUID;
    unsigned long long _fileFormatVersion;
    TSPDocumentRevision *_revision;
    NSDictionary *_additionalProperties;
    NSUUID *_documentUUID;
}

@property (copy, nonatomic) NSDictionary *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property (copy, nonatomic) NSUUID *documentUUID; // @synthesize documentUUID=_documentUUID;
@property (nonatomic) unsigned long long fileFormatVersion; // @synthesize fileFormatVersion=_fileFormatVersion;
@property (copy, nonatomic) TSPDocumentRevision *revision; // @synthesize revision=_revision;
@property (readonly, nonatomic) NSUUID *shareUUID;
@property (readonly, nonatomic) NSUUID *versionUUID;

+ (BOOL)documentIsEncryptedAtURL:(id)arg1;
+ (id)documentPropertiesRelativePath;
+ (id)documentRevisionAtURL:(id)arg1;
+ (id)documentUUIDAtURL:(id)arg1;
+ (id)keychainGenericItemForDocumentUUID:(id)arg1;
+ (id)shareIdentifierRelativePath;
- (void).cxx_destruct;
- (id)UUIDFromDocumentProperties:(id)arg1 key:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)encodedPropertyListWithError:(id *)arg1;
- (id)init;
- (id)initWithDocumentBundleURL:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(id *)arg3;
- (id)initWithDocumentFileURL:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(id *)arg3;
- (id)initWithDocumentURL:(id)arg1 allowMissingPropertyList:(BOOL)arg2 error:(id *)arg3;
- (id)initWithDocumentURL:(id)arg1 error:(id *)arg2;
- (id)initWithFilePackageURL:(id)arg1 zipArchive:(id)arg2 allowMissingPropertyList:(BOOL)arg3 error:(id *)arg4;
- (id)initWithPropertiesURL:(id)arg1 error:(id *)arg2;
- (void)readDocumentPropertiesFromDictionary:(id)arg1;
- (void)updateDocumentAndShareUUID;
- (void)updateDocumentUUID;
- (void)updateVersionUUID;
- (BOOL)writeToDocumentBundleURL:(id)arg1 error:(id *)arg2;
- (BOOL)writeToDocumentURL:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)writeToPackageWriter:(id)arg1 error:(id *)arg2;
- (BOOL)writeToPropertiesURL:(id)arg1 error:(id *)arg2;

@end

