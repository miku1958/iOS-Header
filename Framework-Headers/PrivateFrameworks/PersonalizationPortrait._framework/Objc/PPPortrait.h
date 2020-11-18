//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPPortrait : NSObject
{
}

+ (unsigned long long)assetVersion;
+ (BOOL)clearNamedEntityStore:(id *)arg1;
+ (BOOL)clearTopicStore:(id *)arg1;
+ (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id *)arg3;
+ (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 error:(id *)arg2;
+ (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id *)arg3;
+ (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id *)arg3;
+ (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 error:(id *)arg2;
+ (BOOL)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id *)arg3;
+ (BOOL)deleteAllTopicsWithTopicId:(id)arg1 error:(id *)arg2;
+ (BOOL)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
+ (BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 error:(id *)arg6;
+ (BOOL)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 error:(id *)arg5;
+ (BOOL)donateSiriQuery:(id)arg1 qid:(id)arg2 error:(id *)arg3;
+ (BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 decayRate:(double)arg5 error:(id *)arg6;
+ (BOOL)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(BOOL)arg4 error:(id *)arg5;
+ (void)flushNamedEntityDonation;
+ (id)getPortraitVariantName;
+ (id)namedEntityRecordsWithLimit:(unsigned long long)arg1 matchingName:(id)arg2 matchingSourceBundleId:(id)arg3 sinceDate:(id)arg4 error:(id *)arg5;
+ (id)namedEntityRecordsWithLimit:(unsigned long long)arg1 matchingName:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2;
+ (void)portraitFeedbackEngagedMappedTopics:(id)arg1 forMapping:(id)arg2;
+ (void)portraitFeedbackEngagedNamedEntities:(id)arg1;
+ (void)portraitFeedbackEngagedTopics:(id)arg1;
+ (void)portraitFeedbackMappedTopicsOverallEngagement:(id)arg1 forMapping:(id)arg2;
+ (void)portraitFeedbackNamedEntitiesOverallEngagement:(id)arg1;
+ (void)portraitFeedbackTopicsOverallEngagement:(id)arg1;
+ (void)portraitFeedbackUsedMappedTopics:(id)arg1 forMapping:(id)arg2;
+ (void)portraitFeedbackUsedNamedEntities:(id)arg1;
+ (void)portraitFeedbackUsedTopics:(id)arg1;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 error:(id *)arg2;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 matchingCategory:(unsigned long long)arg2 error:(id *)arg3;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 matchingCategory:(unsigned long long)arg2 excludingSourceBundleId:(id)arg3 fromDate:(id)arg4 toDate:(id)arg5 error:(id *)arg6;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 matchingCategory:(unsigned long long)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)rankedNamedEntitiesWithLimit:(unsigned long long)arg1 sinceDate:(id)arg2 error:(id *)arg3;
+ (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 decayRate:(double)arg2 error:(id *)arg3;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 error:(id *)arg2;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 excludingSourceBundleId:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)rankedTopicsWithLimit:(unsigned long long)arg1 sinceDate:(id)arg2 decayRate:(double)arg3 error:(id *)arg4;
+ (id)rankedTopicsWithQuery:(id)arg1 error:(id *)arg2;
+ (void)registerMaintenanceTasks;
+ (void)registerXPCListenerWithStringDonationHandler:(id)arg1;
+ (id)scoresForTopicMapping:(id)arg1 excludingSourceBundleId:(id)arg2 fromDate:(id)arg3 decayRate:(double)arg4 error:(id *)arg5;
+ (id)scoresForTopicMapping:(id)arg1 excludingSourceBundleId:(id)arg2 fromDate:(id)arg3 decayRate:(double)arg4 withBiases:(BOOL)arg5 error:(id *)arg6;
+ (id)scoresForTopics:(id)arg1 excludingSourceBundleId:(id)arg2 decayRate:(double)arg3 error:(id *)arg4;
+ (id)topicRecordsWithLimit:(unsigned long long)arg1 excludingSourceBundleId:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)topicRecordsWithLimit:(unsigned long long)arg1 matchingSourceBundleId:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)topicRecordsWithLimit:(unsigned long long)arg1 matchingTopicId:(id)arg2 sinceDate:(id)arg3 error:(id *)arg4;
+ (id)topicRecordsWithQuery:(id)arg1 error:(id *)arg2;

@end

