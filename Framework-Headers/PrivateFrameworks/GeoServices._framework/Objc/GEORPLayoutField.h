//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPFeedbackLayoutFieldName, NSString, PBDataReader;

@interface GEORPLayoutField : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_displayText;
    GEORPFeedbackLayoutFieldName *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _ordinal;
    int _type;
    BOOL _enabled;
    struct {
        unsigned int has_ordinal:1;
        unsigned int has_type:1;
        unsigned int has_enabled:1;
        unsigned int read_displayText:1;
        unsigned int read_name:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *displayText;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL hasDisplayText;
@property (nonatomic) BOOL hasEnabled;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasOrdinal;
@property (nonatomic) BOOL hasType;
@property (strong, nonatomic) GEORPFeedbackLayoutFieldName *name;
@property (nonatomic) unsigned int ordinal;
@property (nonatomic) int type;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
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
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
