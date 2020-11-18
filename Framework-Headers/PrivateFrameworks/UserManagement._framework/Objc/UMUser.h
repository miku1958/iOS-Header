//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserManagement/NSCopying-Protocol.h>
#import <UserManagement/NSMutableCopying-Protocol.h>

@class NSArray, NSDate, NSError, NSString, NSURL;

@interface UMUser : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_displayName;
    BOOL _shouldFetchAttributes;
    BOOL _isLoginUser;
    BOOL _isAuditor;
    BOOL _isDisabled;
    BOOL _hasManagedCredentials;
    BOOL _hasDataToSync;
    unsigned int _uid;
    unsigned int _gid;
    NSString *_alternateDSID;
    NSURL *_homeDirectoryURL;
    NSString *_username;
    NSString *_givenName;
    NSString *_familyName;
    NSURL *_photoURL;
    id __photo;
    NSDate *_creationDate;
    NSDate *_lastLoginDate;
    NSDate *_lastRemoteAuthDate;
    unsigned long long _passcodeType;
    unsigned long long _passcodeLockGracePeriod;
    NSArray *_languages;
    unsigned long long _dataQuota;
    unsigned long long _dataUsed;
    NSError *_errorCausingLogout;
    NSDate *_firstLoginStartDate;
    NSDate *_firstLoginEndDate;
    NSDate *_lastCachedLoginStartDate;
    NSDate *_lastCachedLoginEndDate;
    NSDate *_lastLogoutStartDate;
    NSDate *_lastLogoutEndDate;
}

@property (copy, nonatomic) id _photo; // @synthesize _photo=__photo;
@property (copy, nonatomic) NSString *alternateDSID; // @synthesize alternateDSID=_alternateDSID;
@property (copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (nonatomic) unsigned long long dataQuota; // @synthesize dataQuota=_dataQuota;
@property (nonatomic) unsigned long long dataUsed; // @synthesize dataUsed=_dataUsed;
@property (copy, nonatomic) NSString *displayName;
@property (strong, nonatomic) NSError *errorCausingLogout; // @synthesize errorCausingLogout=_errorCausingLogout;
@property (copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property (copy, nonatomic) NSDate *firstLoginEndDate; // @synthesize firstLoginEndDate=_firstLoginEndDate;
@property (copy, nonatomic) NSDate *firstLoginStartDate; // @synthesize firstLoginStartDate=_firstLoginStartDate;
@property (nonatomic) unsigned int gid; // @synthesize gid=_gid;
@property (copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property (nonatomic) BOOL hasDataToSync; // @synthesize hasDataToSync=_hasDataToSync;
@property (nonatomic) BOOL hasManagedCredentials; // @synthesize hasManagedCredentials=_hasManagedCredentials;
@property (copy, nonatomic) NSURL *homeDirectoryURL; // @synthesize homeDirectoryURL=_homeDirectoryURL;
@property (nonatomic) BOOL isAuditor; // @synthesize isAuditor=_isAuditor;
@property (nonatomic) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property (nonatomic) BOOL isLoginUser; // @synthesize isLoginUser=_isLoginUser;
@property (copy, nonatomic) NSArray *languages; // @synthesize languages=_languages;
@property (copy, nonatomic) NSDate *lastCachedLoginEndDate; // @synthesize lastCachedLoginEndDate=_lastCachedLoginEndDate;
@property (copy, nonatomic) NSDate *lastCachedLoginStartDate; // @synthesize lastCachedLoginStartDate=_lastCachedLoginStartDate;
@property (copy, nonatomic) NSDate *lastLoginDate; // @synthesize lastLoginDate=_lastLoginDate;
@property (copy, nonatomic) NSDate *lastLogoutEndDate; // @synthesize lastLogoutEndDate=_lastLogoutEndDate;
@property (copy, nonatomic) NSDate *lastLogoutStartDate; // @synthesize lastLogoutStartDate=_lastLogoutStartDate;
@property (copy, nonatomic) NSDate *lastRemoteAuthDate; // @synthesize lastRemoteAuthDate=_lastRemoteAuthDate;
@property (readonly, nonatomic) double passcodeBackOffInterval;
@property (nonatomic) unsigned long long passcodeLockGracePeriod; // @synthesize passcodeLockGracePeriod=_passcodeLockGracePeriod;
@property (nonatomic) unsigned long long passcodeType; // @synthesize passcodeType=_passcodeType;
@property (copy, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property (nonatomic) BOOL shouldFetchAttributes; // @synthesize shouldFetchAttributes=_shouldFetchAttributes;
@property (nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property (readonly, nonatomic) unsigned long long userType;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (id)userWithUID:(unsigned int)arg1;
- (void).cxx_destruct;
- (struct dqblk)_diskQuota;
- (BOOL)commitChanges;
- (BOOL)commitChangesWithError:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)fetchAttributesIfNeeded;
- (BOOL)fetchAttributesWithOutError:(id *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToUser:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setPropertiesFromUser:(id)arg1;

@end

