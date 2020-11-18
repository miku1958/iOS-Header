//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface PXLoadingFailureBadgeView : UIImageView
{
    struct {
        BOOL image;
        BOOL sizeClass;
    } _needsUpdateFlags;
    long long __sizeClass;
}

@property (nonatomic, setter=_setSizeClass:) long long _sizeClass; // @synthesize _sizeClass=__sizeClass;

+ (id)_imageForSizeClass:(long long)arg1;
+ (struct CGSize)_imageSizeForSizeClass:(long long)arg1;
- (void)_invalidateImage;
- (void)_invalidateSizeClass;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)_updateImageIfNeeded;
- (void)_updateSizeClassIfNeeded;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)sizeToFit;

@end

