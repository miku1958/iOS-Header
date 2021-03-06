//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class MIPArtist, MIPSeries, NSString;

@interface MIPPodcast : PBCodable <NSCopying>
{
    MIPArtist *_artist;
    NSString *_externalGuid;
    NSString *_feedUrl;
    MIPSeries *_series;
}

@property (strong, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
@property (strong, nonatomic) NSString *externalGuid; // @synthesize externalGuid=_externalGuid;
@property (strong, nonatomic) NSString *feedUrl; // @synthesize feedUrl=_feedUrl;
@property (readonly, nonatomic) BOOL hasArtist;
@property (readonly, nonatomic) BOOL hasExternalGuid;
@property (readonly, nonatomic) BOOL hasFeedUrl;
@property (readonly, nonatomic) BOOL hasSeries;
@property (strong, nonatomic) MIPSeries *series; // @synthesize series=_series;

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

