//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ImageCapture/ICCameraItem.h>

@class NSMutableDictionary, NSString;

@interface ICCameraFile : ICCameraItem
{
    void *_fileProperties;
}

@property (readonly) BOOL burstFavorite;
@property (readonly) BOOL burstPicked;
@property (readonly) NSString *burstUUID;
@property BOOL fetchingMetadata;
@property BOOL fetchingThumbnail;
@property long long fileSize;
@property (readonly) BOOL hasOverriddenOrientation;
@property (readonly) BOOL highFramerate;
@property (strong) NSMutableDictionary *metadata_hidden;
@property unsigned long long orientation;
@property (getter=isRaw) BOOL raw;
@property (readonly) BOOL timeLapse;

- (void)dealloc;
- (id)description;
- (double)duration;
- (void)finalize;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (id)handleCommandCompletionNotification:(id)arg1;
- (BOOL)hasMetadata;
- (BOOL)hasThumbnail;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3;
- (id)metadata;
- (void)overrideOrientation:(unsigned long long)arg1;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)setHasMetadata:(BOOL)arg1;
- (void)setHasThumbnail:(BOOL)arg1;
- (void)setKeywordPropertiesFromMetadata;
- (struct CGImage *)thumbnail;

@end
