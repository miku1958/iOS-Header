//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, _PSSuggesterConfiguration;

@interface _PSSuggester : NSObject
{
    NSXPCConnection *_connection;
    struct os_unfair_lock_s _lock;
    _PSSuggesterConfiguration *_configuration;
}

@property (readonly, nonatomic) _PSSuggesterConfiguration *configuration; // @synthesize configuration=_configuration;

+ (id)suggesterWithDaemon;
- (void).cxx_destruct;
- (void)dealloc;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)arg1;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithDaemonUsingConfiguration:(id)arg1;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)arg1;
- (void)provideFeedbackForSuggestions:(id)arg1;
- (id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2;
- (id)rankedGlobalSuggestionsFromContext:(id)arg1 contactsOnly:(BOOL)arg2;
- (id)rankedNameSuggestionsFromContext:(id)arg1 name:(id)arg2;
- (id)rankedZKWSuggestionsFromContext:(id)arg1;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2;
- (id)shareExtensionSuggestionsFromContext:(id)arg1;
- (id)shareSheetInteractionsFromContext:(id)arg1;
- (id)suggestInteractionsFromContext:(id)arg1;

@end
