//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraKit/_UIBackdropViewObserver-Protocol.h>

@class NSString, _UIBackdropView, _UILegibilitySettingsProvider, _UILegibilityView;

@interface CMKPanoramaLabel : UIView <_UIBackdropViewObserver>
{
    _UIBackdropView *_backdropView;
    _UILegibilityView *_legibilityView;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    NSString *_text;
}

@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (void)_updateLegibilityView;
- (void)backdropViewDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateToContentSize:(id)arg1;

@end
