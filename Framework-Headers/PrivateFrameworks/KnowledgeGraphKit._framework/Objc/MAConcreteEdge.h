//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MAEdge.h>

@class NSMutableDictionary, NSString;

@interface MAConcreteEdge : MAEdge
{
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}

- (void).cxx_destruct;
- (unsigned short)domain;
- (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasProperties;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5;
- (id)label;
- (unsigned long long)memoryFootprint:(id)arg1;
- (void)mergeProperties:(id)arg1;
- (unsigned long long)propertiesCount;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)propertyKeys;
- (void)removeAllProperties;
- (void)removePropertyForKey:(id)arg1;
- (void)setLocalProperties:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)setWeight:(float)arg1;
- (float)weight;

@end
