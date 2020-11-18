//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSSet, NSString;

@interface PGGraphPetNode : PGGraphOptimizedNode
{
    NSString *_uuid;
}

@property (readonly, nonatomic) NSSet *momentNodes;
@property (readonly, nonatomic) NSSet *ownerNodes;

- (void).cxx_destruct;
- (id)description;
- (unsigned short)domain;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateOwnerNodesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasProperties:(id)arg1;
- (id)init;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)label;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)arg1;

@end
