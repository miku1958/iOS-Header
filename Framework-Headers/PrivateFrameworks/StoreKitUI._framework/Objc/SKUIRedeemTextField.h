//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextField.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemTextField : UITextField
{
    UIView *_bottomBorderView;
    UIView *_topBorderView;
    UIView *_backdropView;
    BOOL _backdropBackground;
    BOOL _suppressBorder;
}

@property (nonatomic) BOOL backdropBackground; // @synthesize backdropBackground=_backdropBackground;
@property (nonatomic) BOOL suppressBorder; // @synthesize suppressBorder=_suppressBorder;

- (void).cxx_destruct;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;

@end
