//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCoding-Protocol.h>
#import <SpriteKit/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString, SKTileGroup;

@interface SKTileSet : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_definitions;
    NSMutableArray *_groups;
    NSArray *_stamps;
    unsigned long long _type;
    struct CGSize _defaultTileSize;
    unsigned long long _defaultTileGroupIndex;
    NSString *_name;
}

@property (strong, nonatomic) SKTileGroup *defaultTileGroup;
@property (nonatomic) struct CGSize defaultTileSize;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSArray *stamps;
@property (readonly, nonatomic) NSArray *tileDefinitions;
@property (copy, nonatomic) NSArray *tileGroups;
@property (nonatomic) unsigned long long type;

+ (void)clearTileSetTableCache;
+ (id)findTileSetInBundleNamed:(id)arg1;
+ (id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)tileSetFromURL:(id)arg1;
+ (id)tileSetNamed:(id)arg1;
+ (id)tileSetWithTileGroups:(id)arg1;
+ (id)tileSetWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)calcDefaultTileSize;
- (void)commonInit;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)findTileDefinitionForGroup:(id)arg1 withGroupAdjacency:(unsigned long long *)arg2;
- (id)findTileDefinitionsForGroup:(id)arg1 withGroupAdjacency:(unsigned long long *)arg2;
- (id)getCenterTileDefinitionForGroup:(id)arg1 withRequiredOutputGroupAdjacency:(unsigned long long *)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTileGroups:(id)arg1;
- (id)initWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2;
- (void)lookForMissingDefinitionsInGroups;
- (void)observeAllTileDefinitions;
- (void)observeTileDefinition:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeTileDefinitionObservers:(id)arg1;
- (void)setGroupParentPointers;
- (void)unobserveAllTileDefinitions;
- (void)updateTileDefinitionIDsInGroupRules;

@end

