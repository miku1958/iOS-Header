//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordFieldIdentifier, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying>
{
    NSMutableArray *_assets;
    CKDPRecordFieldIdentifier *_field;
}

@property (strong, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property (strong, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
@property (readonly, nonatomic) BOOL hasField;

+ (Class)assetsType;
- (void).cxx_destruct;
- (void)addAssets:(id)arg1;
- (id)assetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetsCount;
- (void)clearAssets;
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
