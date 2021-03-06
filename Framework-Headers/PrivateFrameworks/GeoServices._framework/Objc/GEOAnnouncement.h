//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEOPDFlyover, NSString, PBDataReader;

@interface GEOAnnouncement : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_buttonOneAppURI;
    NSString *_buttonOneMessage;
    NSString *_buttonTwoAppURI;
    NSString *_buttonTwoMessage;
    GEOPDFlyover *_flyoverInfo;
    GEOMapRegion *_mapRegion;
    NSString *_title;
    NSString *_userMessage;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _announcementID;
    int _announcementType;
    unsigned int _displayDestinations;
    int _releasePhase;
    struct {
        unsigned int has_announcementID:1;
        unsigned int has_announcementType:1;
        unsigned int has_displayDestinations:1;
        unsigned int has_releasePhase:1;
        unsigned int read_buttonOneAppURI:1;
        unsigned int read_buttonOneMessage:1;
        unsigned int read_buttonTwoAppURI:1;
        unsigned int read_buttonTwoMessage:1;
        unsigned int read_flyoverInfo:1;
        unsigned int read_mapRegion:1;
        unsigned int read_title:1;
        unsigned int read_userMessage:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) unsigned int announcementID;
@property (nonatomic) int announcementType;
@property (strong, nonatomic) NSString *buttonOneAppURI;
@property (strong, nonatomic) NSString *buttonOneMessage;
@property (strong, nonatomic) NSString *buttonTwoAppURI;
@property (strong, nonatomic) NSString *buttonTwoMessage;
@property (nonatomic) unsigned int displayDestinations;
@property (strong, nonatomic) GEOPDFlyover *flyoverInfo;
@property (nonatomic) BOOL hasAnnouncementID;
@property (nonatomic) BOOL hasAnnouncementType;
@property (readonly, nonatomic) BOOL hasButtonOneAppURI;
@property (readonly, nonatomic) BOOL hasButtonOneMessage;
@property (readonly, nonatomic) BOOL hasButtonTwoAppURI;
@property (readonly, nonatomic) BOOL hasButtonTwoMessage;
@property (nonatomic) BOOL hasDisplayDestinations;
@property (readonly, nonatomic) BOOL hasFlyoverInfo;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (nonatomic) BOOL hasReleasePhase;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUserMessage;
@property (strong, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) int releasePhase;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *userMessage;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsAnnouncementType:(id)arg1;
- (int)StringAsReleasePhase:(id)arg1;
- (id)announcementTypeAsString:(int)arg1;
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
- (id)releasePhaseAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

