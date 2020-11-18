//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOBusinessResolutionResponse : PBCodable <NSCopying>
{
    NSString *_businessName;
    unsigned long long _businessUID;
    int _status;
    struct {
        unsigned int has_businessUID:1;
        unsigned int has_status:1;
    } _flags;
}

@property (strong, nonatomic) NSString *businessName;
@property (nonatomic) unsigned long long businessUID;
@property (readonly, nonatomic) BOOL hasBusinessName;
@property (nonatomic) BOOL hasBusinessUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
