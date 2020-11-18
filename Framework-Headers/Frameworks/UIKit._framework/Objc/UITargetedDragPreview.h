//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITargetedPreview.h>

#import <UIKitCore/_UIDragPreviewProvider-Protocol.h>

@class NSDictionary, NSString, UIView, _DUIPreview, _UIDraggingImageComponent;
@protocol _UIDragPreviewProvider;

@interface UITargetedDragPreview : UITargetedPreview <_UIDragPreviewProvider>
{
    BOOL _didSetLiftAnchorPoint;
    _DUIPreview *_duiPreview;
    _UIDraggingImageComponent *_imageComponent;
    BOOL _preventAfterScreenUpdatesSnapshot;
    NSDictionary *__springboardParameters;
    struct CGPoint _liftAnchorPoint;
}

@property (readonly, nonatomic) id<_UIDragPreviewProvider> _dragPreviewProvider;
@property (readonly, nonatomic) _DUIPreview *_duiPreview;
@property (readonly, nonatomic) CDUnknownBlockType _duiPreviewProvider;
@property (copy, nonatomic) NSDictionary *_springboardParameters; // @synthesize _springboardParameters=__springboardParameters;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_isDefaultPreview, setter=_setDefaultPreview:) BOOL defaultPreview;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint liftAnchorPoint; // @synthesize liftAnchorPoint=_liftAnchorPoint;
@property (nonatomic, getter=_preventAfterScreenUpdatesSnapshot, setter=_setPreventAfterScreenUpdatesSnapshot:) BOOL preventAfterScreenUpdatesSnapshot; // @synthesize preventAfterScreenUpdatesSnapshot=_preventAfterScreenUpdatesSnapshot;
@property (readonly) Class superclass;
@property (weak, nonatomic, getter=_viewToSnapshot, setter=_setViewToSnapshot:) UIView *viewToSnapshot;

+ (id)previewForURL:(id)arg1 target:(id)arg2;
+ (id)previewForURL:(id)arg1 title:(id)arg2 target:(id)arg3;
- (void).cxx_destruct;
- (void)_setPreviewMode:(long long)arg1;
- (id)imageComponent;
- (id)initWithView:(id)arg1 parameters:(id)arg2 target:(id)arg3;
- (id)retargetedPreviewWithTarget:(id)arg1;
- (void)takeLiftAnchorPoint:(struct CGPoint)arg1 fromView:(id)arg2;

@end
