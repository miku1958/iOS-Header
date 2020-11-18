//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class TLKImageView, TLKVibrantLabel;

@interface TLKTitleContainerView : TLKStackView
{
    TLKVibrantLabel *_titleLabel;
    TLKVibrantLabel *_secondaryLabel;
    TLKImageView *_secondaryImageView;
}

@property (strong, nonatomic) TLKImageView *secondaryImageView; // @synthesize secondaryImageView=_secondaryImageView;
@property (strong, nonatomic) TLKVibrantLabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property (strong, nonatomic) TLKVibrantLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)titleFont;
+ (id)titleFontforTitle:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)secondaryTitleLabelString;
- (void)setStyle:(unsigned long long)arg1;
- (id)titleLabelString;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(BOOL)arg4;

@end
