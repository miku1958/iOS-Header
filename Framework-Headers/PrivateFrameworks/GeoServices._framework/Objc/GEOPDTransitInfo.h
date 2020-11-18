//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_labels;
    NSMutableArray *_lines;
    NSString *_searchDisplayName;
    NSMutableArray *_systems;
    NSMutableArray *_transitConnections;
}

@property (readonly, nonatomic) BOOL hasSearchDisplayName;
@property (strong, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property (strong, nonatomic) NSMutableArray *lines; // @synthesize lines=_lines;
@property (strong, nonatomic) NSString *searchDisplayName; // @synthesize searchDisplayName=_searchDisplayName;
@property (strong, nonatomic) NSMutableArray *systems; // @synthesize systems=_systems;
@property (strong, nonatomic) NSMutableArray *transitConnections; // @synthesize transitConnections=_transitConnections;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (unsigned long long)labelsCount;
- (id)lineAtIndex:(unsigned long long)arg1;
- (unsigned long long)linesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)systemAtIndex:(unsigned long long)arg1;
- (unsigned long long)systemsCount;
- (id)transitConnectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)transitConnectionsCount;
- (void)writeTo:(id)arg1;

@end

