//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>

@class PXGNamedImageViewConfiguration;

@interface PXGNamedImageView : UIImageView <PXGReusableView>
{
    PXGNamedImageViewConfiguration *_userData;
    struct CGRect _clippingRect;
}

@property (nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property (copy, nonatomic) PXGNamedImageViewConfiguration *userData; // @synthesize userData=_userData;

- (void).cxx_destruct;
- (void)becomeReusable;
- (void)prepareForReuse;

@end

