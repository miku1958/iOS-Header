//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDEntityFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    BOOL _includeName;
    BOOL _includeSpokenNames;
    struct {
        unsigned int includeName:1;
        unsigned int includeSpokenNames:1;
    } _has;
}

@property (nonatomic) BOOL hasIncludeName;
@property (nonatomic) BOOL hasIncludeSpokenNames;
@property (nonatomic) BOOL includeName; // @synthesize includeName=_includeName;
@property (nonatomic) BOOL includeSpokenNames; // @synthesize includeSpokenNames=_includeSpokenNames;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

