//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;
@protocol _TtP13CoreKnowledge24CKKnowledgeStoreDelegate_;

@interface _TtC13CoreKnowledge16CKKnowledgeStore : NSObject
{
    MISSING_TYPE *data;
    MISSING_TYPE *location;
    MISSING_TYPE *delegate;
    MISSING_TYPE *path;
    MISSING_TYPE *name;
}

@property (nonatomic, strong) id<_TtP13CoreKnowledge24CKKnowledgeStoreDelegate_> delegate; // @synthesize delegate;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long hashValue;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) NSString *name; // @synthesize name;
@property (nonatomic, readonly) NSString *path; // @synthesize path;

+ (id)defaultKnowledgeStore;
+ (id)inMemoryKnowledgeStore;
+ (id)knowledgeStoreWithName:(id)arg1;
+ (id)userDefaultsKnowledgeStore;
- (CDUnknownBlockType).cxx_destruct;
- (BOOL)dropLinks:(id)arg1 error:(id *)arg2;
- (void)dropLinksFrom:(id)arg1 to:(id)arg2 ignoreWeights:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)dropLinksFrom:(id)arg1 to:(id)arg2 withPredicate:(id)arg3 ignoreWeights:(BOOL)arg4 error:(id *)arg5;
- (void)dropLinksFrom:(id)arg1 withPredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)dropLinksFrom:(id)arg1 withPredicate:(id)arg2 error:(id *)arg3;
- (id)entitiesAndReturnError:(id *)arg1;
- (id)entityWithIdentifier:(id)arg1;
- (BOOL)evaluateJSONLDEntryForEntity:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id *)arg4;
- (void)importContentsOfJSONLDAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)importJSONLDWithData:(id)arg1 error:(id *)arg2;
- (BOOL)inferLinkTo:(id)arg1 withPredicate:(id)arg2 when:(id)arg3 error:(id *)arg4;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)linksWithBetween:(id)arg1 and:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)linksWithBetween:(id)arg1 and:(id)arg2 error:(id *)arg3;
- (MISSING_TYPE *)objectForKeyedSubscript: /* Error: Ran out of types for this method. */;
- (BOOL)removeEntity:(id)arg1 error:(id *)arg2;
- (BOOL)removeObjectForKey:(id)arg1 error:(id *)arg2;
- (MISSING_TYPE *)setObject:forKeyedSubscript: /* Error: Ran out of types for this method. */;
- (id)subgraphWithEntities:(id)arg1;
- (void)triplesMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)triplesMatching:(id)arg1 error:(id *)arg2;
- (BOOL)wipeAndReturnError:(id *)arg1;
- (id)writeBatch;

@end

