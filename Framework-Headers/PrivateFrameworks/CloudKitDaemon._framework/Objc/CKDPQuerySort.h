//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPLocationCoordinate, CKDPRecordFieldIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPQuerySort : PBCodable <NSCopying>
{
    CKDPLocationCoordinate *_coordinate;
    CKDPRecordFieldIdentifier *_fieldName;
    int _order;
    struct {
        unsigned int order:1;
    } _has;
}

@property (strong, nonatomic) CKDPLocationCoordinate *coordinate; // @synthesize coordinate=_coordinate;
@property (strong, nonatomic) CKDPRecordFieldIdentifier *fieldName; // @synthesize fieldName=_fieldName;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (readonly, nonatomic) BOOL hasFieldName;
@property (nonatomic) BOOL hasOrder;
@property (nonatomic) int order; // @synthesize order=_order;

- (void).cxx_destruct;
- (int)StringAsOrder:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)orderAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

