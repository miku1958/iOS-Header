//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class SearchUIHorizontallyScrollingContainerView;

@interface SearchUIHorizontallyScrollableCardSectionView : SearchUICardSectionView
{
}

@property (strong, nonatomic) SearchUIHorizontallyScrollingContainerView *contentView; // @dynamic contentView;

- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)setFeedbackDelegate:(id)arg1;
- (id)setupContentView;

@end
