//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphPropertylessNode.h>

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphPortraitTopic-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString;

@interface PGGraphMeaningNode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport>
{
    NSString *_label;
    long long _isVeryMeaningfulCachedValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long isVeryMeaningfulCachedValue; // @synthesize isVeryMeaningfulCachedValue=_isVeryMeaningfulCachedValue;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly) PGGraphMeaningNode *parentMeaningNode;
@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVeryMeaningful) BOOL veryMeaningful;

+ (id)eventOfMeaning;
+ (id)meaningLabelsForMeaningNodes:(id)arg1;
+ (id)momentOfMeaning;
+ (id)submeaningOfMeaning;
- (void).cxx_destruct;
- (id)_localizationKeyForMeaningLabel:(id)arg1;
- (id)associatedNodesForRemoval;
- (unsigned short)domain;
- (void)enumerateHighlightNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMeaningfulEventsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSubmeaningsUsingBlock:(CDUnknownBlockType)arg1;
- (id)highlightNodes;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)label;
- (id)momentNodes;
- (void)traverseParentMeaningHierarchyUsingBlock:(CDUnknownBlockType)arg1;
- (void)traverseSubmeaningHierarchyUsingBlock:(CDUnknownBlockType)arg1;

@end
