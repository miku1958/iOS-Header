//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKMediaFeeder.h>

@class NSArray, NSURL;

@interface OKMediaFeederFileSystem : OKMediaFeeder
{
    NSURL *_directoryURL;
    NSArray *_mediaURLs;
}

@property (strong) NSArray *mediaURLs; // @synthesize mediaURLs=_mediaURLs;

+ (BOOL)isRemote;
+ (id)mediaFeederWithDirectoryURL:(id)arg1;
+ (BOOL)supportLiveUpdates;
+ (id)supportedSettings;
- (BOOL)canBePersisted;
- (void)dealloc;
- (id)feederSettings;
- (id)indexesForMediaObjects:(id)arg1;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)mediaObjectURLsAtIndexes:(id)arg1;
- (id)mediaObjectsAtIndexes:(id)arg1;
- (unsigned long long)numberOfMediaObjects;
- (id)reloadMediaObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

