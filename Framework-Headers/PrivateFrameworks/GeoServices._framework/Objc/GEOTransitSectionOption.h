//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOTransitSectionOption : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _sections;
    unsigned int _defaultSectionIndex;
    struct {
        unsigned int defaultSectionIndex:1;
    } _has;
}

@property (nonatomic) unsigned int defaultSectionIndex; // @synthesize defaultSectionIndex=_defaultSectionIndex;
@property (nonatomic) BOOL hasDefaultSectionIndex;
@property (readonly, nonatomic) unsigned int *sections;
@property (readonly, nonatomic) unsigned long long sectionsCount;

- (void)addSection:(unsigned int)arg1;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)sectionAtIndex:(unsigned long long)arg1;
- (void)setSections:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

