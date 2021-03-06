//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <PhotosUICore/PXSearchResultThumbnailCell-Protocol.h>

@class NSString, UIImageView;

@interface PXSearchResultAssetCell : UICollectionViewCell <PXSearchResultThumbnailCell>
{
    UIImageView *_thumbnailImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setThumbnailImage:(id)arg1;
- (struct CGSize)thumbnailImageViewPixelSize;

@end

