//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MPMediaItemArtwork, NSString;
@protocol OS_dispatch_queue;

@interface MPContentItem : NSObject
{
    void *_mediaRemoteDeltaContentItem;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _hasChanges;
    void *_mediaRemoteContentItem;
    MPMediaItemArtwork *_artwork;
}

@property (readonly, nonatomic) void *_mediaRemoteContentItem; // @synthesize _mediaRemoteContentItem;
@property (strong, nonatomic) MPMediaItemArtwork *artwork; // @synthesize artwork=_artwork;
@property (nonatomic, getter=isContainer) BOOL container;
@property (nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isPlayable) BOOL playable;
@property (nonatomic) float playbackProgress;
@property (nonatomic, getter=isStreamingContent) BOOL streamingContent;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;

+ (BOOL)isSuppressingChangeNotifications;
+ (void)performSuppressingChangeNotifications:(CDUnknownBlockType)arg1;
+ (BOOL)shouldPushArtworkData;
- (void).cxx_destruct;
- (void)_applyDeferredNotification;
- (id)_changeDictionary;
- (id)_initWithMediaRemoteContentItem:(void *)arg1;
- (void)_loadArtwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postItemChangedNotificationWithDeltaBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end

