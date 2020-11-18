//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKTableHeaderView, UIButton;

@interface PKCameraCaptureInstructionView : UIView
{
    PKTableHeaderView *_headerView;
    long long _context;
    UIButton *_manualEntryButton;
    UIButton *_setupLaterButton;
}

@property (strong, nonatomic) UIButton *manualEntryButton; // @synthesize manualEntryButton=_manualEntryButton;
@property (strong, nonatomic) UIButton *setupLaterButton; // @synthesize setupLaterButton=_setupLaterButton;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2;
- (BOOL)isBuddyiPad;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

