//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface MFLibrarySearchableIndexQueryContext : NSObject
{
    NSMutableArray *_mutableFetchAttributes;
    NSMutableArray *_mutableProtectionClasses;
    NSMutableArray *_mutableRankingQueries;
}

@property (copy, nonatomic) NSArray *fetchAttributes;
@property (strong, nonatomic) NSMutableArray *mutableFetchAttributes; // @synthesize mutableFetchAttributes=_mutableFetchAttributes;
@property (strong, nonatomic) NSMutableArray *mutableProtectionClasses; // @synthesize mutableProtectionClasses=_mutableProtectionClasses;
@property (strong, nonatomic) NSMutableArray *mutableRankingQueries; // @synthesize mutableRankingQueries=_mutableRankingQueries;
@property (copy, nonatomic) NSArray *protectionClasses;
@property (copy, nonatomic) NSArray *rankingQueries;

- (void)addFetchAttribute:(id)arg1;
- (void)addProtectionClass:(id)arg1;
- (void)addRankingQuery:(id)arg1;
- (void)dealloc;

@end
