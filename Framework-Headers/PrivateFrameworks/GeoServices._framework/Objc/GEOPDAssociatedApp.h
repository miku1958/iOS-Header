//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAssociatedApp : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alternateAppAdamIds;
    NSString *_preferredAppAdamId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_alternateAppAdamIds:1;
        unsigned int read_preferredAppAdamId:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *alternateAppAdamIds;
@property (readonly, nonatomic) BOOL hasPreferredAppAdamId;
@property (strong, nonatomic) NSString *preferredAppAdamId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)alternateAppAdamIdType;
+ (id)associatedAppForPlaceData:(id)arg1;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addAlternateAppAdamId:(id)arg1;
- (id)alternateAppAdamIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternateAppAdamIdsCount;
- (void)clearAlternateAppAdamIds;
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
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
