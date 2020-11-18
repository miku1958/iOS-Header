//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEORPPostedBy : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_nickname;
    NSString *_userDsid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _role;
    struct {
        unsigned int has_role:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nickname:1;
        unsigned int read_userDsid:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_nickname:1;
        unsigned int wrote_userDsid:1;
        unsigned int wrote_role:1;
    } _flags;
}

@property (readonly, nonatomic) BOOL hasNickname;
@property (nonatomic) BOOL hasRole;
@property (readonly, nonatomic) BOOL hasUserDsid;
@property (strong, nonatomic) NSString *nickname;
@property (nonatomic) int role;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *userDsid;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsRole:(id)arg1;
- (void)_readNickname;
- (void)_readUserDsid;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)roleAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
