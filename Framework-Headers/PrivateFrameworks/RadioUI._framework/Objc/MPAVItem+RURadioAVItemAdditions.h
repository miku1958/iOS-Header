//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAVItem.h>

@class NSString, RadioTrack;

@interface MPAVItem (RURadioAVItemAdditions)

@property (readonly, copy, nonatomic) NSString *albumBuyButtonText;
@property (readonly, nonatomic) long long albumBuyButtonType;
@property (readonly, nonatomic) BOOL isRadioItem;
@property (readonly, nonatomic) RadioTrack *radioTrack;
@property (readonly, nonatomic) BOOL supportsRadioTrackActions;

- (id)_plistKeyForMPMediaItemProperty:(id)arg1;
- (void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@end

