//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSArray, NSString, PXButtonSpec, UIButton, UIView;
@protocol PXUIButtonTileDelegate;

@interface PXUIButtonTile : NSObject <PXUIViewBasicTile, PXReusableObject>
{
    BOOL _hasScheduledUpdate;
    CDStruct_6d279c03 _needsUpdateFlags;
    id<PXUIButtonTileDelegate> _delegate;
    NSString *_title;
    UIView *__view;
    UIButton *__button;
    PXButtonSpec *__spec;
    NSArray *__layoutConstraints;
}

@property (readonly, nonatomic) UIButton *_button; // @synthesize _button=__button;
@property (copy, nonatomic, setter=_setLayoutConstraints:) NSArray *_layoutConstraints; // @synthesize _layoutConstraints=__layoutConstraints;
@property (strong, nonatomic, setter=_setSpec:) PXButtonSpec *_spec; // @synthesize _spec=__spec;
@property (readonly, nonatomic) UIView *_view; // @synthesize _view=__view;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXUIButtonTileDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)_handleButton:(id)arg1;
- (void)_invalidateButton;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateButtonIfNeeded;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (id)init;
- (void)prepareForReuse;

@end
