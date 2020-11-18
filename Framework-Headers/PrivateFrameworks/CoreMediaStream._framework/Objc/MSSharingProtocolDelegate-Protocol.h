//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class MSSharingProtocol, NSArray, NSError;

@protocol MSSharingProtocolDelegate <NSObject>
- (void)sharingProtocol:(MSSharingProtocol *)arg1 didCompleteTransactionWithError:(NSError *)arg2;
- (void)sharingProtocol:(MSSharingProtocol *)arg1 didFailToSendInvitations:(NSArray *)arg2;
- (void)sharingProtocol:(MSSharingProtocol *)arg1 didFindShareState:(NSArray *)arg2;
- (void)sharingProtocol:(MSSharingProtocol *)arg1 didReceiveAuthenticationError:(NSError *)arg2;
@end

