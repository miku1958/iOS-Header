//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/WBSRecentWebSearchesController.h>

@class NSString;

@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController
{
    NSString *_pathToLegacySearchesFile;
}

+ (unsigned long long)_maximumNumberOfSearchesToTrack;
- (void).cxx_destruct;
- (void)_migrateLegacyData;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1;
- (void)_removeLegacyRecentSearchesData;
- (void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2;
- (id)initWithPathToLegacySearchesFile:(id)arg1;

@end

