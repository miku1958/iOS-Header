//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class BSAuditToken, FBSApplicationInfo, NSString;

@protocol FBSApplicationInfoProvider <NSObject>
- (FBSApplicationInfo *)applicationInfoForAuditToken:(BSAuditToken *)arg1;
- (FBSApplicationInfo *)applicationInfoForBundleIdentifier:(NSString *)arg1;

@optional
- (void)synchronize:(void (^)(void))arg1;
@end

