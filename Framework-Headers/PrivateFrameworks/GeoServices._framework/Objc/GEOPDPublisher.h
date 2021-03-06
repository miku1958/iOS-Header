//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocalizedString, GEOPDCaptionedPhoto, GEOPDMapsIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisher : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_collectionIds;
    GEOLocalizedString *_name;
    GEOPDCaptionedPhoto *_photo;
    NSMutableArray *_publisherDescriptions;
    GEOPDMapsIdentifier *_publisherId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _errorState;
    unsigned int _numCollections;
    struct {
        unsigned int has_errorState:1;
        unsigned int has_numCollections:1;
        unsigned int read_unknownFields:1;
        unsigned int read_collectionIds:1;
        unsigned int read_name:1;
        unsigned int read_photo:1;
        unsigned int read_publisherDescriptions:1;
        unsigned int read_publisherId:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *collectionIds;
@property (nonatomic) int errorState;
@property (nonatomic) BOOL hasErrorState;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNumCollections;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (readonly, nonatomic) BOOL hasPublisherId;
@property (strong, nonatomic) GEOLocalizedString *name;
@property (nonatomic) unsigned int numCollections;
@property (strong, nonatomic) GEOPDCaptionedPhoto *photo;
@property (strong, nonatomic) NSMutableArray *publisherDescriptions;
@property (strong, nonatomic) GEOPDMapsIdentifier *publisherId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)collectionIdType;
+ (BOOL)isValid:(id)arg1;
+ (Class)publisherDescriptionType;
- (void).cxx_destruct;
- (int)StringAsErrorState:(id)arg1;
- (void)addCollectionId:(id)arg1;
- (void)addPublisherDescription:(id)arg1;
- (void)clearCollectionIds;
- (void)clearPublisherDescriptions;
- (void)clearUnknownFields:(BOOL)arg1;
- (id)collectionIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)collectionIdsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorStateAsString:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)publisherDescription;
- (id)publisherDescriptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)publisherDescriptionsCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

