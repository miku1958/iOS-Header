//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

__attribute__((visibility("hidden")))
@interface PUSearchHistoryManager : NSObject
{
    NSOrderedSet *_recentSearches;
}

@property (strong, nonatomic) NSOrderedSet *recentSearches; // @synthesize recentSearches=_recentSearches;

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)clearRecentSearches;
- (void)saveRecentSearch:(id)arg1;

@end

