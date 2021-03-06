//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Announce/ANAPlaybackSessionServiceInterface-Protocol.h>

@class NSArray, NSString;

@protocol ANLocalPlaybackSessionServiceInterface <ANAPlaybackSessionServiceInterface>
- (void)nextAnnouncementWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)playAnnouncementsWithIDs:(NSArray *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)previousAnnouncementWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)stopPlayingAnnouncementsWithCompletionHandler:(void (^)(NSError *))arg1;
@end

