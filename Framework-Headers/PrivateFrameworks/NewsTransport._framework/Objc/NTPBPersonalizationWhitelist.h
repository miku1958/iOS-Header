//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying>
{
    NSMutableArray *_defaultTags;
    NSMutableArray *_disabledPortraitTags;
    NSMutableArray *_optionalTags;
}

@property (strong, nonatomic) NSMutableArray *defaultTags; // @synthesize defaultTags=_defaultTags;
@property (strong, nonatomic) NSMutableArray *disabledPortraitTags; // @synthesize disabledPortraitTags=_disabledPortraitTags;
@property (strong, nonatomic) NSMutableArray *optionalTags; // @synthesize optionalTags=_optionalTags;

+ (Class)defaultTagsType;
+ (Class)disabledPortraitTagsType;
+ (Class)optionalTagsType;
- (void).cxx_destruct;
- (void)addDefaultTags:(id)arg1;
- (void)addDisabledPortraitTags:(id)arg1;
- (void)addOptionalTags:(id)arg1;
- (void)clearDefaultTags;
- (void)clearDisabledPortraitTags;
- (void)clearOptionalTags;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)defaultTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultTagsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)disabledPortraitTagsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)optionalTagsAtIndex:(unsigned long long)arg1;
- (unsigned long long)optionalTagsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

