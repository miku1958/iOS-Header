//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPProtectionInfo, CKDPRecordIdentifier, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPAsset : PBCodable <NSCopying>
{
    long long _constructedAssetDownloadEstimatedSize;
    long long _constructedAssetDownloadURLExpiration;
    long long _downloadTokenExpiration;
    long long _downloadURLExpiration;
    long long _size;
    NSString *_assetAuthorizationResponseUUID;
    NSData *_assetCopyMetadata;
    NSData *_clearAssetKey;
    NSString *_constructedAssetDownloadURL;
    NSString *_contentBaseURL;
    NSString *_derivedContentType;
    NSString *_downloadBaseURL;
    NSData *_downloadRequest;
    NSString *_downloadToken;
    NSData *_header;
    NSString *_owner;
    CKDPProtectionInfo *_protectionInfo;
    CKDPRecordIdentifier *_recordId;
    NSData *_referenceSignature;
    NSString *_requestor;
    NSData *_signature;
    NSString *_uploadReceipt;
    struct {
        unsigned int constructedAssetDownloadEstimatedSize:1;
        unsigned int constructedAssetDownloadURLExpiration:1;
        unsigned int downloadTokenExpiration:1;
        unsigned int downloadURLExpiration:1;
        unsigned int size:1;
    } _has;
}

@property (strong, nonatomic) NSString *assetAuthorizationResponseUUID; // @synthesize assetAuthorizationResponseUUID=_assetAuthorizationResponseUUID;
@property (strong, nonatomic) NSData *assetCopyMetadata; // @synthesize assetCopyMetadata=_assetCopyMetadata;
@property (strong, nonatomic) NSData *clearAssetKey; // @synthesize clearAssetKey=_clearAssetKey;
@property (nonatomic) long long constructedAssetDownloadEstimatedSize; // @synthesize constructedAssetDownloadEstimatedSize=_constructedAssetDownloadEstimatedSize;
@property (strong, nonatomic) NSString *constructedAssetDownloadURL; // @synthesize constructedAssetDownloadURL=_constructedAssetDownloadURL;
@property (nonatomic) long long constructedAssetDownloadURLExpiration; // @synthesize constructedAssetDownloadURLExpiration=_constructedAssetDownloadURLExpiration;
@property (strong, nonatomic) NSString *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property (strong, nonatomic) NSString *derivedContentType; // @synthesize derivedContentType=_derivedContentType;
@property (strong, nonatomic) NSString *downloadBaseURL; // @synthesize downloadBaseURL=_downloadBaseURL;
@property (strong, nonatomic) NSData *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property (strong, nonatomic) NSString *downloadToken; // @synthesize downloadToken=_downloadToken;
@property (nonatomic) long long downloadTokenExpiration; // @synthesize downloadTokenExpiration=_downloadTokenExpiration;
@property (nonatomic) long long downloadURLExpiration; // @synthesize downloadURLExpiration=_downloadURLExpiration;
@property (readonly, nonatomic) BOOL hasAssetAuthorizationResponseUUID;
@property (readonly, nonatomic) BOOL hasAssetCopyMetadata;
@property (readonly, nonatomic) BOOL hasClearAssetKey;
@property (nonatomic) BOOL hasConstructedAssetDownloadEstimatedSize;
@property (readonly, nonatomic) BOOL hasConstructedAssetDownloadURL;
@property (nonatomic) BOOL hasConstructedAssetDownloadURLExpiration;
@property (readonly, nonatomic) BOOL hasContentBaseURL;
@property (readonly, nonatomic) BOOL hasDerivedContentType;
@property (readonly, nonatomic) BOOL hasDownloadBaseURL;
@property (readonly, nonatomic) BOOL hasDownloadRequest;
@property (readonly, nonatomic) BOOL hasDownloadToken;
@property (nonatomic) BOOL hasDownloadTokenExpiration;
@property (nonatomic) BOOL hasDownloadURLExpiration;
@property (readonly, nonatomic) BOOL hasHeader;
@property (readonly, nonatomic) BOOL hasOwner;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (readonly, nonatomic) BOOL hasRecordId;
@property (readonly, nonatomic) BOOL hasReferenceSignature;
@property (readonly, nonatomic) BOOL hasRequestor;
@property (readonly, nonatomic) BOOL hasSignature;
@property (nonatomic) BOOL hasSize;
@property (readonly, nonatomic) BOOL hasUploadReceipt;
@property (strong, nonatomic) NSData *header; // @synthesize header=_header;
@property (strong, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property (strong, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property (strong, nonatomic) CKDPRecordIdentifier *recordId; // @synthesize recordId=_recordId;
@property (strong, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property (strong, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property (strong, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property (nonatomic) long long size; // @synthesize size=_size;
@property (strong, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

