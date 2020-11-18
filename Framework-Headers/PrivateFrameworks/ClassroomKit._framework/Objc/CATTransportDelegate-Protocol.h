//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CATMessage, CATTransport, NSError;

@protocol CATTransportDelegate <NSObject>

@optional
- (void)transport:(CATTransport *)arg1 didFailToSendMessage:(CATMessage *)arg2 error:(NSError *)arg3;
- (void)transport:(CATTransport *)arg1 didInterruptWithError:(NSError *)arg2;
- (void)transport:(CATTransport *)arg1 didReceiveMessage:(CATMessage *)arg2;
- (void)transport:(CATTransport *)arg1 didSendMessage:(CATMessage *)arg2;
- (void)transportDidConnect:(CATTransport *)arg1;
- (void)transportDidInvalidate:(CATTransport *)arg1;
- (void)transportDidResume:(CATTransport *)arg1;
@end

