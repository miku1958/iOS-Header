//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaFoundation/MFAudioSessionControlling-Protocol.h>
#import <MediaFoundation/MFPlaybackInformationProviding-Protocol.h>
#import <MediaFoundation/MFResettable-Protocol.h>
#import <MediaFoundation/MFStateDumpable-Protocol.h>

@class NSString;
@protocol MFPlaybackStackControllerDelegate, MFQueuePlayerItem;

@protocol MFPlaybackStackController <MFPlaybackInformationProviding, MFAudioSessionControlling, MFStateDumpable, MFResettable>

@property (nonatomic, weak) id<MFPlaybackStackControllerDelegate> delegate;
@property (nonatomic) long long maximumPlayerQueueLength;

- (void)beginScanningWithDirection:(long long)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)beginSeekingWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)endScanningWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)endSeekingWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)jumpTo:(double)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)pauseWithFadeOut:(double)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)pauseWithIdentifier:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)playWithRate:(float)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)seekTo:(double)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)setQueueWithInitialItem:(id<MFQueuePlayerItem>)arg1 andPlay:(BOOL)arg2 identifier:(NSString *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)setRate:(float)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (BOOL)shouldSkipJumpToItemStart:(long long)arg1;
- (void)skipWithDirection:(long long)arg1 identifier:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
@end
