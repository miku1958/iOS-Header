//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BSProcessHandle, FBSOpenApplicationOptions, NSString;

@protocol FBSOpenApplicationServiceServerInterface
- (void)canOpenApplication:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)openApplication:(NSString *)arg1 withOptions:(FBSOpenApplicationOptions *)arg2 originator:(BSProcessHandle *)arg3 requestID:(NSString *)arg4 completion:(void (^)(BSProcessHandle *, NSError *))arg5;
@end
