//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/NSObject-Protocol.h>

@class NSString;

@protocol BKSAlternateSystemAppServerProtocol <NSObject>
- (void)blockSystemAppForAlternateSystemApp;
- (void)openAlternateSystemAppWithBundleID:(NSString *)arg1;
- (void)terminateAlternateSystemAppWithBundleID:(NSString *)arg1;
- (void)unblockSystemAppForAlternateSystemApp;
@end

