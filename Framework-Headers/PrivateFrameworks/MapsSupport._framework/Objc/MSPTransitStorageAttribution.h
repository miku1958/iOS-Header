//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitAttribution-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString, PBUnknownFields;

@interface MSPTransitStorageAttribution : PBCodable <GEOTransitAttribution, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_providerNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=_providerNames) NSArray *providerNames;
@property (strong, nonatomic) NSMutableArray *providerNames; // @synthesize providerNames=_providerNames;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)providerNamesType;
- (void).cxx_destruct;
- (void)addProviderNames:(id)arg1;
- (void)clearProviderNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithAttribution:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)providerNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)providerNamesCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

