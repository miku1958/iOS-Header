//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AVPlayerItem, NSString, NSURL;

@protocol MFPlayerItem

@property (nonatomic, readonly) AVPlayerItem *avPlayerItem;
@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL hasLoadableAsset;
@property (nonatomic, readonly) BOOL isAssetLoaded;
@property (nonatomic, readonly) BOOL isFullyDownloaded;
@property (nonatomic) BOOL isVideoContent;
@property (nonatomic, readonly) BOOL prefersSeekOverSkip;
@property (nonatomic) long long repeatIndex;
@property (nonatomic, readonly) double time;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;

@end

