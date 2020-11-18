//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDragItem.h>

@class NSItemProvider, _UIDropSessionImpl;
@protocol _UIDraggingItemVisualTarget;

__attribute__((visibility("hidden")))
@interface _UIDropItem : UIDragItem
{
    NSItemProvider *_dropItemProvider;
    _UIDropSessionImpl *__dropSession;
}

@property (weak, nonatomic) _UIDropSessionImpl *_dropSession; // @synthesize _dropSession=__dropSession;
@property (weak, nonatomic, getter=_visualTarget, setter=_setVisualTarget:) id<_UIDraggingItemVisualTarget> _visualTarget;
@property (strong, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider; // @synthesize dropItemProvider=_dropItemProvider;

- (void).cxx_destruct;
- (void)_didSetPreferredPreviewProvider;
- (id)_draggingItem;
- (id)_initWithInternalDraggingItem:(id)arg1;
- (id)_privateLocalContext;
- (struct CGSize)_visibleDropItemSize;
- (id)initWithItemProvider:(id)arg1;
- (id)itemProvider;
- (id)localObject;

@end

