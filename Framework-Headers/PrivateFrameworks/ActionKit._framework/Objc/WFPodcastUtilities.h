//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFPodcastUtilities : NSObject
{
}

+ (void *)createLocalPlayerPath;
+ (struct _MRSystemAppPlaybackQueue *)createPlaybackQueueWithURLs:(id)arg1 setImmediatePlayback:(BOOL)arg2;
+ (void *)createPlayerPathForOrigin:(void *)arg1;
+ (void)createPreferredPlayerPathWithCompletion:(CDUnknownBlockType)arg1;
+ (id)generatePlaybackQueueURL:(id)arg1 withQueryDictionary:(id)arg2;
+ (void)getPodcastsFromLibraryFetchingDetailsFromServer:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

