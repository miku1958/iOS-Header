//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/KGEdge-Protocol.h>
#import <KnowledgeGraphKit/MAElement-Protocol.h>
#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class MABaseGraph, MAGraphReference, MANode, NSArray, NSDictionary, NSString;
@protocol KGNode;

@interface MAEdge : NSObject <KGEdge, MAElement, NSCopying>
{
    MANode *_strongSourceNode;
    MANode *_strongTargetNode;
    MANode *_weakSourceNode;
    MANode *_weakTargetNode;
    unsigned int _identifier;
    MAGraphReference *_graphReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short domain; // @dynamic domain;
@property (readonly, weak, nonatomic) MABaseGraph *graph;
@property (strong, nonatomic) MAGraphReference *graphReference; // @synthesize graphReference=_graphReference;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long identifier;
@property (nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *label; // @dynamic label;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) id<KGNode> sourceNode;
@property (readonly, weak, nonatomic) MANode *sourceNode;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<KGNode> targetNode;
@property (readonly, weak, nonatomic) MANode *targetNode;
@property (readonly, nonatomic) float weight;
@property (nonatomic) float weight; // @dynamic weight;

- (void).cxx_destruct;
- (id)commonNode:(id)arg1;
- (BOOL)conformsToEdgeSchema:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasEqualPropertiesToEdge:(id)arg1;
- (BOOL)hasProperties;
- (BOOL)hasProperties:(id)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEdge:(id)arg1;
- (BOOL)isIdentifiedByProperties:(id)arg1;
- (BOOL)isLoop;
- (BOOL)isSameEdgeAsEdge:(id)arg1;
- (BOOL)isUnique;
- (unsigned long long)memoryFootprint:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)oppositeNode:(id)arg1;
- (id)oppositeNodeFromNode:(id)arg1;
- (unsigned long long)propertiesCount;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2;
- (id)propertyKeys;
- (void)removeAllProperties;
- (void)removePropertyForKey:(id)arg1;
- (void)setLocalProperties:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setProperties:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (id)shortDescription;
- (void)updatePersistedWeight:(float)arg1;
- (id)visualString;
- (id)visualStringWithName:(id)arg1;
- (id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2;

@end
