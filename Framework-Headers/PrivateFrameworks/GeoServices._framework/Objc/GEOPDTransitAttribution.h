//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDTransitAttribution : PBCodable <NSCopying>
{
    NSMutableArray *_providerNames;
}

@property (strong, nonatomic) NSMutableArray *providerNames; // @synthesize providerNames=_providerNames;

+ (Class)providerNameType;
+ (id)transitAttributionForPlaceData:(id)arg1;
- (void)addProviderName:(id)arg1;
- (void)clearProviderNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)providerNamesCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

