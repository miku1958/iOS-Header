//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class NUIContainerStackView, SearchUIImageView, TLKEmojiableVibrantLabel;

@interface SearchUISuggestionCardSectionView : SearchUICardSectionView
{
    SearchUIImageView *_iconView;
    TLKEmojiableVibrantLabel *_suggestionLabel;
}

@property (strong) NUIContainerStackView *contentView; // @dynamic contentView;
@property (strong) SearchUIImageView *iconView; // @synthesize iconView=_iconView;
@property (strong) TLKEmojiableVibrantLabel *suggestionLabel; // @synthesize suggestionLabel=_suggestionLabel;

+ (id)_imageForSuggestion:(id)arg1 withStyle:(unsigned long long)arg2;
+ (id)suggestedContactIconWithStyle:(unsigned long long)arg1;
+ (id)suggestedQueryIconWithStyle:(unsigned long long)arg1;
+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)updateWithCardSection:(id)arg1;

@end

