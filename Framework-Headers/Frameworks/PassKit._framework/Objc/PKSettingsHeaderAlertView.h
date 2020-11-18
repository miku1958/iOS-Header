//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKit/PSHeaderFooterView-Protocol.h>

@class NSString, UITextView;

@interface PKSettingsHeaderAlertView : UIView <PSHeaderFooterView>
{
    UITextView *_textView;
    NSString *_headerText;
    NSString *_descriptionText;
}

@property (strong, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (strong, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;

- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
