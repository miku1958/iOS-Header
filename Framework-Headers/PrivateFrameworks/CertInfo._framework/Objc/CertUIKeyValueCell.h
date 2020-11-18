//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UILabel;

@interface CertUIKeyValueCell : UITableViewCell
{
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    NSArray *_constraints;
}

@property (strong, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property (strong, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
@property (strong, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;

- (void).cxx_destruct;
- (void)_setup;
- (void)_setupConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
