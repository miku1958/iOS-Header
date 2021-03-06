//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRequestedFields;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveRequestRetrieveAssetURL : PBCodable <NSCopying>
{
    long long _requestedTTL;
    CKDPRequestedFields *_assetFields;
    int _type;
    struct {
        unsigned int requestedTTL:1;
        unsigned int type:1;
    } _has;
}

@property (strong, nonatomic) CKDPRequestedFields *assetFields; // @synthesize assetFields=_assetFields;
@property (readonly, nonatomic) BOOL hasAssetFields;
@property (nonatomic) BOOL hasRequestedTTL;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long requestedTTL; // @synthesize requestedTTL=_requestedTTL;
@property (nonatomic) int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

