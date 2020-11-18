//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ControlCenterUI/_UISettingsKeyObserver-Protocol.h>

@class MTMaterialSettings, MTMaterialView, NSLayoutConstraint, NSSet, NSString, UIImageView;
@protocol CCUIControlCenterPagePlatterViewDelegate;

@interface CCUIControlCenterPagePlatterView : UIView <_UISettingsKeyObserver>
{
    id<CCUIControlCenterPagePlatterViewDelegate> _delegate;
    MTMaterialView *_baseMaterialView;
    UIImageView *_whiteLayerView;
    MTMaterialSettings *_materialSettings;
    UIView *_contentView;
    NSSet *_renderedPunchOutMasks;
    NSLayoutConstraint *_topMargin;
    NSLayoutConstraint *_bottomMargin;
    NSLayoutConstraint *_leadingMargin;
    NSLayoutConstraint *_trailingMargin;
}

@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_recursivelyVisitSubviewsOfView:(id)arg1 forPunchedThroughView:(id)arg2 collectingMasksIn:(id)arg3;
- (void)_reduceTransparencyStatusDidChange;
- (id)_renderAlphaOnlyPunchThroughMaskForPlatterSize:(struct CGSize)arg1;
- (void)_rerenderPunchThroughMaskIfNecessary;
- (BOOL)_searchForUpdatedMask;
- (BOOL)_shouldSuppressCachingPunchOutMaskImage;
- (id)_systemAgent;
- (id)ccuiPunchOutMaskedContainer;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end

