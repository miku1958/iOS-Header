//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class NUIContainerBoxView, UILabel;

@interface SearchUITitleCardSectionView : SearchUICardSectionView
{
    UILabel *_label;
    NUIContainerBoxView *_containerView;
}

@property (strong) NUIContainerBoxView *containerView; // @synthesize containerView=_containerView;
@property (strong) UILabel *label; // @synthesize label=_label;

+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
