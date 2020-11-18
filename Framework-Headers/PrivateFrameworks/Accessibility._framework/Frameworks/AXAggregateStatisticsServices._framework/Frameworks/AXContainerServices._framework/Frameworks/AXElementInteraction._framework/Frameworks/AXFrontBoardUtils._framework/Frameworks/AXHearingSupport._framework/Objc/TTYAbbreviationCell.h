//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface TTYAbbreviationCell : UICollectionViewCell
{
    UILabel *_abbreviation;
    UILabel *_hint;
}

@property (strong, nonatomic) UILabel *abbreviation; // @synthesize abbreviation=_abbreviation;
@property (strong, nonatomic) UILabel *hint; // @synthesize hint=_hint;

- (void).cxx_destruct;
- (id)abbreviationText;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setAbbreviationData:(id)arg1;

@end

