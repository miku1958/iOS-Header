//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/NSObject-Protocol.h>

@class BSMachPortSendRight, NSError;

@protocol SBSRemoteAlertClientHandle <NSObject>
- (void)queue_noteInvalidWithError:(NSError *)arg1;
- (void)queue_setActive:(BOOL)arg1;
- (BSMachPortSendRight *)queue_token;
@end

