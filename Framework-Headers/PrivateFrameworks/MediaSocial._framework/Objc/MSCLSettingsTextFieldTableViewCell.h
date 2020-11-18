//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UITextField;
@protocol UITextFieldDelegate;

@interface MSCLSettingsTextFieldTableViewCell : UITableViewCell
{
    BOOL _enabled;
    long long _layoutStyle;
    UITextField *_textField;
    id<UITextFieldDelegate> _delegate;
    double _labelWidth;
}

@property (weak, nonatomic) id<UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
