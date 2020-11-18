//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labels;
    NSMutableArray *_lines;
    NSString *_searchDisplayName;
    NSString *_subTitle;
    NSMutableArray *_systems;
    NSString *_title;
    NSMutableArray *_transitConnections;
    unsigned long long _transitId;
    GEOPDMapsIdentifier *_transitMarketId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_transitId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labels:1;
        unsigned int read_lines:1;
        unsigned int read_searchDisplayName:1;
        unsigned int read_subTitle:1;
        unsigned int read_systems:1;
        unsigned int read_title:1;
        unsigned int read_transitConnections:1;
        unsigned int read_transitMarketId:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasSearchDisplayName;
@property (readonly, nonatomic) BOOL hasSubTitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasTransitId;
@property (readonly, nonatomic) BOOL hasTransitMarketId;
@property (strong, nonatomic) NSMutableArray *labels;
@property (strong, nonatomic) NSMutableArray *lines;
@property (strong, nonatomic) NSString *searchDisplayName;
@property (strong, nonatomic) NSString *subTitle;
@property (strong, nonatomic) NSMutableArray *systems;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSMutableArray *transitConnections;
@property (nonatomic) unsigned long long transitId;
@property (strong, nonatomic) GEOPDMapsIdentifier *transitMarketId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
+ (Class)labelType;
+ (Class)lineType;
+ (Class)systemType;
+ (Class)transitConnectionType;
+ (id)transitInfoForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)addLabel:(id)arg1;
- (void)addLine:(id)arg1;
- (void)addSystem:(id)arg1;
- (void)addTransitConnection:(id)arg1;
- (void)clearLabels;
- (void)clearLines;
- (void)clearSystems;
- (void)clearTransitConnections;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)labelAtIndex:(unsigned long long)arg1;
- (unsigned long long)labelsCount;
- (id)lineAtIndex:(unsigned long long)arg1;
- (unsigned long long)linesCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)systemAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemsCount;
- (id)transitConnectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitConnectionsCount;
- (void)writeTo:(id)arg1;

@end
