//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDInteractionCache, _CDInteractionStore, _PSContactResolver;
@protocol _DKKnowledgeQuerying;

@interface _PSHeuristics : NSObject
{
    id<_DKKnowledgeQuerying> _knowledgeStore;
    _CDInteractionStore *_interactionStore;
    _PSContactResolver *_contactResolver;
    _CDInteractionCache *_recencyCache;
}

@property (readonly, nonatomic) _PSContactResolver *contactResolver; // @synthesize contactResolver=_contactResolver;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property (strong, nonatomic) _CDInteractionCache *recencyCache; // @synthesize recencyCache=_recencyCache;

+ (id)templateForInPhoneCallHeuristicWithContactId:(id)arg1 handle:(id)arg2;
- (void).cxx_destruct;
- (id)backFillProxiesByRecencyUsingMessagesCache:(id)arg1 startIndex:(unsigned long long)arg2;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)arg1 predictionContextBundleId:(id)arg2;
- (id)inPhoneCallHeuristicSuggestionProxies;
- (id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2 contactResolver:(id)arg3;
- (id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)arg1 bundleIds:(id)arg2 meContactIdentifier:(id)arg3;
- (id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)arg1 photoSuggestedPeople:(id)arg2 contactIDsInAssets:(id)arg3;
- (void)prepareRecencyCache;
- (id)proximityBoostingHeuristicWithProximityBooster:(id)arg1 existingSuggestions:(id)arg2;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)arg1 numberOfSuggestion:(unsigned long long)arg2;
- (id)seedSuggestionsForChatGuidsAndEmails:(id)arg1;

@end
