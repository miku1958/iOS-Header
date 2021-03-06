//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HealthUI/UITextViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UITextView;

@interface HKEmergencyCardFooterCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_footerTextView;
    NSAttributedString *_footerTextViewString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UITextView *footerTextView; // @synthesize footerTextView=_footerTextView;
@property (strong, nonatomic) NSAttributedString *footerTextViewString; // @synthesize footerTextViewString=_footerTextViewString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateTextColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFooterText:(id)arg1;
- (void)setTextViewDelegate:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)tintColorDidChange;

@end

