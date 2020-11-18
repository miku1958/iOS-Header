//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpriteKit/SKNode.h>

#import <SpriteKit/NSCoding-Protocol.h>
#import <SpriteKit/NSCopying-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString, SKShader, SKTileSet, UIColor;

@interface SKTileMapNode : SKNode <NSCopying, NSCoding>
{
    struct SKCTileMapNode *_skcTileMapNode;
    SKTileSet *_tileSet;
    struct CGSize _tileSize;
    MISSING_TYPE *_isoOrigin;
    MISSING_TYPE *_isoColumnVector;
    MISSING_TYPE *_isoRowVector;
    float _isoColumnWidth;
    float _isoRowHeight;
    float _isoHeightScalar;
    float _hexRadius;
    BOOL _enableAutomapping;
    NSString *_tileSetName;
}

@property (nonatomic) struct CGPoint anchorPoint;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) long long blendMode;
@property (strong, nonatomic) UIColor *color;
@property (nonatomic) double colorBlendFactor;
@property (nonatomic) BOOL enableAutomapping;
@property (nonatomic) unsigned int lightingBitMask;
@property (readonly, nonatomic) struct CGSize mapSize;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) unsigned long long numberOfRows;
@property (strong, nonatomic) SKShader *shader;
@property (strong, nonatomic) SKTileSet *tileSet;
@property (strong, nonatomic) NSString *tileSetName; // @synthesize tileSetName=_tileSetName;
@property (nonatomic) struct CGSize tileSize;

+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 fillWithTileGroup:(id)arg5;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 tileGroupLayout:(id)arg5;
- (void).cxx_destruct;
- (void)_didMakeBackingNode;
- (struct SKCNode *)_makeBackingNode;
- (double)alpha;
- (void)applyTileStamp:(id)arg1 inColumn:(long long)arg2 row:(long long)arg3;
- (void)calculateSize;
- (struct CGPoint)centerOfTileAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (void)clearModifiedTileTracking;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createTileStampFromColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 withWidth:(unsigned long long)arg3 height:(unsigned long long)arg4 addToTileSet:(BOOL)arg5;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fillArray:(unsigned int *)arg1 withTilesFromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (void)fillArrayWithTiles:(unsigned int *)arg1;
- (void)fillWithTileDefinition:(id)arg1;
- (void)fillWithTileGroup:(id)arg1;
- (void)forceRedraw;
- (unsigned int)getTileIDWithTileGroup:(id)arg1 andTileDefinition:(id)arg2;
- (void)getTileModifiedData:(long long *)arg1 outMinRowModified:(long long *)arg2 outMaxColumnModified:(long long *)arg3 outmaxRowModified:(long long *)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 fillWithTileGroup:(id)arg5;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 tileGroupLayout:(id)arg5;
- (void)rebuildTileSprites;
- (void)removeAllTiles;
- (void)setAlpha:(double)arg1;
- (void)setColumns:(unsigned long long)arg1 andRows:(long long)arg2;
- (void)setRawTiles:(unsigned int *)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;
- (void)setStartData:(unsigned long long)arg1 rows:(unsigned long long)arg2 tileSize:(struct CGSize)arg3 tileSet:(id)arg4;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forTileIndicies:(id)arg3;
- (void)setTileGroup:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)setTileGroup:(id)arg1 forTileIndicies:(id)arg2;
- (void)setTileGroupWithoutUpdate:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)setTileGroupWithoutUpdate:(id)arg1 tileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)setTilesFromArray:(unsigned int *)arg1;
- (void)setTilesFromArray:(unsigned int *)arg1 fromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (BOOL)shouldUnarchiveTileSet;
- (unsigned long long)tileColumnIndexFromPosition:(struct CGPoint)arg1;
- (id)tileDefinitionAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (id)tileDefinitionForTileID:(unsigned int)arg1;
- (id)tileGroupAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (unsigned long long)tileRowIndexFromPosition:(struct CGPoint)arg1;
- (void)updateTileDefinitionWithoutAutomappingAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)updateTileGroupsAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)validateAllTiles;

@end

