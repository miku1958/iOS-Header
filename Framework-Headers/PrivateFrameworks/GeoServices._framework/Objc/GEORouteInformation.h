//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString;

__attribute__((visibility("hidden")))
@interface GEORouteInformation : PBCodable <NSCopying>
{
    GEOFormattedString *_detail;
    GEOFormattedString *_duration;
}

@property (strong, nonatomic) GEOFormattedString *detail; // @synthesize detail=_detail;
@property (strong, nonatomic) GEOFormattedString *duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) BOOL hasDetail;
@property (readonly, nonatomic) BOOL hasDuration;

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

