//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface PHCloudInvitation : PHObject
{
    BOOL _isMine;
    int _invitationState;
    int _invitationStateLocal;
    NSString *_inviteeFirstName;
    NSString *_inviteeLastName;
    NSString *_inviteeFullName;
    NSDate *_inviteeSubscriptionDate;
    NSString *_albumGUID;
    NSString *_cloudGUID;
    NSNumber *_inviteeEmailKey;
    NSString *_inviteeHashedPersonID;
}

@property (readonly, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property (readonly, nonatomic) NSString *cloudGUID; // @synthesize cloudGUID=_cloudGUID;
@property (readonly, nonatomic) int invitationState; // @synthesize invitationState=_invitationState;
@property (readonly, nonatomic) NSString *invitationStateDescription;
@property (readonly, nonatomic) int invitationStateLocal; // @synthesize invitationStateLocal=_invitationStateLocal;
@property (readonly, nonatomic) NSNumber *inviteeEmailKey; // @synthesize inviteeEmailKey=_inviteeEmailKey;
@property (readonly, nonatomic) NSArray *inviteeEmails;
@property (readonly, nonatomic) NSString *inviteeFirstName; // @synthesize inviteeFirstName=_inviteeFirstName;
@property (readonly, nonatomic) NSString *inviteeFullName; // @synthesize inviteeFullName=_inviteeFullName;
@property (readonly, nonatomic) NSString *inviteeHashedPersonID; // @synthesize inviteeHashedPersonID=_inviteeHashedPersonID;
@property (readonly, nonatomic) NSString *inviteeLastName; // @synthesize inviteeLastName=_inviteeLastName;
@property (readonly, nonatomic) NSArray *inviteePhones;
@property (readonly, nonatomic) NSDate *inviteeSubscriptionDate; // @synthesize inviteeSubscriptionDate=_inviteeSubscriptionDate;
@property (readonly, nonatomic) BOOL isMine; // @synthesize isMine=_isMine;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)inviteeDisplayNameIncludingEmail:(BOOL)arg1;
- (id)personInfoManager;

@end
