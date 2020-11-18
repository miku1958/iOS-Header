//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSItemProvider, UITargetedDragPreview, UIView, _DUIItemDetail, _DUIPreview, _DUIVisibleDroppedItem, _UIDraggingItem;
@protocol _UIDraggingItemVisualTarget;

__attribute__((visibility("hidden")))
@interface _UIInternalDraggingItem : NSObject
{
    BOOL _forSource;
    BOOL _locallyModified;
    _UIDraggingItem *_publicDraggingItem;
    NSItemProvider *_provider;
    id _localObject;
    id _privateLocalContext;
    CDUnknownBlockType _imageComponentsProvider;
    CDUnknownBlockType _originalImageComponentsProvider;
    NSArray *_imageComponents;
    unsigned long long _options;
    double _scale;
    double _rotationAngle;
    CDUnknownBlockType _previewProvider;
    CDUnknownBlockType _originalPreviewProvider;
    _DUIPreview *_preview;
    id<_UIDraggingItemVisualTarget> _sourceVisualTarget;
    id<_UIDraggingItemVisualTarget> _destinationVisualTarget;
    _DUIVisibleDroppedItem *_visibleDroppedItem;
    UITargetedDragPreview *_targetedDropPreview;
    struct CGPoint _anchorPoint;
}

@property (nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property (weak, nonatomic) id<_UIDraggingItemVisualTarget> destinationVisualTarget; // @synthesize destinationVisualTarget=_destinationVisualTarget;
@property (readonly, nonatomic) UIView *droppedSnapshotView;
@property (readonly, nonatomic) _DUIItemDetail *druidItemDetail;
@property (copy, nonatomic) NSArray *imageComponents; // @synthesize imageComponents=_imageComponents;
@property (copy, nonatomic) CDUnknownBlockType imageComponentsProvider; // @synthesize imageComponentsProvider=_imageComponentsProvider;
@property (strong, nonatomic) id localObject; // @synthesize localObject=_localObject;
@property (nonatomic) BOOL locallyModified; // @synthesize locallyModified=_locallyModified;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (copy, nonatomic) CDUnknownBlockType originalImageComponentsProvider; // @synthesize originalImageComponentsProvider=_originalImageComponentsProvider;
@property (copy, nonatomic) CDUnknownBlockType originalPreviewProvider; // @synthesize originalPreviewProvider=_originalPreviewProvider;
@property (strong, nonatomic) _DUIPreview *preview; // @synthesize preview=_preview;
@property (copy, nonatomic) CDUnknownBlockType previewProvider; // @synthesize previewProvider=_previewProvider;
@property (strong, nonatomic) id privateLocalContext; // @synthesize privateLocalContext=_privateLocalContext;
@property (strong, nonatomic) NSItemProvider *provider; // @synthesize provider=_provider;
@property (readonly, nonatomic) _UIDraggingItem *publicDraggingItem; // @synthesize publicDraggingItem=_publicDraggingItem;
@property (nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (weak, nonatomic) id<_UIDraggingItemVisualTarget> sourceVisualTarget; // @synthesize sourceVisualTarget=_sourceVisualTarget;
@property (strong, nonatomic) UITargetedDragPreview *targetedDropPreview; // @synthesize targetedDropPreview=_targetedDropPreview;
@property (strong, nonatomic) _DUIVisibleDroppedItem *visibleDroppedItem; // @synthesize visibleDroppedItem=_visibleDroppedItem;

- (void).cxx_destruct;
- (id)druidImageComponentsWithSlotOwner:(id)arg1;
- (id)initWithPasteboardItem:(id)arg1 detail:(id)arg2;
- (id)initWithPublicDraggingItem:(id)arg1;
- (id)resolvedImageComponents;
- (id)resolvedPreview;
- (void)updateFromDruidItemDetail:(id)arg1;
- (void)updateFromPublicDraggingItem;
- (void)updateToPublicDraggingItem;

@end
