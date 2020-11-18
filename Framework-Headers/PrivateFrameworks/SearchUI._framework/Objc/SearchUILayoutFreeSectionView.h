//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

@class UIView;

@interface SearchUILayoutFreeSectionView : SearchUICardSectionView
{
    UIView *_containerView;
}

@property (strong) UIView *containerView; // @synthesize containerView=_containerView;

- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (BOOL)isAutoLayoutFree;
- (void)layoutSubviews;
- (void)setContainer:(id)arg1;
- (void)setContainerWithDefaultInsets:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end

