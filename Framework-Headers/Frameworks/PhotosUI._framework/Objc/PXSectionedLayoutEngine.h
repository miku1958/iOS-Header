//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXLayoutEngine.h>

#import <PhotosUICore/PXMutableSectionedLayoutEngine-Protocol.h>

@class NSString, PXSectionedLayoutContent;
@protocol PXSectionedLayoutEngineDelegate, PXSectionedLayoutItem;

@interface PXSectionedLayoutEngine : PXLayoutEngine <PXMutableSectionedLayoutEngine>
{
    PXSectionedLayoutContent *_layoutContent;
    struct {
        BOOL willGenerateLayoutForSection;
    } _delegateRespondsTo;
    BOOL _needsUpdateSeedItem;
    struct _PXLayoutGeometry *_geometryBuffer;
    unsigned long long _geometryBufferCount;
    long long _axis;
    struct CGSize _seedSize;
}

@property (readonly, nonatomic) long long axis; // @synthesize axis=_axis;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXSectionedLayoutEngineDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<PXSectionedLayoutItem> seedItem; // @dynamic seedItem;
@property (readonly, nonatomic) struct CGSize seedSize; // @synthesize seedSize=_seedSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_computeSection:(id)arg1;
- (id)_computeSectionsFromSection:(id)arg1 itemIndex:(long long)arg2 kind:(long long)arg3;
- (BOOL)_computeSectionsIfNeeded;
- (id)_emptyLayoutSnapshot;
- (id)_newLayoutSection;
- (id)_newLayoutSnapshot;
- (void)_prepareGeometryBufferForCount:(unsigned long long)arg1;
- (void)_resetLayoutData;
- (void)_updateLayoutDataWithChangeDetails:(id)arg1;
- (BOOL)canComputeLayoutSnapshot;
- (id)computeLayoutSnapshot;
- (void)dealloc;
- (id)init;
- (id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3;
- (id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3 insets:(struct UIEdgeInsets)arg4;
- (id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)performChangesAndWait:(CDUnknownBlockType)arg1;
- (void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
- (void)setSeedItem:(id)arg1;
- (void)setSeedSize:(struct CGSize)arg1;
- (void)updateLayoutDataWithChangeDetails:(id)arg1;

@end

