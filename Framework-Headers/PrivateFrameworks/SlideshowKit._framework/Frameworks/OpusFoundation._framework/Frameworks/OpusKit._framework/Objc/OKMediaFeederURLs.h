//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKMediaFeeder.h>

@class NSArray;

@interface OKMediaFeederURLs : OKMediaFeeder
{
    NSArray *_mediaURLs;
}

+ (BOOL)isRemote;
+ (id)mediaFeederWithMediaObjects:(id)arg1;
+ (id)mediaFeederWithMediaURLs:(id)arg1;
+ (BOOL)supportLiveUpdates;
+ (id)supportedSettings;
- (BOOL)canBePersisted;
- (void)dealloc;
- (id)feederSettings;
- (id)indexesForMediaObjects:(id)arg1;
- (id)init;
- (id)initWithMediaObjects:(id)arg1;
- (id)initWithMediaURLs:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)mediaObjectURLsAtIndexes:(id)arg1;
- (id)mediaObjectsAtIndexes:(id)arg1;
- (unsigned long long)numberOfMediaObjects;
- (id)reloadMediaObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

