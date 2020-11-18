//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSString;

@interface GEOMiniCard : PBCodable <NSCopying>
{
    NSString *_buttonText;
    GEOFormattedString *_detail;
    GEOFormattedString *_title;
    BOOL _shouldEmphasize;
    struct {
        unsigned int shouldEmphasize:1;
    } _has;
}

@property (strong, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property (strong, nonatomic) GEOFormattedString *detail; // @synthesize detail=_detail;
@property (readonly, nonatomic) BOOL hasButtonText;
@property (readonly, nonatomic) BOOL hasDetail;
@property (nonatomic) BOOL hasShouldEmphasize;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL shouldEmphasize; // @synthesize shouldEmphasize=_shouldEmphasize;
@property (strong, nonatomic) GEOFormattedString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

