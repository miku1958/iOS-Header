//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class PKPaymentPassAction;

@interface PKPaymentPassActionWidgetButton : UIButton
{
    BOOL _usesAccessibilityLayout;
    PKPaymentPassAction *_action;
}

@property (strong, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
@property (nonatomic) BOOL usesAccessibilityLayout; // @synthesize usesAccessibilityLayout=_usesAccessibilityLayout;

+ (double)glyphImageHeight;
+ (double)widgetHeightWithAccessibilityLayout:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithWidgetViewStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;

@end

