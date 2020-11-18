//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class SearchUIMovieCardSectionBuyButtonView;

@interface SearchUIMovieCardSectionView : SearchUICardSectionView
{
    SearchUIMovieCardSectionBuyButtonView *_watchListButton;
    SearchUIMovieCardSectionBuyButtonView *_playButton;
}

@property (strong) SearchUIMovieCardSectionBuyButtonView *playButton; // @synthesize playButton=_playButton;
@property (strong) SearchUIMovieCardSectionBuyButtonView *watchListButton; // @synthesize watchListButton=_watchListButton;

- (void).cxx_destruct;
- (id)initWithCardSection:(id)arg1 controller:(id)arg2;
- (void)lookupWatchListStatusForCardSection:(id)arg1;
- (void)updateButtonsIsWatchListed:(BOOL)arg1 playables:(id)arg2 continuationText:(id)arg3;

@end

