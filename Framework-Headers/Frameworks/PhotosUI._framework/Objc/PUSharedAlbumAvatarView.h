//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CAShapeLayer, NSObject, PHAssetCollection, UIGraphicsImageRenderer, UIImage;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PUSharedAlbumAvatarView : UIImageView
{
    BOOL _isRTL;
    BOOL _enabled;
    PHAssetCollection *_sharedAlbumCollection;
    UIGraphicsImageRenderer *_imageRenderer;
    UIImage *_firstAvatar;
    UIImage *_secondAvatar;
    UIImage *_thirdAvatar;
    CAShapeLayer *_overlayLayer;
}

@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) UIImage *firstAvatar; // @synthesize firstAvatar=_firstAvatar;
@property (strong, nonatomic) UIGraphicsImageRenderer *imageRenderer; // @synthesize imageRenderer=_imageRenderer;
@property (readonly) NSObject<OS_os_log> *log;
@property (strong, nonatomic) CAShapeLayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property (strong, nonatomic) UIImage *secondAvatar; // @synthesize secondAvatar=_secondAvatar;
@property (strong, nonatomic) PHAssetCollection *sharedAlbumCollection; // @synthesize sharedAlbumCollection=_sharedAlbumCollection;
@property (strong, nonatomic) UIImage *thirdAvatar; // @synthesize thirdAvatar=_thirdAvatar;

+ (id)sharedSerialQueue;
- (void).cxx_destruct;
- (void)_renderAvatarsForAlbumCollection:(id)arg1;
- (void)_requestPersonPhoto:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_requestSubscriberMonogram:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_resetImages;
- (void)_resetViewContents;
- (void)_resetViewContentsIfNeededForAlbumCollection:(id)arg1;
- (void)_setContentsImage:(id)arg1 withShadowPath:(struct CGPath *)arg2 forAlbumCollection:(id)arg3;
- (void)_setImage:(id)arg1 forIndex:(unsigned long long)arg2;
- (struct CGSize)_sizeForNumberOfAvatars:(unsigned long long)arg1;
- (void)_updateSubscriberAvatars;
- (void)_updateSubscriberAvatarsWithAlbumCollection:(id)arg1;
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;
- (void)embedInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setPersonPhoto:(id)arg1 atIndex:(long long)arg2 albumCollection:(id)arg3;
- (void)setSharedAlbumCollection:(id)arg1 forceLayoutSubscriberAvatars:(BOOL)arg2;

@end

