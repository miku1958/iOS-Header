//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem
{
    NSString *_title;
    NSString *_body;
}

- (void).cxx_destruct;
- (id)bodyText;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)dismissButtonText;
- (id)initWithTitle:(id)arg1 body:(id)arg2;
- (void)performUnlockAction;
- (void)setBodyText:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)suppressForKeynote;
- (id)title;

@end

