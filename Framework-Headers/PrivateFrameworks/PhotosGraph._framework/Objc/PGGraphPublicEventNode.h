//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphOptimizedNode.h>

#import <PhotosGraph/PGGraphPortraitNamedEntity-Protocol.h>

@class NSSet, NSString, PGGraphBusinessNode, PPNamedEntity;

@interface PGGraphPublicEventNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity>
{
    unsigned long long _muid;
    NSString *_name;
    long long _expectedAttendance;
}

@property (readonly, nonatomic) PGGraphBusinessNode *businessNode;
@property (readonly, nonatomic) NSSet *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long expectedAttendance; // @synthesize expectedAttendance=_expectedAttendance;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *localizedCategories;
@property (readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSSet *performers;
@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly, nonatomic) NSSet *preciseLocalizedCategoryNames;
@property (readonly) Class superclass;

+ (id)categoryOfPublicEvent;
+ (id)momentNodesForPublicEventNodes:(id)arg1;
+ (id)unsupportedCategoriesForTitles;
- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
- (unsigned short)domain;
- (void)enumerateCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLocalizedSubcategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMomentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePerformerNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePublicEventCategoryNodesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasProperties:(id)arg1;
- (id)init;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)keywordDescription;
- (id)label;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)arg1;

@end
