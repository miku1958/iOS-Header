//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSPersonNameComponentsFormatter, UILabel;

@interface WDProfileHeaderView : UIView
{
    UIView *_avatarView;
    UILabel *_nameLabel;
    NSPersonNameComponentsFormatter *_nameFormatter;
}

@property (strong, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property (strong, nonatomic) NSPersonNameComponentsFormatter *nameFormatter; // @synthesize nameFormatter=_nameFormatter;
@property (nonatomic, getter=isNameHidden) BOOL nameHidden;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_updateFont;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

