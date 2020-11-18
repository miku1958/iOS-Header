//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsTilingLayout.h>

@class PXLayoutSnapshot;
@protocol PXEngineDrivenAssetsTilingLayoutDelegate;

@interface PXEngineDrivenAssetsTilingLayout : PXAssetsTilingLayout
{
    struct _needsUpdateFlags;
    struct {
        BOOL respondsToEngineDrivenLayoutReferenceSizeDidChange;
        BOOL respondsToEngineDrivenLayoutAspectRatioForItemAtIndexPath;
        BOOL respondsToEngineDrivenLayoutZPositionForItemAtIndexPath;
        BOOL respondsToEngineDrivenLayoutContentsRectForItemAtIndexPathForAspectRatio;
        BOOL respondsToEngineDrivenLayoutPlayButtonSizeForItemAtIndexPathForAspectRatio;
    } _delegateFlags;
    id<PXEngineDrivenAssetsTilingLayoutDelegate> _delegate;
    PXLayoutSnapshot *_layoutSnapshot;
    long long _contentMode;
}

@property (nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property (weak, nonatomic) id<PXEngineDrivenAssetsTilingLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) PXLayoutSnapshot *layoutSnapshot; // @synthesize layoutSnapshot=_layoutSnapshot;

- (void).cxx_destruct;
- (double)_aspectRatioForItemAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_commonInit;
- (struct CGRect)_contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 forAspectRatio:(double)arg2;
- (BOOL)_needsUpdate;
- (void)_updateIfNeeded;
- (double)_zPositionForItemAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)adjustGeometry:(struct PXTileGeometry *)arg1 forAdditionalTileWithKind:(unsigned long long)arg2 indexPath:(struct PXSimpleIndexPath)arg3;
- (void)adjustGeometry:(struct PXTileGeometry *)arg1 forContentTileWithIndexPath:(struct PXSimpleIndexPath)arg2;
- (struct CGRect)contentBounds;
- (id)dataSource;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)getAdditionalTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2 layoutGeometryKind:(unsigned long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (BOOL)getGeometry:(struct PXTileGeometry *)arg1 group:(unsigned long long *)arg2 userData:(id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (id)initWithDataSource:(id)arg1;
- (id)initWithLayoutEngineSnapshot:(id)arg1;
- (struct CGSize)playButtonSizeForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 contentTileSize:(struct CGSize)arg2;
- (void)setReferenceSize:(struct CGSize)arg1;

@end

