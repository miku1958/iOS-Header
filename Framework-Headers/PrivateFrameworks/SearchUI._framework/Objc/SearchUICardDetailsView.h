//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UITextView;

@interface SearchUICardDetailsView : UIView
{
    UILabel *_titleLabel;
    UITextView *_detailsTextView;
}

@property (strong) UITextView *detailsTextView; // @synthesize detailsTextView=_detailsTextView;
@property unsigned long long maximumNumberOfLines;
@property (strong) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (double)currentTextViewHeight;
- (double)idealTextViewHeightForCurrentWidth;
- (id)initWithTitle:(id)arg1 details:(id)arg2 controller:(id)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
