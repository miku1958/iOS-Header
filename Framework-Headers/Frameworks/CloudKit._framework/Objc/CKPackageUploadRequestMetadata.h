//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKUploadRequestMetadata.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CKPackageUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding>
{
    NSArray *_fileSignatures;
    NSArray *_referenceSignatures;
}

@property (readonly, nonatomic) NSArray *fileSignatures; // @synthesize fileSignatures=_fileSignatures;
@property (readonly, nonatomic) NSArray *referenceSignatures; // @synthesize referenceSignatures=_referenceSignatures;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5;
- (id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignatures:(id)arg6 referenceSignatures:(id)arg7;
- (BOOL)isEqual:(id)arg1;

@end
