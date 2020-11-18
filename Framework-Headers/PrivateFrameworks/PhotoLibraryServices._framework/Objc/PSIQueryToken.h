//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSMutableSet, NSString, PSIWordEmbeddingMatch;

@interface PSIQueryToken : NSObject <NSSecureCoding>
{
    BOOL _userControlledCategoriesUseWildcard;
    BOOL _usesWordEmbeddings;
    BOOL _isFullTextToken;
    BOOL _belongsToSearchText;
    NSString *_text;
    NSString *_identifier;
    NSIndexSet *_searchedCategories;
    unsigned long long _userCategory;
    unsigned long long _matchType;
    PSIQueryToken *_parentToken;
    NSString *_resolvedText;
    PSIWordEmbeddingMatch *_wordEmbeddingMatch;
    NSMutableSet *_assetIds;
    NSMutableSet *_collectionIds;
    NSMutableSet *_tripIds;
    struct _NSRange _rangeInSearchText;
}

@property (readonly, nonatomic) unsigned long long assetCount;
@property (strong, nonatomic) NSMutableSet *assetIds; // @synthesize assetIds=_assetIds;
@property (nonatomic) BOOL belongsToSearchText; // @synthesize belongsToSearchText=_belongsToSearchText;
@property (readonly, nonatomic) unsigned long long collectionCount;
@property (strong, nonatomic) NSMutableSet *collectionIds; // @synthesize collectionIds=_collectionIds;
@property (readonly, nonatomic) BOOL containsMarker;
@property (readonly, copy, nonatomic) NSString *groupMatchingText;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isFullTextToken; // @synthesize isFullTextToken=_isFullTextToken;
@property (readonly, nonatomic) BOOL isTextSearchable;
@property (readonly, nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property (strong, nonatomic) PSIQueryToken *parentToken; // @synthesize parentToken=_parentToken;
@property (nonatomic) struct _NSRange rangeInSearchText; // @synthesize rangeInSearchText=_rangeInSearchText;
@property (copy, nonatomic) NSString *resolvedText; // @synthesize resolvedText=_resolvedText;
@property (readonly, nonatomic) unsigned long long resultCount;
@property (copy, nonatomic) NSIndexSet *searchedCategories; // @synthesize searchedCategories=_searchedCategories;
@property (readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (readonly, nonatomic) unsigned long long tripCount;
@property (strong, nonatomic) NSMutableSet *tripIds; // @synthesize tripIds=_tripIds;
@property (nonatomic) unsigned long long userCategory; // @synthesize userCategory=_userCategory;
@property (nonatomic) BOOL userControlledCategoriesUseWildcard; // @synthesize userControlledCategoriesUseWildcard=_userControlledCategoriesUseWildcard;
@property (nonatomic) BOOL usesWordEmbeddings; // @synthesize usesWordEmbeddings=_usesWordEmbeddings;
@property (readonly, copy, nonatomic) NSString *wildcardResolvedText;
@property (strong, nonatomic) PSIWordEmbeddingMatch *wordEmbeddingMatch; // @synthesize wordEmbeddingMatch=_wordEmbeddingMatch;

+ (id)personQueryTokensFromSocialGroupQueryToken:(id)arg1;
+ (id)stringForMatchType:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3;
- (id)initWithText:(id)arg1 resolvedText:(id)arg2 identifier:(id)arg3 userCategory:(unsigned long long)arg4 searchedCategories:(id)arg5 matchType:(unsigned long long)arg6;
- (id)initWithText:(id)arg1 resolvedText:(id)arg2 userCategory:(unsigned long long)arg3 matchType:(unsigned long long)arg4;
- (id)initWithText:(id)arg1 resolvedText:(id)arg2 userCategory:(unsigned long long)arg3 searchedCategories:(id)arg4 matchType:(unsigned long long)arg5;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 matchType:(unsigned long long)arg3;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3 matchType:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)replaceIdentifier:(id)arg1;
- (id)tokenByWordEmbeddingWithMatch:(id)arg1;

@end

