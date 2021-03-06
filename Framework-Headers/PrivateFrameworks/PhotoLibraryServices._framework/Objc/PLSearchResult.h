//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PSIGroupResult;

@interface PLSearchResult : NSObject
{
    PSIGroupResult *_groupResult;
}

@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) unsigned long long categoryMask;
@property (readonly, nonatomic) NSArray *contentStrings;
@property (readonly, nonatomic) NSString *groupDescription;
@property (readonly, nonatomic) PSIGroupResult *groupResult; // @synthesize groupResult=_groupResult;
@property (readonly, nonatomic) NSString *keyAssetUUID;
@property (readonly, nonatomic) NSArray *lookupIdentifiers;
@property (readonly, nonatomic) NSArray *matchRanges;
@property (readonly) NSString *owningContentString;
@property (readonly, nonatomic) NSArray *searchTokens;
@property (readonly, nonatomic) NSString *transientToken;
@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (long long)categoryAtIndex:(long long)arg1;
- (unsigned long long)groupCount;
- (id)initWithGroupResult:(id)arg1;
- (BOOL)isContentStringTextSearchableAtIndex:(long long)arg1;
- (BOOL)isImplicitlyTokenized;
- (BOOL)isMatchedByIdentifierAtIndex:(long long)arg1;
- (id)matchRangesAtIndex:(long long)arg1;
- (id)tokensAtIndex:(long long)arg1;

@end

