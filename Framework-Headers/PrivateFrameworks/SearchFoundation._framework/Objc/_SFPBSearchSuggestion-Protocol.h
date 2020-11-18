//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat, _SFPBSearchSuggestion;

@protocol _SFPBSearchSuggestion <NSObject>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSArray *duplicateSuggestions;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL previouslyEngaged;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property (strong, nonatomic) _SFPBGraphicalFloat *score;
@property (copy, nonatomic) NSDictionary *serverFeatures;
@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *utteranceText;

- (void)addDuplicateSuggestions:(_SFPBSearchSuggestion *)arg1;
- (void)clearDuplicateSuggestions;
- (_SFPBSearchSuggestion *)duplicateSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateSuggestionsCount;
- (BOOL)getServerFeatures:(double *)arg1 forKey:(NSString *)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (void)setServerFeatures:(double)arg1 forKey:(NSString *)arg2;
@end
