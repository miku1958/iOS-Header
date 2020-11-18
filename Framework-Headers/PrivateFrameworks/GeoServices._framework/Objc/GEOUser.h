//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPhoto, NSString;

@interface GEOUser : PBCodable <NSCopying>
{
    GEOPhoto *_image;
    NSString *_name;
}

@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasName;
@property (strong, nonatomic) GEOPhoto *image; // @synthesize image=_image;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;

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

