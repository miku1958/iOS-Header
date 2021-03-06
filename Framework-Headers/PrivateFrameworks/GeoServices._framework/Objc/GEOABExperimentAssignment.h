//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOABDebugPanelExperimentBranch, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOABExperimentAssignment : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    NSString *_offlineAbJson;
    NSString *_querySubstring;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _placeRequestType;
    int _serviceType;
    struct {
        unsigned int has_placeRequestType:1;
        unsigned int has_serviceType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_debugExperimentBranch:1;
        unsigned int read_offlineAbJson:1;
        unsigned int read_querySubstring:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (readonly, nonatomic) BOOL hasDebugExperimentBranch;
@property (readonly, nonatomic) BOOL hasOfflineAbJson;
@property (nonatomic) BOOL hasPlaceRequestType;
@property (readonly, nonatomic) BOOL hasQuerySubstring;
@property (nonatomic) BOOL hasServiceType;
@property (strong, nonatomic) NSString *offlineAbJson;
@property (nonatomic) int placeRequestType;
@property (strong, nonatomic) NSString *querySubstring;
@property (nonatomic) int serviceType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsPlaceRequestType:(id)arg1;
- (int)StringAsServiceType:(id)arg1;
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
- (id)placeRequestTypeAsString:(int)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

