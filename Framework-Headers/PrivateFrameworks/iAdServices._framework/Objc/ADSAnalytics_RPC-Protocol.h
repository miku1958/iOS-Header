//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAdServices/NSObject-Protocol.h>

@class NSString;

@protocol ADSAnalytics_RPC <NSObject>
- (void)_remote_reportIngestionForPassWithTeamIdentifier:(NSString *)arg1 passTypeIdentifier:(NSString *)arg2 serialNumber:(NSString *)arg3 iAdReportingIdentifier:(NSString *)arg4 completionHandler:(void (^)(void))arg5;
@end

