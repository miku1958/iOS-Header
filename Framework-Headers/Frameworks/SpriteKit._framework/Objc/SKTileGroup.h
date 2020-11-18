//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString, SKTileSet;

@interface SKTileGroup : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_rules;
    unsigned long long _type;
    NSString *_name;
    SKTileSet *_parentSet;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (weak, nonatomic) SKTileSet *parentSet; // @synthesize parentSet=_parentSet;
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic) unsigned long long type;

+ (id)emptyTileGroup;
+ (BOOL)supportsSecureCoding;
+ (id)tileGroupWithRules:(id)arg1;
+ (id)tileGroupWithTileDefinition:(id)arg1;
- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)findTileDefinitionIDsForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2;
- (unsigned long long)findTileDefinitionIndexForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithRules:(id)arg1;
- (id)initWithTileDefinition:(id)arg1;
- (BOOL)isEqualToNode:(id)arg1;
- (void)setRuleParentPointers;

@end
