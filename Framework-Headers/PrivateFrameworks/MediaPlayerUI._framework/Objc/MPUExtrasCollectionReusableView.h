//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UILabel, UIView;

@interface MPUExtrasCollectionReusableView : UICollectionReusableView
{
    UILabel *_textLabel;
    MPUContentSizeLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textLeftConstraint;
    MPUContentSizeLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_textRightConstraint;
    struct UIEdgeInsets _labelInsets;
    UIView *_borderView;
    NSArray *_borderConstraints;
}

- (void).cxx_destruct;
- (void)_configureConstraintsForInsets:(struct UIEdgeInsets)arg1;
- (void)configureForHeaderElement:(id)arg1 headerStyle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
