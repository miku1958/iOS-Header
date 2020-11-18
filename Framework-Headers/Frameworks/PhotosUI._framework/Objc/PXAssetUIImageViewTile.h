//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetTile-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIImageViewBasicTile-Protocol.h>

@class NSString, PXFocusableUIImageView, PXImageRequester, UIColor, UIImage, UIView;

@interface PXAssetUIImageViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIImageViewBasicTile>
{
    PXFocusableUIImageView *_imageView;
    UIView *_contentView;
    BOOL _hasPlaceholder;
    BOOL _shouldAllowFocus;
    PXImageRequester *_imageRequester;
    UIColor *_placeholderColor;
    UIImage *_placeholderImage;
    struct CGSize __contentSize;
    struct CGRect __desiredContentsRect;
}

@property (nonatomic, setter=_setContentSize:) struct CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property (nonatomic, setter=_setDesiredContentsRect:) struct CGRect _desiredContentsRect; // @synthesize _desiredContentsRect=__desiredContentsRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImage *image;
@property (strong, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property (strong, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property (strong, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property (nonatomic) BOOL shouldAllowFocus; // @synthesize shouldAllowFocus=_shouldAllowFocus;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_updateContentView;
- (void)_updateImageRequester;
- (void)_updateImageView;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)imageDidChange;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)prepareForReuse;

@end

