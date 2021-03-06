//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKTableHeaderView, UIButton, UIScrollView;

@interface PKCameraCaptureInstructionView : UIView
{
    long long _context;
    UIScrollView *_scrollView;
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
    PKTableHeaderView *_headerView;
}

@property (strong, nonatomic) PKTableHeaderView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property (strong, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2;
- (BOOL)isBuddyiPad;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

