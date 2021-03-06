//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface PUSearchResultsSuggestionTableViewCell : UITableViewCell
{
    UILabel *_resultTitleLabel;
    UILabel *_resultAuxSubtitleLabel;
}

@property (strong, nonatomic) UILabel *resultAuxSubtitleLabel; // @synthesize resultAuxSubtitleLabel=_resultAuxSubtitleLabel;
@property (strong, nonatomic) UILabel *resultTitleLabel; // @synthesize resultTitleLabel=_resultTitleLabel;

+ (id)_symbolConfigurationForFont:(id)arg1;
- (void).cxx_destruct;
- (void)_preferredContentSizeChanged:(id)arg1;
- (id)_setupResultAuxSubtitleLabel;
- (id)_setupResultTitleLabel;
- (void)_setupSubviews;
- (struct UIEdgeInsets)edgeInsets;
- (BOOL)hasAccessory;
- (struct CGSize)imageViewSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setAttributedTitle:(id)arg1 resultCount:(unsigned long long)arg2 categoryImage:(id)arg3;
- (void)setAttributedTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3;
- (void)setTitle:(id)arg1 resultCount:(unsigned long long)arg2 categoryImage:(id)arg3;
- (void)setTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3;
- (BOOL)shouldUseAccessibilityLayout;

@end

