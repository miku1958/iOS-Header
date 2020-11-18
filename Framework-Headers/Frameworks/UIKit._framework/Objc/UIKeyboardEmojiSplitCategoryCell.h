//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell
{
    UIImageView *_symbol;
    UILabel *_title;
    UIView *_selectedCircle;
}

@property (strong, nonatomic) UIView *selectedCircle; // @synthesize selectedCircle=_selectedCircle;
@property (strong, nonatomic) UIImageView *symbol; // @synthesize symbol=_symbol;
@property (strong, nonatomic) UILabel *title; // @synthesize title=_title;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setPressIndicatorHidden:(BOOL)arg1;
- (void)setSelectedCircleBlendMode:(BOOL)arg1;
- (void)setTitleText:(id)arg1;
- (id)symbolFont;
- (id)titleFont;

@end

