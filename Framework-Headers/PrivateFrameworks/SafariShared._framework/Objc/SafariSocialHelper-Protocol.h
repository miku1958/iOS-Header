//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString, NSURL;

@protocol SafariSocialHelper
- (void)performGetItemsRequestForServiceType:(NSString *)arg1 URL:(NSURL *)arg2 parameters:(NSDictionary *)arg3 accountIdentifier:(NSString *)arg4 completionHandler:(void (^)(NSDictionary *, NSError *))arg5;
- (void)performRepostRequestForServiceType:(NSString *)arg1 URL:(NSURL *)arg2 accountIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSNumber *, NSError *))arg4;
@end

