//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSItemProvider, UIView, _DUIPreview;
@protocol _UIDraggingItemVisualTarget;

@interface _UIDraggingItem : NSObject
{
    NSArray *_imageComponents;
    NSItemProvider *_provider;
    _DUIPreview *_preview;
    CDUnknownBlockType _previewProvider;
    id _privateLocalContext;
    id _localObject;
    CDUnknownBlockType _imageComponentsProvider;
    unsigned long long _options;
    double _scale;
    double _rotationAngle;
    id<_UIDraggingItemVisualTarget> _sourceVisualTarget;
    id<_UIDraggingItemVisualTarget> _destinationVisualTarget;
    UIView *_droppedSnapshotView;
    unsigned long long _dirtyReasons;
    NSItemProvider *_dropItemProvider;
    CDUnknownBlockType _droppedSnapshotViewProvider;
    long long _mutability;
    struct CGPoint _anchorPoint;
}

@property (nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property (weak, nonatomic) id<_UIDraggingItemVisualTarget> destinationVisualTarget; // @synthesize destinationVisualTarget=_destinationVisualTarget;
@property (readonly, nonatomic, getter=_isDirty) BOOL dirty;
@property (nonatomic, getter=_dirtyReasons, setter=_setDirtyReasons:) unsigned long long dirtyReasons; // @synthesize dirtyReasons=_dirtyReasons;
@property (strong, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider; // @synthesize dropItemProvider=_dropItemProvider;
@property (strong, nonatomic) UIView *droppedSnapshotView; // @synthesize droppedSnapshotView=_droppedSnapshotView;
@property (copy, nonatomic, getter=_droppedSnapshotViewProvider, setter=_setDroppedSnapshotViewProvider:) CDUnknownBlockType droppedSnapshotViewProvider; // @synthesize droppedSnapshotViewProvider=_droppedSnapshotViewProvider;
@property (readonly, copy, nonatomic) NSArray *imageComponents;
@property (copy, nonatomic) CDUnknownBlockType imageComponentsProvider; // @synthesize imageComponentsProvider=_imageComponentsProvider;
@property (readonly, nonatomic) struct CGRect imageFrame;
@property (strong, nonatomic) id localObject; // @synthesize localObject=_localObject;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (nonatomic, getter=_mutability, setter=_setMutability:) long long mutability; // @synthesize mutability=_mutability;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) NSItemProvider *provider;
@property (nonatomic) double rotationAngle; // @synthesize rotationAngle=_rotationAngle;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (weak, nonatomic) id<_UIDraggingItemVisualTarget> sourceVisualTarget; // @synthesize sourceVisualTarget=_sourceVisualTarget;

- (void).cxx_destruct;
- (void)_clearDirty;
- (id)_imageComponents;
- (id)_initWithInternalItem:(id)arg1;
- (id)_preview;
- (CDUnknownBlockType)_previewProvider;
- (id)_privateLocalContext;
- (void)_setDirtyForReason:(unsigned long long)arg1;
- (void)_setPreviewProvider:(CDUnknownBlockType)arg1;
- (void)_setPrivateLocalContext:(id)arg1;
- (void)_updateFromInternalItem:(id)arg1;
- (id)description;
- (id)initWithProvider:(id)arg1 metadata:(id)arg2;
- (id)initWithProvider:(id)arg1 sourceVisualTarget:(id)arg2 metadata:(id)arg3;
- (void)setImageContents:(id)arg1;

@end

