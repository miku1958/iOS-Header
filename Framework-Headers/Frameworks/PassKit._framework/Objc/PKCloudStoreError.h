//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface PKCloudStoreError : NSError
{
}

+ (BOOL)_isCloudKitErrorDomain:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)_allPartialErrors;
- (long long)_code;
- (id)_objectsOfClassTypeFromPartialErrors:(Class)arg1;
- (id)_partialErrorsDictionary;
- (id)allZoneIDs;
- (id)errorForPartialErrorWithObject:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (id)initWithError:(id)arg1;
- (BOOL)isChangeTokenExpired;
- (BOOL)isInitializationTimeOutError;
- (BOOL)isKeychainSyncingInProgress;
- (BOOL)isManateeNotAvailableError;
- (BOOL)isNetworkUnavailable;
- (BOOL)isPCSError;
- (BOOL)isPartialError;
- (BOOL)isUnknownItemError;
- (BOOL)isUnrecoverableDecryptionError;
- (BOOL)isZoneNotFoundError;

@end

