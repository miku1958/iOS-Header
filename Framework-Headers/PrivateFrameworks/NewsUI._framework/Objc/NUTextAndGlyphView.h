//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NewsUI/NUCrossFadeViewAnimatable-Protocol.h>

@class NSString, NUTextAndGlyph, UIImageView, UILabel;

@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable>
{
    NUTextAndGlyph *_textAndGlyph;
    UILabel *_label;
    UIImageView *_imageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property (readonly) Class superclass;
@property (strong, nonatomic) NUTextAndGlyph *textAndGlyph; // @synthesize textAndGlyph=_textAndGlyph;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)nu_crossFadeViewClearVisibleState;
- (void)nu_crossFadeViewSetValue:(id)arg1;

@end

