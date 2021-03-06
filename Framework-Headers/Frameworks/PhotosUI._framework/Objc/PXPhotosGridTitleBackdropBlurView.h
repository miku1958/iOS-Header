//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class NSString, UIVisualEffectView;

@interface PXPhotosGridTitleBackdropBlurView : UIView <PXGReusableView>
{
    UIVisualEffectView *_visualEffectView;
    NSString *_userData;
    struct CGRect _clippingRect;
}

@property (nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property (copy, nonatomic) NSString *userData; // @synthesize userData=_userData;

- (void).cxx_destruct;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

