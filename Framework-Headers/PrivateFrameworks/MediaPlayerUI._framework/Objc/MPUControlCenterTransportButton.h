//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <MediaPlayerUI/MPUTransportButton-Protocol.h>

@class MPUTransportButton, MPUTransportButtonEventHandler, NSString, UIImage, UIVisualEffectView;

@interface MPUControlCenterTransportButton : UIControl <MPUTransportButton>
{
    UIVisualEffectView *_visualEffectView;
    MPUTransportButton *_button;
    UIImage *_transportButtonImage;
}

@property (nonatomic) BOOL adjustsImageWhenHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPUTransportButtonEventHandler *transportButtonEventHandler;
@property (strong, nonatomic) UIImage *transportButtonImage; // @synthesize transportButtonImage=_transportButtonImage;
@property (nonatomic) long long transportButtonImageViewContentMode;

+ (id)transportButton;
- (void).cxx_destruct;
- (void)_longPressBeginReceived:(id)arg1;
- (void)_longPressEndReceived:(id)arg1;
- (void)_tapReceived:(id)arg1;
- (void)_touchActivateReceived:(id)arg1;
- (void)_touchDeactivateReceived:(id)arg1;
- (void)_updateEffectForStateChange:(unsigned long long)arg1;
- (void)applyTransportButtonLayoutAttributes:(CDStruct_62e32a95)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (BOOL)wantsCustomHighlightAppearance;

@end
