//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _TVSeparatorView : UIView
{
    UIView *_line1;
    UIView *_line2;
    UIView *_separatorComponent;
    UIColor *_tintColor;
    double _lineHeight;
}

@property (nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property (weak, nonatomic) UIView *separatorComponent; // @synthesize separatorComponent=_separatorComponent;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

+ (id)separatorViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
