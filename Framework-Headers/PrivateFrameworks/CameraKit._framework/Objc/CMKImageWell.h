//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableArray, NSString, UIImageView, UIView;

@interface CMKImageWell : UIButton
{
    long long _cameraOrientation;
    UIView *__containerView;
    UIImageView *__thumbnailImageView;
    UIImageView *__maskImageView;
    NSMutableArray *__dimmingViewQueue;
    NSString *__uuid;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property (readonly, nonatomic) NSMutableArray *_dimmingViewQueue; // @synthesize _dimmingViewQueue=__dimmingViewQueue;
@property (readonly, nonatomic) UIImageView *_maskImageView; // @synthesize _maskImageView=__maskImageView;
@property (readonly, nonatomic) UIImageView *_thumbnailImageView; // @synthesize _thumbnailImageView=__thumbnailImageView;
@property (strong, nonatomic, setter=_setUuid:) NSString *_uuid; // @synthesize _uuid=__uuid;
@property (nonatomic) long long cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;

- (void).cxx_destruct;
- (struct CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1;
- (void)_commonCMKImageWellInitialization;
- (id)_maskImage;
- (void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_removeFirstDimmingView;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)prepareForThumbnailUpdateFromCapture;
- (void)recoverFromFailedThumbnailUpdate;
- (void)setCameraOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setThumbnailImage:(id)arg1 animated:(BOOL)arg2;
- (void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(BOOL)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

