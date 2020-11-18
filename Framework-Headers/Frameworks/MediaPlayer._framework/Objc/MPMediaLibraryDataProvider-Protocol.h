//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class MPMediaEntityCache, MPMediaQueryCriteria, NSArray, NSData, NSSet, NSString;
@protocol MPArtworkDataSource, MPMediaLibraryResultSet;

@protocol MPMediaLibraryDataProvider <NSObject>

@property (readonly, nonatomic) id<MPArtworkDataSource> artworkDataSource;
@property (readonly, nonatomic) MPMediaEntityCache *entityCache;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSSet *propertiesToCache;
@property (readonly, nonatomic) BOOL requiresAuthentication;
@property (readonly, nonatomic) NSString *syncValidity;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (id<MPMediaLibraryResultSet>)collectionResultSetForQueryCriteria:(MPMediaQueryCriteria *)arg1;
- (id<MPMediaLibraryResultSet>)itemResultSetForQueryCriteria:(MPMediaQueryCriteria *)arg1;
- (void)loadProperties:(NSSet *)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(void (^)(NSDictionary *))arg4;
- (void)loadProperties:(NSSet *)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(void (^)(NSDictionary *))arg3;
- (void)loadQueryCriteria:(MPMediaQueryCriteria *)arg1 countOfCollectionsWithCompletionBlock:(void (^)(unsigned long long))arg2;
- (void)loadQueryCriteria:(MPMediaQueryCriteria *)arg1 countOfItemsWithCompletionBlock:(void (^)(unsigned long long))arg2;
- (void)loadQueryCriteria:(MPMediaQueryCriteria *)arg1 hasCollectionsWithCompletionBlock:(void (^)(BOOL))arg2;
- (void)loadQueryCriteria:(MPMediaQueryCriteria *)arg1 hasItemsWithCompletionBlock:(void (^)(BOOL))arg2;
- (void)loadValueForAggregateFunction:(NSString *)arg1 onCollectionsForProperty:(NSString *)arg2 queryCriteria:(MPMediaQueryCriteria *)arg3 completionBlock:(void (^)(id))arg4;
- (void)loadValueForAggregateFunction:(NSString *)arg1 onItemsForProperty:(NSString *)arg2 queryCriteria:(MPMediaQueryCriteria *)arg3 completionBlock:(void (^)(id))arg4;

@optional
- (void)connectWithAuthenticationData:(NSData *)arg1 completionBlock:(void (^)(BOOL, NSError *))arg2 progressHandler:(void (^)(float))arg3;
- (void)disconnect;
- (void)enumerateCollectionIdentifiersForQueryCriteria:(MPMediaQueryCriteria *)arg1 ordered:(BOOL)arg2 cancelBlock:(BOOL (^)(void))arg3 usingBlock:(void (^)(long long, NSDictionary *, BOOL *))arg4;
- (void)enumerateEntityChangesAfterSyncAnchor:(NSString *)arg1 maximumRevisionType:(long long)arg2 inUsersLibrary:(BOOL)arg3 itemBlock:(void (^)(long long, NSString *, long long, BOOL *))arg4 collectionBlock:(void (^)(long long, long long, NSString *, long long, BOOL *))arg5;
- (void)enumerateItemIdentifiersForQueryCriteria:(MPMediaQueryCriteria *)arg1 ordered:(BOOL)arg2 cancelBlock:(BOOL (^)(void))arg3 usingBlock:(void (^)(long long, BOOL *))arg4;
- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)setLibraryPublicContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(NSArray *)arg2;
- (void)setLibraryPublicEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(NSArray *)arg2;
@end
