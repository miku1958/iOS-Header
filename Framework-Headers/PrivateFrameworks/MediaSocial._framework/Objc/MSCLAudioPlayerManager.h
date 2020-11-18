//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaSocial/MSCLAudioPlayerDelegate-Protocol.h>

@class MSCLAudioPlayer, NSString;
@protocol MSCLAudioPlayerManagerDataSource;

@interface MSCLAudioPlayerManager : NSObject <MSCLAudioPlayerDelegate>
{
    id<MSCLAudioPlayerManagerDataSource> _dataSource;
    MSCLAudioPlayer *_player;
}

@property (weak, nonatomic) id<MSCLAudioPlayerManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_playButtonForPlayer:(id)arg1;
- (void)_showPlaybackStatus:(id)arg1 usingPlayButton:(id)arg2 animated:(BOOL)arg3;
- (void)audioPlayer:(id)arg1 didChangeStatus:(id)arg2;
- (void)audioPlayer:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;
- (void)personalizePlayButton:(id)arg1 withRepresentedObject:(id)arg2 animated:(BOOL)arg3;
- (void)playAsset:(id)arg1 withRepresentedObject:(id)arg2;
- (void)stopPlayback;

@end
