//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMAccount.h>

#import <Email/EMReceivingAccountBuilder-Protocol.h>

@class EMDeliveryAccount, NSArray, NSString;

@interface EMReceivingAccount : EMAccount <EMReceivingAccountBuilder>
{
    BOOL _primaryiCloudAccount;
    BOOL _sourceIsManaged;
    BOOL _shouldArchiveByDefault;
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
    EMDeliveryAccount *_deliveryAccount;
    NSArray *_emailAddresses;
    NSString *_statisticsKind;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) EMDeliveryAccount *deliveryAccount; // @synthesize deliveryAccount=_deliveryAccount;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property (nonatomic, getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount; // @synthesize primaryiCloudAccount=_primaryiCloudAccount;
@property (nonatomic) BOOL shouldArchiveByDefault; // @synthesize shouldArchiveByDefault=_shouldArchiveByDefault;
@property (nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property (copy, nonatomic) NSString *statisticsKind; // @synthesize statisticsKind=_statisticsKind;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(CDUnknownBlockType)arg4;
- (id)name;

@end
