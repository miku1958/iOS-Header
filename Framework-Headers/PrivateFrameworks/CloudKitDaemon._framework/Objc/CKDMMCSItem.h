//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKAsset, CKPackage, CKRecordID, NSData, NSError, NSMutableArray, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDMMCSItem : NSObject
{
    BOOL _hasSize;
    BOOL _hasOffset;
    BOOL _finished;
    BOOL _temporary;
    BOOL _shouldReadRawEncryptedData;
    unsigned int _chunkCount;
    NSURL *_fileURL;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    unsigned long long _itemID;
    double _progress;
    unsigned long long _size;
    unsigned long long _offset;
    unsigned long long _packageIndex;
    CKAsset *_asset;
    CKPackage *_package;
    CKRecordID *_recordID;
    NSString *_recordType;
    NSString *_recordKey;
    NSData *_signature;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSString *_authToken;
    NSData *_authRequest;
    NSString *_uploadReceipt;
    NSMutableArray *_sectionItems;
    NSError *_error;
    NSData *_assetKey;
    NSData *_wrappedAssetKey;
    NSData *_referenceSignature;
    unsigned long long _uploadTokenExpiration;
    unsigned long long _downloadTokenExpiration;
    NSString *_trackingUUID;
}

@property (strong, nonatomic) CKAsset *asset; // @synthesize asset=_asset;
@property (strong, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property (strong, nonatomic) NSData *authRequest; // @synthesize authRequest=_authRequest;
@property (strong, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property (nonatomic) unsigned int chunkCount; // @synthesize chunkCount=_chunkCount;
@property (strong, nonatomic) NSURL *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property (strong, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property (nonatomic) unsigned long long downloadTokenExpiration; // @synthesize downloadTokenExpiration=_downloadTokenExpiration;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property (strong, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (nonatomic) BOOL finished; // @synthesize finished=_finished;
@property (strong, nonatomic) NSNumber *generationID; // @synthesize generationID=_generationID;
@property (nonatomic) BOOL hasOffset; // @synthesize hasOffset=_hasOffset;
@property (nonatomic) BOOL hasSize; // @synthesize hasSize=_hasSize;
@property (nonatomic) unsigned long long itemID; // @synthesize itemID=_itemID;
@property (nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property (strong, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property (strong, nonatomic) CKPackage *package; // @synthesize package=_package;
@property (nonatomic) unsigned long long packageIndex; // @synthesize packageIndex=_packageIndex;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (strong, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property (strong, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property (strong, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property (strong, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property (strong, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property (strong, nonatomic) NSMutableArray *sectionItems; // @synthesize sectionItems=_sectionItems;
@property (nonatomic) BOOL shouldReadRawEncryptedData; // @synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData;
@property (strong, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property (nonatomic) unsigned long long size; // @synthesize size=_size;
@property (nonatomic, getter=isTemporary) BOOL temporary; // @synthesize temporary=_temporary;
@property (strong, nonatomic) NSString *trackingUUID; // @synthesize trackingUUID=_trackingUUID;
@property (strong, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property (nonatomic) unsigned long long uploadTokenExpiration; // @synthesize uploadTokenExpiration=_uploadTokenExpiration;
@property (strong, nonatomic) NSData *wrappedAssetKey; // @synthesize wrappedAssetKey=_wrappedAssetKey;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_openInfo;
- (id)description;
- (id)getFileMetadataWithFileHandle:(id)arg1 error:(id *)arg2;
- (id)getFileSizeWithError:(id *)arg1;
- (id)getFileSizeWithProxy:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithPackage:(id)arg1;
- (id)openWithError:(id *)arg1;
- (id)openWithProxy:(id)arg1 error:(id *)arg2;

@end
