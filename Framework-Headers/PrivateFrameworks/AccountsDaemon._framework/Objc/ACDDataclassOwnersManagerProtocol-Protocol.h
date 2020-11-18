//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsDaemon/NSObject-Protocol.h>

@class ACAccount, NSArray, NSDictionary, NSString;

@protocol ACDDataclassOwnersManagerProtocol <NSObject>
- (void)actionsForAddingAccount:(ACAccount *)arg1 affectingDataclass:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)actionsForDeletingAccount:(ACAccount *)arg1 affectingDataclass:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)actionsForDisablingDataclass:(NSString *)arg1 onAccount:(ACAccount *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)actionsForEnablingDataclass:(NSString *)arg1 onAccount:(ACAccount *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)isPerformingDataclassActionsForAccount:(ACAccount *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)performDataclassActions:(NSDictionary *)arg1 forAccount:(ACAccount *)arg2 withChildren:(NSArray *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
@end

