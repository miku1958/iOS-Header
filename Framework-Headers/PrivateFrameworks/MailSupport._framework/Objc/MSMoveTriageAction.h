//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailSupport/MSTriageAction.h>

@class ECMessageFlagChange, EMMailbox;

@interface MSMoveTriageAction : MSTriageAction
{
    EMMailbox *_destinationMailbox;
    long long _destinationMailboxType;
    ECMessageFlagChange *_flagChange;
    BOOL _copyMessages;
}

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailbox:(id)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5;

@end
