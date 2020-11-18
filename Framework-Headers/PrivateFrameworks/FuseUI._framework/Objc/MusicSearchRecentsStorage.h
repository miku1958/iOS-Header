//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL;

@interface MusicSearchRecentsStorage : NSObject
{
    long long _limit;
    NSURL *_persistenceURL;
    NSMutableArray *_recents;
    BOOL _hasChanges;
    long long _maximumNumberOfRecents;
}

@property (readonly) long long maximumNumberOfRecents; // @synthesize maximumNumberOfRecents=_maximumNumberOfRecents;

+ (id)sharedRecentsStorage;
- (void).cxx_destruct;
- (void)_addRecent:(id)arg1 replacingRecent:(id)arg2;
- (void)addRecent:(id)arg1;
- (void)clear;
- (id)initWithLimit:(long long)arg1 persistenceURL:(id)arg2;
- (void)load;
- (id)recentSearches;
- (void)replaceRecent:(id)arg1 withRecent:(id)arg2;
- (void)save;

@end
