//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUI/PKHeroImageView-Protocol.h>

@class NSString, UIImageView;

@interface PKWatchHeroImageView : UIView <PKHeroImageView>
{
    UIImageView *_watchView;
    UIImageView *_bridgeWallpaperImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCompactWatch;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bridgeHeroImage;
- (id)_bridgeWallpaperImage;
- (struct CGSize)_heroBackgroundImageSize;
- (struct CGSize)_heroWatchImageSize;
- (id)_resizeImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)_watchDeviceImage;
- (struct CGSize)imageSize;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

