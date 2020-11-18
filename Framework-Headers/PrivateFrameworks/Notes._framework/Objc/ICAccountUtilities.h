//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSDictionary;

@interface ICAccountUtilities : NSObject
{
    ACAccount *_primaryICloudACAccount;
    ACAccountStore *_accountStore;
    NSDictionary *_currentICloudAccountState;
}

@property (strong, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (copy, nonatomic) NSDictionary *currentICloudAccountState; // @synthesize currentICloudAccountState=_currentICloudAccountState;
@property (readonly, nonatomic) BOOL didChooseToMigratePrimaryICloudAccount;
@property (readonly) ACAccount *primaryICloudACAccount; // @synthesize primaryICloudACAccount=_primaryICloudACAccount;
@property (readonly, nonatomic) BOOL primaryICloudAccountEnabled;

+ (void)clearSharedInstance;
+ (id)sharedInstance;
+ (void)startSharedInstance;
- (void).cxx_destruct;
- (void)accountStoreDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initForObservingAccountStoreChanges:(BOOL)arg1;
- (void)internalInvalidatePrimaryICloudACAccount;
- (void)invalidatePrimaryICloudACAccount;
- (void)updateICloudACAccountFromStore;

@end

