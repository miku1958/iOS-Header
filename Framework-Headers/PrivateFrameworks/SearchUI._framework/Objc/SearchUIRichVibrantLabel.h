//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SearchUIVibrantLabel, UIFont, UILabel;

@interface SearchUIRichVibrantLabel : UIView
{
    SearchUIVibrantLabel *_vibrantLabel;
    UILabel *_highlightLabel;
}

@property (strong) UIFont *font;
@property (strong) UILabel *highlightLabel; // @synthesize highlightLabel=_highlightLabel;
@property long long numberOfLines;
@property double preferredMaxLayoutWidth;
@property (strong) SearchUIVibrantLabel *vibrantLabel; // @synthesize vibrantLabel=_vibrantLabel;

- (void).cxx_destruct;
- (id)initWithRichText:(id)arg1 style:(unsigned long long)arg2;
- (BOOL)updateWithRichText:(id)arg1;
- (id)viewForLastBaselineLayout;

@end
