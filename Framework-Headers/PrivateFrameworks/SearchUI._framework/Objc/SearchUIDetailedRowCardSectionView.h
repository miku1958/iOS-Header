//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/SearchUIDetailedViewDelegate-Protocol.h>

@class NSString, SearchUIDetailedRowModel, SearchUIDetailedView;

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>
{
}

@property (strong, nonatomic) SearchUIDetailedView *contentView; // @dynamic contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SearchUIDetailedRowModel *rowModel; // @dynamic rowModel;
@property (readonly) Class superclass;

+ (BOOL)supportsCustomUserReportRequestAfforance;
+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)footnoteButtonPressed;
- (id)leadingTextView;
- (id)leadingView;
- (void)setFeedbackDelegate:(id)arg1;
- (id)setupContentView;
- (void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
