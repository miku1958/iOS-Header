//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

@class UIImageView, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface LPDomainNameIndicator : LPComponentView
{
    UIVisualEffectView *_vibrancyView;
    UIVisualEffectView *_blurView;
    UILabel *_label;
    UIImageView *_glyphView;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDomainName:(id)arg1 theme:(id)arg2;
- (void)layoutComponentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

