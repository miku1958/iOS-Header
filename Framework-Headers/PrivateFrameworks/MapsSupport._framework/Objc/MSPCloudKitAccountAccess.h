//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, NSString;

@interface MSPCloudKitAccountAccess : NSObject
{
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
    CKContainer *_secureContainerWithZoneWidePCS;
    BOOL _useSecureContainer;
    BOOL _disableDeviceToDeviceEncryption;
    NSString *_accountIdentifier;
}

@property (strong, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (nonatomic) BOOL disableDeviceToDeviceEncryption; // @synthesize disableDeviceToDeviceEncryption=_disableDeviceToDeviceEncryption;
@property (nonatomic) BOOL useSecureContainer; // @synthesize useSecureContainer=_useSecureContainer;

+ (long long)containerEnvironmentForAccessEnvironment:(long long)arg1;
+ (long long)defaultEnvironment;
+ (void)fetchDeviceToDeviceEncryptionStatus:(CDUnknownBlockType)arg1;
+ (BOOL)hasCloudKitEntitlement;
+ (id)sharedAccess;
+ (BOOL)useLongLivedOperations;
- (void).cxx_destruct;
- (id)containerForAccount;
- (id)containerWithZoneWidePCS:(BOOL)arg1;
- (id)description;
- (void)fetchAccountIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAccountStatus:(CDUnknownBlockType)arg1;
- (void)fetchDeviceToDeviceEncryptionStatus:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(long long)arg1;
- (id)initWithEnvironment:(long long)arg1 createContainers:(BOOL)arg2;

@end
