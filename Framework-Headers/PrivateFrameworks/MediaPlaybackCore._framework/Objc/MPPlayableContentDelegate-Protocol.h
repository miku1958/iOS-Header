//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPPlayableContentManager, MPPlayableContentManagerContext, NSArray, NSIndexPath;

@protocol MPPlayableContentDelegate <NSObject>

@optional
- (void)playableContentManager:(MPPlayableContentManager *)arg1 didUpdateContext:(MPPlayableContentManagerContext *)arg2;
- (void)playableContentManager:(MPPlayableContentManager *)arg1 initializePlaybackQueueWithCompletionHandler:(void (^)(NSError *))arg2;
- (void)playableContentManager:(MPPlayableContentManager *)arg1 initializePlaybackQueueWithContentItems:(NSArray *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)playableContentManager:(MPPlayableContentManager *)arg1 initiatePlaybackOfContentItemAtIndexPath:(NSIndexPath *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

