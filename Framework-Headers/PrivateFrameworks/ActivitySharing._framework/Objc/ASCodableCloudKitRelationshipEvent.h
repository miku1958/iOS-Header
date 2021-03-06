//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@interface ASCodableCloudKitRelationshipEvent : PBCodable <NSCopying>
{
    long long _anchor;
    double _date;
    long long _type;
    struct {
        unsigned int anchor:1;
        unsigned int date:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) long long anchor; // @synthesize anchor=_anchor;
@property (nonatomic) double date; // @synthesize date=_date;
@property (nonatomic) BOOL hasAnchor;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type; // @synthesize type=_type;

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

