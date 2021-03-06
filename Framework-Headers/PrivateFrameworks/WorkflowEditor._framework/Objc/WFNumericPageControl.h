//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowEditor/WFAdjustableLabelDelegate-Protocol.h>

@class NSString, UIColor, UILabel, UIPageControl;
@protocol WFNumericPageControlDelegate;

@interface WFNumericPageControl : UIView <WFAdjustableLabelDelegate>
{
    BOOL _usesBoldText;
    long long _currentPage;
    long long _numberOfPages;
    id<WFNumericPageControlDelegate> _delegate;
    UIColor *_selectedPageTintColor;
    UIColor *_deselectedPageTintColor;
    UIPageControl *_pageControl;
    UILabel *_pageLabel;
}

@property (nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFNumericPageControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIColor *deselectedPageTintColor; // @synthesize deselectedPageTintColor=_deselectedPageTintColor;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property (weak, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property (weak, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property (strong, nonatomic) UIColor *selectedPageTintColor; // @synthesize selectedPageTintColor=_selectedPageTintColor;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesBoldText; // @synthesize usesBoldText=_usesBoldText;

- (void).cxx_destruct;
- (void)adjustableLabelRequestedDecrement:(id)arg1;
- (void)adjustableLabelRequestedIncrement:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)pageControlValueChanged:(id)arg1;
- (void)updateControls;

@end

