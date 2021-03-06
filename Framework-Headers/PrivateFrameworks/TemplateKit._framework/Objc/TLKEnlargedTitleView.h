//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class TLKLabel, TLKMultilineText;

@interface TLKEnlargedTitleView : TLKView
{
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle;
    TLKLabel *_titleLabel;
    TLKLabel *_subtitleLabel;
}

@property (strong, nonatomic) TLKMultilineText *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) TLKLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (strong, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
@property (strong, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)subtitleLabelText;
- (id)titleLabelText;

@end

