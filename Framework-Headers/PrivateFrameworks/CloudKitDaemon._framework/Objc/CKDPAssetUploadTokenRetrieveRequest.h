//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSMutableArray *_assets;
    NSData *_authPutRequest;
    NSMutableArray *_authPutRequestHeaders;
    CKDPRecordFieldIdentifier *_field;
    CKDPRecordType *_type;
    NSMutableArray *_uploads;
}

@property (strong, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property (strong, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property (strong, nonatomic) NSMutableArray *authPutRequestHeaders; // @synthesize authPutRequestHeaders=_authPutRequestHeaders;
@property (strong, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
@property (readonly, nonatomic) BOOL hasAuthPutRequest;
@property (readonly, nonatomic) BOOL hasField;
@property (readonly, nonatomic) BOOL hasType;
@property (strong, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
@property (strong, nonatomic) NSMutableArray *uploads; // @synthesize uploads=_uploads;

+ (Class)assetsType;
+ (Class)authPutRequestHeadersType;
+ (id)options;
+ (Class)uploadsType;
- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (void)addAuthPutRequestHeaders:(id)arg1;
- (void)addUploads:(id)arg1;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (id)authPutRequestHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)authPutRequestHeadersCount;
- (void)clearAssets;
- (void)clearAuthPutRequestHeaders;
- (void)clearUploads;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)uploadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadsCount;
- (void)writeTo:(id)arg1;

@end

