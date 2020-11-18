//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, _PASTuple2;

@interface PSGStructuredInfoSuggestionCache : NSObject
{
    _PASTuple2 *_cachedSuggestions;
    NSString *_localeIdentifier;
    NSDate *_startTime;
    double _ttlSeconds;
}

+ (BOOL)_matchesPredictedValue:(id)arg1 prefixValue:(id)arg2;
+ (id)emptySuggestionsPlaceholder;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_isCacheEmpty;
- (BOOL)_maybeClearCache;
- (void)addEmptyPlaceholderForTrigger:(id)arg1 localeIdentifier:(id)arg2;
- (void)addStructuredInfoSuggestions:(id)arg1 localeIdentifier:(id)arg2;
- (id)initWithTTLSeconds:(double)arg1;
- (void)invalidate;
- (id)searchWithContext:(id)arg1 localeIdentifier:(id)arg2 maxSuggestions:(unsigned long long)arg3;
- (id)searchWithTrigger:(id)arg1 localeIdentifier:(id)arg2 maxSuggestions:(unsigned long long)arg3;

@end
