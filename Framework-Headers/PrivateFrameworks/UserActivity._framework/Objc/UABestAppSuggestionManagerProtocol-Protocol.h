//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDictionary, NSUUID;

@protocol UABestAppSuggestionManagerProtocol <NSObject>
- (void)doConnected;
- (void)doDetermineBestAppSuggestionWithCompletionHandler:(void (^)(NSUUID *, unsigned long long, NSString *, NSString *, NSDate *, double, NSString *, NSString *, NSString *))arg1;
- (void)doDetermineBestAppSuggestions:(long long)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)doLaunchFollowUp:(NSUUID *)arg1 interactionType:(unsigned long long)arg2 cancelled:(BOOL)arg3;
- (void)doQueueFetchOfPayloadForBestAppSuggestion:(NSUUID *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)doRegisterForBestAppChangeNotification;
- (void)doRemoveBestAppSuggestion:(NSUUID *)arg1 options:(NSDictionary *)arg2;
- (void)doStartBestAppSuggestion:(double)arg1;
- (void)doUnregisterForBestAppChangeNotification;
@end
