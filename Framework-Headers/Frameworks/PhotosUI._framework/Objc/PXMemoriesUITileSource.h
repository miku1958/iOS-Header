//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXTileSource-Protocol.h>
#import <PhotosUICore/PXTilingControllerPreheatHandler-Protocol.h>

@class NSIndexSet, NSMutableSet, NSString, PXFeedDateFormatter, PXPhotoKitUIMediaProvider, PXReusableObjectPool, PXUIScrollViewController;
@protocol PXMemoriesUITileSourceDelegate;

@interface PXMemoriesUITileSource : NSObject <PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerPreheatHandler>
{
    NSMutableSet *_checkedOutTiles;
    struct {
        BOOL memoryToPreheatForIndexPath;
    } _delegateRespondsTo;
    BOOL _canRenderTextAsynchronously;
    PXReusableObjectPool *_viewTilePool;
    PXUIScrollViewController *_scrollViewController;
    NSIndexSet *_providingTilesForKinds;
    id<PXMemoriesUITileSourceDelegate> _delegate;
    PXPhotoKitUIMediaProvider *__mediaProvider;
    PXFeedDateFormatter *__dateFormatter;
    unsigned long long __memoriesStyle;
}

@property (readonly, nonatomic) PXFeedDateFormatter *_dateFormatter; // @synthesize _dateFormatter=__dateFormatter;
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *_mediaProvider; // @synthesize _mediaProvider=__mediaProvider;
@property (readonly, nonatomic) unsigned long long _memoriesStyle; // @synthesize _memoriesStyle=__memoriesStyle;
@property (nonatomic) BOOL canRenderTextAsynchronously; // @synthesize canRenderTextAsynchronously=_canRenderTextAsynchronously;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXMemoriesUITileSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSIndexSet *providingTilesForKinds; // @synthesize providingTilesForKinds=_providingTilesForKinds;
@property (readonly, nonatomic) PXUIScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXReusableObjectPool *viewTilePool; // @synthesize viewTilePool=_viewTilePool;

- (void).cxx_destruct;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3;
- (void)_dateFormatterChanged:(id)arg1;
- (void)_getImageRequester:(id *)arg1 title:(id *)arg2 subtitle:(id *)arg3 forIndexPath:(struct PXSimpleIndexPath)arg4 dataSource:(id)arg5;
- (void *)_tileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)_updateDateLabelTile:(id)arg1;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)dealloc;
- (id)initWithScrollViewController:(id)arg1 memoriesStyle:(unsigned long long)arg2;
- (BOOL)providesTileForIdentifier:(struct PXTileIdentifier)arg1;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;

@end

