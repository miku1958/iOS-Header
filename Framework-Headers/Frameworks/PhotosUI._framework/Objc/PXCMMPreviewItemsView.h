//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/UICollectionViewDataSource-Protocol.h>

@class NSArray, NSMutableArray, NSString, PXCMMPreviewItemMediaProvider, UICollectionView, UIColor;

@interface PXCMMPreviewItemsView : UIView <UICollectionViewDataSource>
{
    NSMutableArray *_previewImages;
    UICollectionView *_collectionView;
    NSArray *_previewItems;
    PXCMMPreviewItemMediaProvider *_mediaProvider;
    BOOL _needToLoadImages;
    unsigned long long _imageRequestGeneration;
    UIColor *_cellBorderColor;
    double _cellBorderWidth;
}

@property (copy, nonatomic) UIColor *cellBorderColor; // @synthesize cellBorderColor=_cellBorderColor;
@property (nonatomic) double cellBorderWidth; // @synthesize cellBorderWidth=_cellBorderWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;
- (void).cxx_destruct;
- (BOOL)_canLoadImages;
- (void)_loadImages;
- (void)_loadImagesIfNeeded;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)_setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2 imageRequestGeneration:(unsigned long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setPreviewItems:(id)arg1 mediaProvider:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

