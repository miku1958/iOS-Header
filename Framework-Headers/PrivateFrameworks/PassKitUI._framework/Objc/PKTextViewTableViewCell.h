//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UITextView;

@interface PKTextViewTableViewCell : UITableViewCell
{
    UITextView *_textView;
}

@property (readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

