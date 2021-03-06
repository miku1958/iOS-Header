//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetTile-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class ISLivePhotoPlayer, ISLivePhotoUIView, ISPlayerItem, NSString, PXImageRequester, UIView;

@interface PXAssetLivePhotoUIViewTile : NSObject <PXReusableObject, PXAssetTile, PXUIViewBasicTile>
{
    unsigned long long _requestCount;
    long long _livePhotoRequestID;
    ISLivePhotoUIView *_livePhotoView;
    ISLivePhotoPlayer *_livePhotoPlayer;
    PXImageRequester *_imageRequester;
    double _cornerRadius;
    ISPlayerItem *__playerItem;
}

@property (strong, nonatomic, setter=_setPlayerItem:) ISPlayerItem *_playerItem; // @synthesize _playerItem=__playerItem;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_handleLivePhotoResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3 expectedRequestID:(long long)arg4;
- (void)_requestLivePhotoIfNeeded;
- (struct CGSize)_targetSize;
- (void)_updateLivePhotoView;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;

@end

