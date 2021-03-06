//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSXPCListenerEndpoint, STSetupConfiguration, STUserID;

@protocol STSetupServiceInterface
- (void)applyUpdatedConfiguration:(STSetupConfiguration *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)currentConfigurationForUser:(STUserID *)arg1 completionHandler:(void (^)(STSetupConfiguration *, NSError *))arg2;
- (void)promptForPasscodeFromUserWithEndpoint:(NSXPCListenerEndpoint *)arg1 completionHandler:(void (^)(void))arg2;
@end

