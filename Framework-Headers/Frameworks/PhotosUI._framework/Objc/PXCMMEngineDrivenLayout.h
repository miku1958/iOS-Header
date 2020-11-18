//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXEngineDrivenAssetsTilingLayout.h>

@class PXBasicTileUserData, PXCMMAssetStatusBadgeTileUserData;
@protocol PXCMMEngineDrivenLayoutDelegate;

@interface PXCMMEngineDrivenLayout : PXEngineDrivenAssetsTilingLayout
{
    PXBasicTileUserData *_placeholderTileUserData;
    BOOL _hasFloatingBanner;
    BOOL _hasFloatingSectionHeaders;
    BOOL _headerViewIsVisible;
    long long _layoutType;
    double _headerHeight;
    double _bannerHeight;
    double _statusFooterHeight;
    double _sendBackFooterHeight;
    long long _placeholderMode;
    double _headerTopInset;
    double _footerBottomInset;
    double _headerFooterSideInset;
    PXCMMAssetStatusBadgeTileUserData *__copiedUserData;
    PXCMMAssetStatusBadgeTileUserData *__failedUserData;
    struct UIEdgeInsets _reviewSafeAreaInsets;
}

@property (readonly, nonatomic) PXCMMAssetStatusBadgeTileUserData *_copiedUserData; // @synthesize _copiedUserData=__copiedUserData;
@property (readonly, nonatomic) PXCMMAssetStatusBadgeTileUserData *_failedUserData; // @synthesize _failedUserData=__failedUserData;
@property (readonly, nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property (weak, nonatomic) id<PXCMMEngineDrivenLayoutDelegate> delegate; // @dynamic delegate;
@property (nonatomic) double footerBottomInset; // @synthesize footerBottomInset=_footerBottomInset;
@property (nonatomic) BOOL hasFloatingBanner; // @synthesize hasFloatingBanner=_hasFloatingBanner;
@property (nonatomic) BOOL hasFloatingSectionHeaders; // @synthesize hasFloatingSectionHeaders=_hasFloatingSectionHeaders;
@property (nonatomic) double headerFooterSideInset; // @synthesize headerFooterSideInset=_headerFooterSideInset;
@property (readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property (nonatomic) double headerTopInset; // @synthesize headerTopInset=_headerTopInset;
@property (nonatomic) BOOL headerViewIsVisible; // @synthesize headerViewIsVisible=_headerViewIsVisible;
@property (readonly, nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property (nonatomic) long long placeholderMode; // @synthesize placeholderMode=_placeholderMode;
@property (nonatomic) struct UIEdgeInsets reviewSafeAreaInsets; // @synthesize reviewSafeAreaInsets=_reviewSafeAreaInsets;
@property (readonly, nonatomic) double sendBackFooterHeight; // @synthesize sendBackFooterHeight=_sendBackFooterHeight;
@property (readonly, nonatomic) double statusFooterHeight; // @synthesize statusFooterHeight=_statusFooterHeight;

+ (id)_additionalTileKinds;
- (void).cxx_destruct;
- (struct CGRect)_bannerFrame;
- (struct PXTileIdentifier)_bannerTileIdentifier;
- (unsigned long long)_editorialGeneratorGeometryKindForTileKind:(unsigned long long)arg1;
- (unsigned long long)_generatorGeometryKindForTileKind:(unsigned long long)arg1;
- (BOOL)_getAdditionalTileIdentifierForEditorial:(out struct PXTileIdentifier *)arg1 group:(out unsigned long long *)arg2 layoutGeometryKind:(long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (BOOL)_getAdditionalTileIdentifierForGrid:(out struct PXTileIdentifier *)arg1 group:(out unsigned long long *)arg2 layoutGeometryKind:(long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (BOOL)_getAssetStatusTileIdentifier:(struct PXTileIdentifier *)arg1 outGeometry:(struct PXTileGeometry *)arg2 group:(unsigned long long *)arg3 userData:(id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (BOOL)_getDuplicateTileIdentifier:(struct PXTileIdentifier *)arg1 outGeometry:(struct PXTileGeometry *)arg2 group:(unsigned long long *)arg3 userData:(id *)arg4 forContentTileGeometry:(const struct PXTileGeometry *)arg5 indexPath:(struct PXSimpleIndexPath)arg6;
- (unsigned long long)_gridGeneratorGeometryKindForTileKind:(unsigned long long)arg1;
- (struct CGRect)_headerFrame;
- (struct PXTileIdentifier)_headerTileIdentifier;
- (struct PXTileIdentifier)_identifierForUniqueTileWithKind:(unsigned long long)arg1;
- (void)_invalidateAssetStatusBadgeTiles;
- (void)_invalidateBanner;
- (void)_invalidateHeader;
- (void)_invalidateSectionHeaders;
- (void)_invalidateSendBackFooter;
- (void)_invalidateStatusFooter;
- (struct CGRect)_placeholderFrame;
- (struct CGSize)_placeholderSize;
- (struct PXTileIdentifier)_placeholderTileIdentifier;
- (struct CGSize)_preferredSelectionBadgeSize;
- (struct CGRect)_sectionHeaderTileFrame;
- (struct CGRect)_sendBackFooterFrame;
- (struct PXTileIdentifier)_sendBackFooterTileIdentifier;
- (struct CGRect)_statusFooterFrame;
- (struct PXTileIdentifier)_statusFooterTileIdentifier;
- (void)adjustGeometry:(struct PXTileGeometry *)arg1 forAdditionalTileWithKind:(unsigned long long)arg2 indexPath:(struct PXSimpleIndexPath)arg3;
- (struct CGRect)contentBounds;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)getAdditionalAccessoryTileIdentifier:(out struct PXTileIdentifier *)arg1 outGeometry:(out struct PXTileGeometry *)arg2 group:(out unsigned long long *)arg3 userData:(out id *)arg4 forTileKind:(unsigned long long)arg5 contentTileGeometry:(const struct PXTileGeometry *)arg6 indexPath:(struct PXSimpleIndexPath)arg7;
- (BOOL)getAdditionalTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2 layoutGeometryKind:(unsigned long long)arg3 indexPath:(struct PXSimpleIndexPath)arg4;
- (BOOL)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (id)initWithDataSource:(id)arg1;
- (id)initWithLayoutEngineSnapshot:(id)arg1;
- (id)initWithLayoutEngineSnapshot:(id)arg1 configuration:(id)arg2;
- (BOOL)sendBackBannerViewIsVisible:(struct UIEdgeInsets)arg1;
- (void)setVisibleOrigin:(struct CGPoint)arg1;
- (void)updateAssetStatusBadgeTiles;
- (double)zPositionOffsetForKind:(unsigned long long)arg1;

@end
