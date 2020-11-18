//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountSettings/BasicAccount.h>

#import <AccountSettings/AccountCreationProtocol-Protocol.h>

@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol>
{
}

+ (id)_identifier;
+ (id)accountWithBasicAccount:(id)arg1;
+ (id)basicAccountProperties;
+ (BOOL)isTetheredSyncingDataclass:(id)arg1;
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)arg1;
+ (id)localizedSyncSourceStringForDataClass:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
+ (id)tetheredSourceForDataClass:(id)arg1;
+ (id)typeString;
- (id)displayName;
- (id)identifier;
- (id)syncStoreIdentifier;

@end

