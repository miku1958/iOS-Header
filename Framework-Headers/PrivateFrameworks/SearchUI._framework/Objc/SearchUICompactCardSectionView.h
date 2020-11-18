//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class SearchUILabel, TLKStackView;

@interface SearchUICompactCardSectionView : SearchUICardSectionView
{
    TLKStackView *_stackView;
    SearchUILabel *_titleLabel;
    SearchUILabel *_subtitleLabel;
}

@property (strong, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property (strong, nonatomic) SearchUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (strong, nonatomic) SearchUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
- (void).cxx_destruct;
- (id)richTextForSearchUIText:(id)arg1 withMaxLines:(unsigned long long)arg2;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
