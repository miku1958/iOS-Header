//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDisplayAssetUIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class AVPlayerItem, ISLivePhotoUIView, NSString;

@interface PXDisplayAssetLivePhotoUIView : PXDisplayAssetUIView <PXChangeObserver>
{
    ISLivePhotoUIView *_livePhotoView;
    long long _requestID;
    AVPlayerItem *_videoPlayerItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;

- (void).cxx_destruct;
- (void)_handlePlayerItemResult:(id)arg1 info:(id)arg2 requestID:(long long)arg3;
- (void)_updateLivePhotoPlayerItem;
- (id)contentView;
- (void)contentsRectDidChange;
- (void)imageDidChange;
- (BOOL)isDisplayingFullQualityContent;
- (void)placeholderImageFiltersDidChange;
- (long long)playbackStyle;
- (void)updateContent;

@end
