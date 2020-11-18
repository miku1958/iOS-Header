//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVPlayerItem, MPAVItem, NSURL;

@interface MPMovie : NSObject
{
    MPAVItem *_item;
    NSURL *_url;
    long long _movieSourceType;
    double _startPlaybackTime;
    double _endPlaybackTime;
    BOOL _explicitlySetMovieSourceType;
    BOOL _movieIsUnplayable;
    double _lastKnownDuration;
    struct CGSize _lastKnownNaturalSize;
    long long _lastKnownType;
}

@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double endPlaybackTime;
@property (readonly, nonatomic) unsigned long long movieMediaTypes;
@property (nonatomic) long long movieSourceType;
@property (readonly, nonatomic) struct CGSize naturalSize;
@property (readonly, nonatomic) double playableDuration;
@property (readonly, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) double startPlaybackTime;
@property (readonly, nonatomic) NSURL *url;

+ (id)movieWithAsset:(id)arg1 error:(id *)arg2;
+ (id)movieWithPlayerItem:(id)arg1 error:(id *)arg2;
+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (id)_MPArrayQueueItem;
- (void)_determineMediaType;
- (void)_durationAvailableNotification:(id)arg1;
- (id)_initWithAsset:(id)arg1 error:(id *)arg2;
- (id)_initWithPlayerItem:(id)arg1 error:(id *)arg2;
- (id)_initWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_sharedInit;
- (void)_typeAvailableNotification:(id)arg1;
- (void)dealloc;

@end
