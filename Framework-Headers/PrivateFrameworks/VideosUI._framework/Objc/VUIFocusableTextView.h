//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVFocusableTextView.h>

#import <VideosUI/VUILabelTopMarginCalculationProtocol-Protocol.h>

@class VUILabel, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFocusableTextView : TVFocusableTextView <VUILabelTopMarginCalculationProtocol>
{
    VUILabel *_computationLabel;
    VUITextLayout *_textLayout;
    VUITextLayout *_titleTextLayout;
}

@property (strong, nonatomic) VUILabel *computationLabel; // @synthesize computationLabel=_computationLabel;
@property (strong, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property (strong, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;

+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
+ (id)textViewWithElement:(id)arg1 textLayout:(id)arg2 titleElement:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 existingTextView:(id)arg3;
+ (id)textViewWithString:(id)arg1 textLayout:(id)arg2 titleString:(id)arg3 titleLayout:(id)arg4 existingTextView:(id)arg5;
- (void).cxx_destruct;
- (void)_updateTextColor;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)topMarginWithBaselineMargin:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

