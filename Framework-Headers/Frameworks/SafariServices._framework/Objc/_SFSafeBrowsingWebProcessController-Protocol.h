//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSDictionary, NSURL, _SFSecurityInfo;

@protocol _SFSafeBrowsingWebProcessController <NSObject>
- (void)safeBrowsingCheckFinishedWithSecurityInfo:(_SFSecurityInfo *)arg1 canGoBack:(BOOL)arg2 localizedStrings:(NSDictionary *)arg3;
- (void)safeBrowsingDatabaseDidUpdate;
- (void)urlPassedSafeBrowsingCheck:(NSURL *)arg1 canCache:(BOOL)arg2;
@end

