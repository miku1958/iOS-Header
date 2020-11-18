//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAdServices/NSObject-Protocol.h>

@class NSString, NSXPCConnection;

@protocol ADAdSheetConnectionDelegate <NSObject>
- (NSString *)adSheetMachServiceName;
- (void)configureConnection:(NSXPCConnection *)arg1;

@optional
- (void)adSheetConnectionEstablished;
- (void)adSheetConnectionInterrupted;
- (void)adSheetConnectionLost;
- (BOOL)shouldConnectToAdSheet;
@end

