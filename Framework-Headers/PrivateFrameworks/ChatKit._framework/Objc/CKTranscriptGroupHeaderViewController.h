//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKTranscriptHeaderViewController.h>

@class UIButton;

@interface CKTranscriptGroupHeaderViewController : CKTranscriptHeaderViewController
{
}

@property (readonly, strong, nonatomic) UIButton *headerButton;

- (id)_groupHeaderComposeRecipients;
- (void)_handleConversationRecipientsChanged:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (BOOL)shouldInvalidateOnAddressBookChange;

@end

