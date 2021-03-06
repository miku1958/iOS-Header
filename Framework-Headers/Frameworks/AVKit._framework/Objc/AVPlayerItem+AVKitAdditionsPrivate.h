//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayerItem.h>

@class AVEditBehaviorContext, AVMusicAppBehaviorContext, NSString;

@interface AVPlayerItem (AVKitAdditionsPrivate)

@property (readonly, nonatomic) NSString *avkitACMIdentifier;
@property (readonly, weak, nonatomic) AVEditBehaviorContext *avkit_currentEditBehaviorContext;
@property (readonly, weak, nonatomic) AVMusicAppBehaviorContext *avkit_musicAppBehaviorContext;

- (void)avkit_airMessageSendExternalMetadata;
- (void)avkit_airMessageSendToAppleTV;
- (id)avkit_data;
- (id)avkit_dataOrNil;
- (void)avkit_setCurrentEditBehaviorContext:(id)arg1;
- (void)avkit_setMusicBehaviorData:(id)arg1;
- (void)avkit_setValue:(id)arg1 forAVKitProperty:(id)arg2;
- (id)avkit_valueForAVKitProperty:(id)arg1;
- (id)externalMetadata;
- (void)setExternalMetadata:(id)arg1;
@end

