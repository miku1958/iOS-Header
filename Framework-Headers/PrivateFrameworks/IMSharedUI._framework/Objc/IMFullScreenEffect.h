//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMMessagePartChatItem, NSArray, NSString, NSURL, UIColor;
@protocol IMFullScreenEffectDelegate;

@interface IMFullScreenEffect : NSObject
{
    BOOL _triggeredByResponseKit;
    BOOL _soundEffectHasHapticTrack;
    NSString *_identifier;
    IMMessagePartChatItem *_triggeringChatItem;
    id<IMFullScreenEffectDelegate> _delegate;
    NSArray *_messageFilters;
    NSURL *_soundEffectFileURL;
}

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (weak, nonatomic) id<IMFullScreenEffectDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL effectIsDark;
@property (readonly, nonatomic) Class effectViewClass;
@property (readonly, nonatomic, getter=isForegroundEffect) BOOL foregroundEffect;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) unsigned long long layerCount;
@property (readonly, nonatomic) NSArray *messageFilters; // @synthesize messageFilters=_messageFilters;
@property (readonly, nonatomic) BOOL shouldDrawOverNavigationBar;
@property (readonly, nonatomic) NSURL *soundEffectFileURL; // @synthesize soundEffectFileURL=_soundEffectFileURL;
@property (readonly, nonatomic) BOOL soundEffectHasHapticTrack; // @synthesize soundEffectHasHapticTrack=_soundEffectHasHapticTrack;
@property (nonatomic) BOOL triggeredByResponseKit; // @synthesize triggeredByResponseKit=_triggeredByResponseKit;
@property (copy, nonatomic) IMMessagePartChatItem *triggeringChatItem; // @synthesize triggeringChatItem=_triggeringChatItem;

+ (id)_monochromeDimmingFilterWithType:(long long)arg1;
+ (id)bigEmojiFilter;
+ (id)stickerFilter;
+ (id)tapBackFilter;
- (void).cxx_destruct;
- (void)_didPrepareSoundEffect;
- (void)applyMessageFiltersToCells:(id)arg1;
- (void)applyMessageFiltersToTriggeringCell:(id)arg1;
- (void)clearMessageFiltersFromCells:(id)arg1;
- (void)playSoundEffect;
- (void)prepareSoundEffect;
- (void)stopSoundEffect;

@end

