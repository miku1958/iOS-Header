//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMKeychainManager : NSObject
{
}

+ (id)sharedInstance;
- (int)_add:(id)arg1;
- (int)_delete:(id)arg1;
- (id)_query:(id)arg1;
- (int)_updateWithQuery:(id)arg1 attributes:(id)arg2;
- (id)allAccountsForService:(id)arg1;
- (id)allRecords;
- (id)allServices;
- (id)dataForAccount:(id)arg1 service:(id)arg2;
- (BOOL)deleteDataForAccount:(id)arg1 service:(id)arg2;
- (id)passwordForAccount:(id)arg1 service:(id)arg2;
- (BOOL)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3;
- (BOOL)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3;

@end

