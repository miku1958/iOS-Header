//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFComposeHeaderViewDelegate-Protocol.h>

@class MFComposeSubjectView;

@protocol MFComposeSubjectViewDelegate <MFComposeHeaderViewDelegate>
- (void)composeSubjectViewDidSelectNotifyButton:(MFComposeSubjectView *)arg1;
- (void)composeSubjectViewTextFieldDidBecomeFirstResponder:(MFComposeSubjectView *)arg1;
- (void)composeSubjectViewTextFieldDidResignFirstResponder:(MFComposeSubjectView *)arg1;

@optional
- (void)composeSubjectViewWillRemoveContent:(MFComposeSubjectView *)arg1;
@end

