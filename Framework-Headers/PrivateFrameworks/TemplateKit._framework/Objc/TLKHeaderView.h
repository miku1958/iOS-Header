//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerStackViewDelegate-Protocol.h>

@class NSString, TLKImage, TLKImageView, TLKMultilineText, TLKRoundedCornerLabel, TLKStackView, TLKVibrantLabel, UILabel;

@interface TLKHeaderView : TLKView <NUIContainerStackViewDelegate>
{
    TLKImage *_image;
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle;
    TLKMultilineText *_trailingText;
    TLKImage *_subtitleImage;
    NSString *_roundedBorderText;
    long long _axis;
    TLKImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_trailingTextLabel;
    TLKVibrantLabel *_subtitleLabel;
    TLKImageView *_subtitleImageView;
    TLKStackView *_subtitleStackView;
    TLKStackView *_outerStackView;
    TLKStackView *_innerStackView;
    TLKRoundedCornerLabel *_roundedCornerLabel;
}

@property (nonatomic) long long axis; // @synthesize axis=_axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TLKImage *image; // @synthesize image=_image;
@property (strong) TLKImageView *imageView; // @synthesize imageView=_imageView;
@property (strong) TLKStackView *innerStackView; // @synthesize innerStackView=_innerStackView;
@property (strong) TLKStackView *outerStackView; // @synthesize outerStackView=_outerStackView;
@property (strong, nonatomic) NSString *roundedBorderText; // @synthesize roundedBorderText=_roundedBorderText;
@property (strong) TLKRoundedCornerLabel *roundedCornerLabel; // @synthesize roundedCornerLabel=_roundedCornerLabel;
@property (strong, nonatomic) TLKMultilineText *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) TLKImage *subtitleImage; // @synthesize subtitleImage=_subtitleImage;
@property (strong) TLKImageView *subtitleImageView; // @synthesize subtitleImageView=_subtitleImageView;
@property (strong) TLKVibrantLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (strong) TLKStackView *subtitleStackView; // @synthesize subtitleStackView=_subtitleStackView;
@property (readonly) Class superclass;
@property (strong, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
@property (strong) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) TLKMultilineText *trailingText; // @synthesize trailingText=_trailingText;
@property (strong) UILabel *trailingTextLabel; // @synthesize trailingTextLabel=_trailingTextLabel;

- (void).cxx_destruct;
- (id)hasImage;
- (id)init;
- (void)observedPropertiesChanged;
- (id)roundedCornerLabelText;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)subtitleLabelText;
- (id)titleLabelFont;
- (id)titleLabelText;

@end

