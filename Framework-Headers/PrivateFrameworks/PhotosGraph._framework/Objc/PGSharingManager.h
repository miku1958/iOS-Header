//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PGManager;
@protocol OS_os_log;

@interface PGSharingManager : NSObject
{
    PGManager *_manager;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)_defaultOptions;
- (void).cxx_destruct;
- (BOOL)_canIncludeUnverified;
- (id)_filteredSuggestionResults:(id)arg1 withOptions:(id)arg2 graph:(id)arg3;
- (id)_learningStreamUtilsWithGraph:(id)arg1;
- (void)_mergeSuggestionResultByPersonIdentifer:(id)arg1 withSourceSuggestionResults:(id)arg2;
- (id)_sortedSuggestionResults:(id)arg1 withOptions:(id)arg2;
- (BOOL)canProvideSuggestionsWithOptions:(id)arg1 forGraph:(id)arg2;
- (id)contextualStream;
- (id)coreDuetStream;
- (id)initWithManager:(id)arg1;
- (id)learningStream;
- (id)presenceStream;
- (id)suggestionResultsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3;
- (id)suggestionSourcesForSharingStream:(unsigned long long)arg1;

@end

