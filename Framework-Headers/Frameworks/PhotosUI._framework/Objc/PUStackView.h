//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSPointerArray, PUPhotoDecoration, UIColor, UIImage, UIImageView;

@interface PUStackView : UIView
{
    struct CGAffineTransform _transforms[9];
    UIImageView *_combinedPhotoDecorationImageView;
    BOOL _imageHidden[9];
    BOOL _needsDynamicLayout;
    BOOL _combinesPhotoDecorations;
    unsigned long long _style;
    PUPhotoDecoration *_photoDecoration;
    UIColor *_gridBackgroundColor;
    double _gridBackgroundCornerRadius;
    double _gridMargin;
    double _gridItemSpacing;
    long long _numberOfVisibleItems;
    UIImage *_emptyPlaceholderImage;
    long long __numberOfViews;
    NSArray *__photoViews;
    NSPointerArray *__imageSizes;
    NSArray *__photoDecorationVariants;
    UIView *__backgroundView;
    struct CGSize _stackSize;
    struct UIOffset _stackOffset;
    struct UIOffset _stackPerspectiveOffset;
    struct CGPoint _stackPerspectiveFactor;
    struct UIEdgeInsets _stackPerspectiveInsets;
}

@property (strong, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property (readonly, nonatomic) NSPointerArray *_imageSizes; // @synthesize _imageSizes=__imageSizes;
@property (readonly, nonatomic) long long _numberOfViews; // @synthesize _numberOfViews=__numberOfViews;
@property (copy, nonatomic, setter=_setPhotoDecorationVariants:) NSArray *_photoDecorationVariants; // @synthesize _photoDecorationVariants=__photoDecorationVariants;
@property (readonly, nonatomic) NSArray *_photoViews; // @synthesize _photoViews=__photoViews;
@property (nonatomic) BOOL combinesPhotoDecorations; // @synthesize combinesPhotoDecorations=_combinesPhotoDecorations;
@property (strong, nonatomic) UIImage *emptyPlaceholderImage; // @synthesize emptyPlaceholderImage=_emptyPlaceholderImage;
@property (strong, nonatomic) UIColor *gridBackgroundColor; // @synthesize gridBackgroundColor=_gridBackgroundColor;
@property (nonatomic) double gridBackgroundCornerRadius; // @synthesize gridBackgroundCornerRadius=_gridBackgroundCornerRadius;
@property (nonatomic) double gridItemSpacing; // @synthesize gridItemSpacing=_gridItemSpacing;
@property (nonatomic) double gridMargin; // @synthesize gridMargin=_gridMargin;
@property (nonatomic) long long numberOfVisibleItems; // @synthesize numberOfVisibleItems=_numberOfVisibleItems;
@property (strong, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;
@property (readonly, nonatomic) NSArray *stackItemViews;
@property (nonatomic) struct UIOffset stackOffset; // @synthesize stackOffset=_stackOffset;
@property (nonatomic) struct CGPoint stackPerspectiveFactor; // @synthesize stackPerspectiveFactor=_stackPerspectiveFactor;
@property (nonatomic) struct UIEdgeInsets stackPerspectiveInsets; // @synthesize stackPerspectiveInsets=_stackPerspectiveInsets;
@property (nonatomic) struct UIOffset stackPerspectiveOffset; // @synthesize stackPerspectiveOffset=_stackPerspectiveOffset;
@property (nonatomic) struct CGSize stackSize; // @synthesize stackSize=_stackSize;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly, nonatomic) struct CGPoint topLeftCornerOfFrontStackItem;

+ (long long)maximumNumberOfVisibleImagesForStyle:(unsigned long long)arg1;
+ (long long)maximumNumberOfVisibleItemsForStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_combinedPhotoDecorationsImage;
- (void)_getCenter:(struct CGPoint *)arg1 bounds:(struct CGRect *)arg2 forPhotoViewAtIndex:(long long)arg3;
- (struct CGRect)_getStackFrame;
- (void)_rebuildDecorationVariants;
- (void)_setNeedsDynamicLayout;
- (void)_updateBackgroundView;
- (void)_updateDynamicLayout;
- (void)_updateNumberOfViews;
- (void)_updatePhotoViews;
- (void)_updateSubviewsOrdering;
- (struct CGRect)frameOfFrontStackItemRelativeToView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isImageHiddenForItemAtIndex:(long long)arg1;
- (void)layoutSubviews;
- (id)newLayoutAttributesForItemAtIndex:(long long)arg1 relativeToView:(id)arg2;
- (id)newLayoutAttributesForVisbleItemsRelativeToView:(id)arg1 maxCount:(long long)arg2;
- (void)prepareForReuse;
- (void)setAlpha:(double)arg1 forItemAtIndex:(long long)arg2;
- (void)setBadgeType:(long long)arg1 forItemAtIndex:(long long)arg2;
- (void)setBadgeType:(long long)arg1 videoDuration:(double)arg2 forItemAtIndex:(long long)arg3;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageHidden:(BOOL)arg1 forItemAtIndex:(long long)arg2;
- (void)setImageSize:(struct CGSize)arg1 forItemAtIndex:(long long)arg2;
- (BOOL)wouldCoverAllItemsInStackView:(id)arg1;

@end

