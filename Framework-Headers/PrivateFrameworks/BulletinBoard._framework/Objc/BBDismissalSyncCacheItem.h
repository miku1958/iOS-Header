//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface BBDismissalSyncCacheItem : NSObject
{
    NSMutableArray *_dismissalDictionariesAndFeeds;
    NSMutableDictionary *_dismissalIDToFeeds;
}

@property (readonly, nonatomic) NSMutableArray *dismissalDictionariesAndFeeds; // @synthesize dismissalDictionariesAndFeeds=_dismissalDictionariesAndFeeds;
@property (readonly, nonatomic) NSMutableDictionary *dismissalIDToFeeds; // @synthesize dismissalIDToFeeds=_dismissalIDToFeeds;

- (void).cxx_destruct;
- (void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 forFeeds:(unsigned long long)arg3;
- (id)description;
- (id)findBulletinMatch:(id)arg1;
- (id)init;
- (id)purgeExpired;
- (void)removeBulletinMatch:(id)arg1;

@end

