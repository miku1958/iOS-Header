//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKAssetCopyInfo, CKAssetTransferOptions, CKRecord, CKRecordID, NSData, NSDate, NSDictionary, NSFileHandle, NSNumber, NSString, NSURL;

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding>
{
    BOOL _wasCached;
    BOOL _hasSize;
    BOOL _uploaded;
    BOOL _downloaded;
    BOOL _shouldReadRawEncryptedData;
    NSURL *_fileURL;
    CKRecord *_record;
    NSString *_recordKey;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSString *_authToken;
    NSData *_authRequest;
    NSString *_downloadBaseURL;
    unsigned long long _downloadTokenExpiration;
    NSData *_boundaryKey;
    NSFileHandle *_clientOpenedFileHandle;
    NSData *_signature;
    unsigned long long _size;
    unsigned long long _paddedFileSize;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationCountToSave;
    NSData *_assetContent;
    NSString *_itemTypeHint;
    CKAssetCopyInfo *_assetCopyInfo;
    NSString *_UUID;
    NSURL *_downloadURL;
    NSDate *_downloadURLExpiration;
    NSData *_assetKey;
    NSData *_wrappedAssetKey;
    NSData *_clearAssetKey;
    NSData *_referenceSignature;
    NSString *_uploadReceipt;
    double _uploadReceiptExpiration;
    long long _storageGroupingPolicy;
    CKAssetTransferOptions *_assetTransferOptions;
    long long _arrayIndex;
    CKRecordID *_recordID;
    NSDictionary *_assetChunkerOptions;
    long long _uploadRank;
}

@property (strong, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property (nonatomic) long long arrayIndex; // @synthesize arrayIndex=_arrayIndex;
@property (strong, nonatomic) NSDictionary *assetChunkerOptions; // @synthesize assetChunkerOptions=_assetChunkerOptions;
@property (copy, nonatomic) NSData *assetContent; // @synthesize assetContent=_assetContent;
@property (strong, nonatomic) CKAssetCopyInfo *assetCopyInfo; // @synthesize assetCopyInfo=_assetCopyInfo;
@property (readonly, nonatomic) NSString *assetHandleUUID;
@property (strong, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property (strong, nonatomic) CKAssetTransferOptions *assetTransferOptions; // @synthesize assetTransferOptions=_assetTransferOptions;
@property (copy, nonatomic) NSData *authRequest; // @synthesize authRequest=_authRequest;
@property (copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property (copy, nonatomic) NSData *boundaryKey; // @synthesize boundaryKey=_boundaryKey;
@property (strong, nonatomic) NSData *clearAssetKey; // @synthesize clearAssetKey=_clearAssetKey;
@property (strong, nonatomic) NSFileHandle *clientOpenedFileHandle; // @synthesize clientOpenedFileHandle=_clientOpenedFileHandle;
@property (strong, nonatomic) NSURL *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property (strong, nonatomic) NSString *downloadBaseURL; // @synthesize downloadBaseURL=_downloadBaseURL;
@property (nonatomic) unsigned long long downloadTokenExpiration; // @synthesize downloadTokenExpiration=_downloadTokenExpiration;
@property (strong, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
@property (strong, nonatomic) NSDate *downloadURLExpiration; // @synthesize downloadURLExpiration=_downloadURLExpiration;
@property (nonatomic) BOOL downloaded; // @synthesize downloaded=_downloaded;
@property (readonly, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property (copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (strong, nonatomic) NSNumber *generationCountToSave; // @synthesize generationCountToSave=_generationCountToSave;
@property (nonatomic) BOOL hasSize; // @synthesize hasSize=_hasSize;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *itemTypeHint; // @synthesize itemTypeHint=_itemTypeHint;
@property (strong, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property (nonatomic) unsigned long long paddedFileSize; // @synthesize paddedFileSize=_paddedFileSize;
@property (weak, nonatomic) CKRecord *record; // @synthesize record=_record;
@property (strong, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property (copy, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property (strong, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property (strong, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property (nonatomic) BOOL shouldReadRawEncryptedData; // @synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData;
@property (copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property (nonatomic) unsigned long long size; // @synthesize size=_size;
@property (nonatomic) long long storageGroupingPolicy; // @synthesize storageGroupingPolicy=_storageGroupingPolicy;
@property (readonly) Class superclass;
@property (nonatomic) long long uploadRank; // @synthesize uploadRank=_uploadRank;
@property (copy, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property (nonatomic) double uploadReceiptExpiration; // @synthesize uploadReceiptExpiration=_uploadReceiptExpiration;
@property (nonatomic) BOOL uploaded; // @synthesize uploaded=_uploaded;
@property (nonatomic) BOOL wasCached; // @synthesize wasCached=_wasCached;
@property (strong, nonatomic) NSData *wrappedAssetKey; // @synthesize wrappedAssetKey=_wrappedAssetKey;

+ (id)_openUnencryptedWithOpenInfo:(id)arg1 genCountCheck:(BOOL)arg2 error:(id *)arg3;
+ (id)assetWithFileURL:(id)arg1;
+ (int)errorCodeFromPOSIXCode:(int)arg1;
+ (id)getFileMetadataAtPath:(id)arg1 error:(id *)arg2;
+ (id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id *)arg3;
+ (id)getFileSizeWithOpenInfo:(id)arg1 error:(id *)arg2;
+ (id)openWithOpenInfo:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)_initBare;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCopyInfo:(id)arg1 fileURL:(id)arg2;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3;
- (id)openWithError:(id *)arg1;

@end

