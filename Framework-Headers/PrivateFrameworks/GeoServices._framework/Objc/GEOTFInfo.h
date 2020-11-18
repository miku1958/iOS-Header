//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOTFInfo : PBCodable <NSCopying>
{
    NSString *_comment;
    NSString *_language;
}

@property (strong, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property (readonly, nonatomic) BOOL hasComment;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

