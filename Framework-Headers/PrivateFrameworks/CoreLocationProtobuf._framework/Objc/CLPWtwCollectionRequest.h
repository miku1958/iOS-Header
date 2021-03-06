//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSMutableArray;

@interface CLPWtwCollectionRequest : PBRequest <NSCopying>
{
    CLPMeta *_meta;
    NSMutableArray *_wtwLocations;
}

@property (strong, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
@property (strong, nonatomic) NSMutableArray *wtwLocations; // @synthesize wtwLocations=_wtwLocations;

+ (Class)wtwLocationType;
- (void).cxx_destruct;
- (void)addWtwLocation:(id)arg1;
- (void)clearWtwLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (id)wtwLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)wtwLocationsCount;

@end

