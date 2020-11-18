//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, SKUIColorScheme, UILabel;

@interface SKUIProductInformationView : UIView
{
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInset;
    NSArray *_informationLines;
    NSMutableArray *_imageValues;
    NSMutableArray *_keyLabels;
    UIView *_separatorView;
    UILabel *_titleLabel;
    NSMutableArray *_valueLabels;
}

@property (strong, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (nonatomic) BOOL hidesSeparatorView;
@property (strong, nonatomic) NSArray *informationLines; // @synthesize informationLines=_informationLines;
@property (strong, nonatomic) NSString *title;

- (void).cxx_destruct;
- (double)_keyWidth;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

