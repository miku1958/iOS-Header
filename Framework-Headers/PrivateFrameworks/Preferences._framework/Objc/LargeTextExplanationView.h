//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/PSHeaderFooterView-Protocol.h>

@class UILabel, UITextView;

@interface LargeTextExplanationView : UIView <PSHeaderFooterView>
{
    UILabel *_bodyExampleLabel;
    UITextView *_bodyExampleTextView;
}

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;

@end
