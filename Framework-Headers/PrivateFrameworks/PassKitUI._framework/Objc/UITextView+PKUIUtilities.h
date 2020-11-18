//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <PassKitUI/PKAppearanceObject-Protocol.h>

@class NSString;

@interface UITextView (PKUIUtilities) <PKAppearanceObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)pkui_plainInteractiveTextViewWithFrame:(struct CGRect)arg1;
+ (id)pkui_plainNonInteractiveTextViewWithFrame:(struct CGRect)arg1;
+ (void)pkui_styleTextView:(id)arg1;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1;
- (struct CGRect)pkui_frameForTextFrame:(struct CGRect)arg1;
- (struct CGRect)pkui_textFrame;
- (struct CGSize)pkui_textSizeThatFits:(struct CGSize)arg1;
@end
