//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMDChat, NSArray;
@protocol IMDAutoReplyDelegate;

@protocol IMDAutoReplying <NSObject>

@property (weak, nonatomic) id<IMDAutoReplyDelegate> replyDelegate;

- (void)processMessages:(NSArray *)arg1 inChat:(IMDChat *)arg2;
@end
