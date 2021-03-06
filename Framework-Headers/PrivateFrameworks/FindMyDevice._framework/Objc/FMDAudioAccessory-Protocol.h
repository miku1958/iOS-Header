//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class FMDAudioAccessoryInfo, NSArray, NSString, NSURL;
@protocol FMDAsset;

@protocol FMDAudioAccessory <NSObject>

@property (readonly, nonatomic) FMDAudioAccessoryInfo *audioAccessoryInfo;
@property (readonly, nonatomic) NSString *audioRoutingIdentifier;
@property (readonly, nonatomic) unsigned long long audioSafetyStatus;
@property (readonly, nonatomic) NSURL *audioURL;
@property (readonly, nonatomic) BOOL playingSound;

- (BOOL)updateAudioAsset:(id<FMDAsset>)arg1;
- (BOOL)updatePlaybackChannels:(NSArray *)arg1;

@optional
- (BOOL)shouldStopSoundNow;
@end

