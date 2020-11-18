//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSData.h>

@class CKRecordID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDSharePCSData : CKDPCSData
{
    struct _OpaquePCSShareProtection *_publicPCS;
    CKRecordID *_shareID;
    unsigned long long _serviceType;
    NSString *_shareEtag;
    long long _publicPermission;
    long long _myParticipantType;
    long long _myParticipantPermission;
    struct _OpaquePCSShareProtection *_myParticipantPCS;
    NSData *_myParticipantPCSData;
    NSString *_publicPCSEtag;
    NSData *_publicPCSData;
}

@property (nonatomic) struct _OpaquePCSShareProtection *invitedPCS;
@property (nonatomic) struct _OpaquePCSShareProtection *myParticipantPCS; // @synthesize myParticipantPCS=_myParticipantPCS;
@property (copy, nonatomic) NSData *myParticipantPCSData; // @synthesize myParticipantPCSData=_myParticipantPCSData;
@property (nonatomic) long long myParticipantPermission; // @synthesize myParticipantPermission=_myParticipantPermission;
@property (nonatomic) long long myParticipantType; // @synthesize myParticipantType=_myParticipantType;
@property (nonatomic) struct _OpaquePCSShareProtection *publicPCS;
@property (copy, nonatomic) NSData *publicPCSData; // @synthesize publicPCSData=_publicPCSData;
@property (copy, nonatomic) NSString *publicPCSEtag; // @synthesize publicPCSEtag=_publicPCSEtag;
@property (nonatomic) long long publicPermission; // @synthesize publicPermission=_publicPermission;
@property (nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property (strong, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property (strong, nonatomic) CKRecordID *shareID; // @synthesize shareID=_shareID;

+ (id)dataWithShareID:(id)arg1 pcsData:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShareID:(id)arg1 pcsData:(id)arg2;

@end
