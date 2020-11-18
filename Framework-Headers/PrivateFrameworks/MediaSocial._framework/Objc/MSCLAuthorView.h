//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIControl, UILabel;

@interface MSCLAuthorView : UIView
{
    UIButton *_authorNameButton;
    UIView *_bottomSeparatorView;
    UILabel *_label;
}

@property (copy, nonatomic) NSString *authorName;
@property (readonly, nonatomic) UIControl *authorNameButton; // @synthesize authorNameButton=_authorNameButton;
@property (copy, nonatomic) NSString *labelText;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
