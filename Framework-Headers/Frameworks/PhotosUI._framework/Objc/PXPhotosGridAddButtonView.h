//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class PXPhotosGridAddButtonViewUserData, PXUpdater, UIButton, UIImage;

@interface PXPhotosGridAddButtonView : UIView <PXGReusableView>
{
    UIButton *_button;
    PXUpdater *_updater;
    PXPhotosGridAddButtonViewUserData *_userData;
    UIImage *_buttonImage;
    struct CGRect _clippingRect;
}

@property (readonly, nonatomic) CDUnknownBlockType actionHandler;
@property (strong, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=_buttonImage;
@property (nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property (copy, nonatomic) PXPhotosGridAddButtonViewUserData *userData; // @synthesize userData=_userData;

- (void).cxx_destruct;
- (void)_handleButton:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_updateButtonImage;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;

@end
