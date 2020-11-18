//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBTodaySectionIdentifierToGroupTypes : PBCodable <NSCopying>
{
    CDStruct_95bda58d _groupTypes;
    NSString *_personalizationSectionIdentifier;
}

@property (readonly, nonatomic) int *groupTypes;
@property (readonly, nonatomic) unsigned long long groupTypesCount;
@property (strong, nonatomic) NSString *personalizationSectionIdentifier; // @synthesize personalizationSectionIdentifier=_personalizationSectionIdentifier;

- (void).cxx_destruct;
- (int)StringAsGroupTypes:(id)arg1;
- (void)addGroupTypes:(int)arg1;
- (void)clearGroupTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupTypesAsString:(int)arg1;
- (int)groupTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setGroupTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

