//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCVersion.h>

@class CKRecord, NSError;

__attribute__((visibility("hidden")))
@interface BRCLocalVersion : BRCVersion
{
    CKRecord *_uploadedAssets;
    NSError *_uploadError;
}

@property (strong, nonatomic) NSError *uploadError; // @synthesize uploadError=_uploadError;
@property (strong, nonatomic) CKRecord *uploadedAssets; // @synthesize uploadedAssets=_uploadedAssets;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_clearSignatures:(unsigned long long)arg1 isPackage:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)diffAgainstLocalVersion:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForPackage:(BOOL)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (BOOL)isMissingUploadsWithDiffs:(unsigned long long)arg1;
- (id)isPackageObj;
- (BOOL)shouldRecreateUploadJobGivenDiffs:(unsigned long long)arg1;
- (id)sizeObj;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)updateFromFSAtPath:(id)arg1 filenameOverride:(id)arg2;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 updateFilename:(BOOL)arg2 filenameOverride:(id)arg3;

@end

