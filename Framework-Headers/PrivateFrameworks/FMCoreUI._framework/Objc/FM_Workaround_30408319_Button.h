//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSLayoutConstraint;

@interface FM_Workaround_30408319_Button : UIButton
{
    NSLayoutConstraint *_fm_workaround_height_constraint;
}

@property (strong, nonatomic) NSLayoutConstraint *fm_workaround_height_constraint; // @synthesize fm_workaround_height_constraint=_fm_workaround_height_constraint;

- (void).cxx_destruct;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;

@end

