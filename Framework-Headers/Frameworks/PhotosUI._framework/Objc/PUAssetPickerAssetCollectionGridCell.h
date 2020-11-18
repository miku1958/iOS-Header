//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUI/PUAssetPickerAsyncCountCell-Protocol.h>
#import <PhotosUI/PUAssetPickerAsyncImageCell-Protocol.h>

@class NSString, NSUUID, PXUIOverlayBadgesView, UIImageView, UILabel, UIStackView, UIView;

__attribute__((visibility("hidden")))
@interface PUAssetPickerAssetCollectionGridCell : UICollectionViewCell <PUAssetPickerAsyncImageCell, PUAssetPickerAsyncCountCell>
{
    int _imageRequestID;
    NSUUID *_asyncRequestID;
    UIImageView *_imageView;
    UILabel *_countLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    PXUIOverlayBadgesView *_badgesView;
    UIView *_highlightView;
    UIView *_badgesBackgroundView;
    UIStackView *_stackView;
}

@property (strong, nonatomic) NSUUID *asyncRequestID; // @synthesize asyncRequestID=_asyncRequestID;
@property (readonly, nonatomic) UIView *badgesBackgroundView; // @synthesize badgesBackgroundView=_badgesBackgroundView;
@property (readonly, nonatomic) PXUIOverlayBadgesView *badgesView; // @synthesize badgesView=_badgesView;
@property (readonly, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property (nonatomic) int imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property (readonly, nonatomic) struct CGSize imageRequestSize;
@property (readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property (readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)identifier;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;

@end
