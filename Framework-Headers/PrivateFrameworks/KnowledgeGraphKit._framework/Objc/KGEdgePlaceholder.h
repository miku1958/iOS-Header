//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/KGEdge-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol KGNode;

@interface KGEdgePlaceholder : NSObject <KGEdge>
{
    float _weight;
    unsigned long long _identifier;
    NSArray *_labels;
    NSDictionary *_properties;
    id<KGNode> _sourceNode;
    id<KGNode> _targetNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property (readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property (readonly, nonatomic) id<KGNode> sourceNode; // @synthesize sourceNode=_sourceNode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<KGNode> targetNode; // @synthesize targetNode=_targetNode;
@property (readonly, nonatomic) float weight; // @synthesize weight=_weight;

- (void).cxx_destruct;
- (void)_setIdentifier:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6;
- (BOOL)isResolved;
- (id)oppositeNodeFromNode:(id)arg1;

@end

