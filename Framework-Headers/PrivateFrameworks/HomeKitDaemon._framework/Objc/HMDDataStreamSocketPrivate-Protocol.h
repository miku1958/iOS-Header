//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDDataStreamSocket-Protocol.h>

@class NSData, NSError;

@protocol HMDDataStreamSocketPrivate <HMDDataStreamSocket>
- (void)closeWithError:(NSError *)arg1;
- (void)handleIncomingData:(NSData *)arg1;
@end
