//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VectorKit/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPGenericShieldStylePack : PBCodable <NSCopying>
{
    NSMutableArray *_genericShields;
    NSMutableArray *_textureAtlas;
}

@property (strong, nonatomic) NSMutableArray *genericShields; // @synthesize genericShields=_genericShields;
@property (strong, nonatomic) NSMutableArray *textureAtlas; // @synthesize textureAtlas=_textureAtlas;

- (void)addGenericShield:(id)arg1;
- (void)addTextureAtlas:(id)arg1;
- (void)clearGenericShields;
- (void)clearTextureAtlas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)genericShieldAtIndex:(unsigned long long)arg1;
- (unsigned long long)genericShieldsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)textureAtlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)textureAtlasCount;
- (void)writeTo:(id)arg1;

@end

