//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLooper, AVQueuePlayer, NSArray, UIImage, UIImageView;
@protocol NSObject;

@interface HKVideoPlayerView : UIView
{
    BOOL _looping;
    BOOL _shouldBePlaying;
    NSArray *_items;
    UIImage *_thumbnail;
    UIImageView *_thumbnailImageView;
    AVQueuePlayer *_queuePlayer;
    AVPlayerLooper *_playerLooper;
    id<NSObject> _applicationActiveNotificationStub;
    id<NSObject> _applicationInactiveNotificationStub;
}

@property (strong, nonatomic) id<NSObject> applicationActiveNotificationStub; // @synthesize applicationActiveNotificationStub=_applicationActiveNotificationStub;
@property (strong, nonatomic) id<NSObject> applicationInactiveNotificationStub; // @synthesize applicationInactiveNotificationStub=_applicationInactiveNotificationStub;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (nonatomic) BOOL looping; // @synthesize looping=_looping;
@property (strong, nonatomic) AVPlayerLooper *playerLooper; // @synthesize playerLooper=_playerLooper;
@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
@property (strong, nonatomic) AVQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property (nonatomic) BOOL shouldBePlaying; // @synthesize shouldBePlaying=_shouldBePlaying;
@property (strong, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property (strong, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;

+ (Class)layerClass;
+ (id)playerViewWithURL:(id)arg1 looping:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_setUpNotifications;
- (void)_setUpUI;
- (void)dealloc;
- (id)initWithItems:(id)arg1 thumbnail:(id)arg2 looping:(BOOL)arg3;
- (void)pause;
- (void)play;
- (id)player;
- (void)setPlayer:(id)arg1;

@end

