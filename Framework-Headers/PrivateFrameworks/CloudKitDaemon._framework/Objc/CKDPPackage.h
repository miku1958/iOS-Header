//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPAsset, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPPackage : PBCodable <NSCopying>
{
    CKDPAsset *_manifest;
    NSMutableArray *_sections;
}

@property (readonly, nonatomic) BOOL hasManifest;
@property (strong, nonatomic) CKDPAsset *manifest; // @synthesize manifest=_manifest;
@property (strong, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;

+ (Class)sectionsType;
- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)writeTo:(id)arg1;

@end

