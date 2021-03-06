//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, PGGraph, PGSearchComputationCache;

@interface PGSearchKeywordComputer : NSObject
{
    PGGraph *_graph;
    PGSearchComputationCache *_searchComputationCache;
    NSDictionary *_personLocalIdentifiersBySocialGroupUUID;
}

@property (readonly, nonatomic) NSDictionary *personLocalIdentifiersBySocialGroupUUID; // @synthesize personLocalIdentifiersBySocialGroupUUID=_personLocalIdentifiersBySocialGroupUUID;
@property (readonly, nonatomic) PGSearchComputationCache *searchComputationCache; // @synthesize searchComputationCache=_searchComputationCache;

- (void).cxx_destruct;
- (void)_enumerateBusinessAndPublicEventKeywordsForEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_personUUIDsInSocialGroupNode:(id)arg1;
- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2;
- (id)eventNodeForUUID:(id)arg1 ofType:(unsigned long long)arg2;
- (id)initWithGraph:(id)arg1 searchComputationCache:(id)arg2;
- (id)searchKeywordsByEventWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2;
- (id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg1 ofType:(unsigned long long)arg2 isFullAnalysis:(BOOL)arg3;

@end

