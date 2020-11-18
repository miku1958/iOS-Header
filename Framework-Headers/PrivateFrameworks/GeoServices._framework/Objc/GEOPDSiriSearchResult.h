//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOPDSiriSearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_resultDetourInfos;
    BOOL _isChainResultSet;
    CDStruct_5984ff81 _has;
}

@property (strong, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;
@property (nonatomic) BOOL hasIsChainResultSet;
@property (nonatomic) BOOL isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property (strong, nonatomic) NSMutableArray *resultDetourInfos; // @synthesize resultDetourInfos=_resultDetourInfos;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)disambiguationLabelType;
+ (Class)resultDetourInfoType;
- (void)addDisambiguationLabel:(id)arg1;
- (void)addResultDetourInfo:(id)arg1;
- (void)clearDisambiguationLabels;
- (void)clearResultDetourInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultDetourInfosCount;
- (void)writeTo:(id)arg1;

@end

