//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/_MFDAMSBasicConsumer.h>

#import <Message/MFDASyncActionsConsumer-Protocol.h>

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>
{
}

- (void)commitSyncActions;
- (void)drainMailbox;
- (BOOL)handleItems:(id)arg1;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (void)receiveSyncActions:(id)arg1;

@end

