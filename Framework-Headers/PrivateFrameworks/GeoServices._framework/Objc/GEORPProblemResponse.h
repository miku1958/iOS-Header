//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying>
{
    NSString *_problemId;
    int _statusCode;
    BOOL _isNotificationSupported;
    struct {
        unsigned int has_statusCode:1;
        unsigned int has_isNotificationSupported:1;
    } _flags;
}

@property (nonatomic) BOOL hasIsNotificationSupported;
@property (readonly, nonatomic) BOOL hasProblemId;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) BOOL isNotificationSupported;
@property (strong, nonatomic) NSString *problemId;
@property (nonatomic) int statusCode;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
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
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
