//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSCopying-Protocol.h>
#import <CoreMediaStream/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface MSASSharingRelationship : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isMine;
    int _state;
    NSString *_GUID;
    NSString *_albumGUID;
    NSString *_email;
    NSArray *_emails;
    NSArray *_phones;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_personID;
    NSDate *_subscriptionDate;
}

@property (strong, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property (strong, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property (strong, nonatomic) NSString *email; // @synthesize email=_email;
@property (strong, nonatomic) NSArray *emails; // @synthesize emails=_emails;
@property (strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (strong, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (nonatomic) BOOL isMine; // @synthesize isMine=_isMine;
@property (strong, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (strong, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property (strong, nonatomic) NSArray *phones; // @synthesize phones=_phones;
@property (nonatomic) int state; // @synthesize state=_state;
@property (strong, nonatomic) NSDate *subscriptionDate; // @synthesize subscriptionDate=_subscriptionDate;

+ (id)MSASPSharingRelationshipFromProtocolDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_fullName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSharingRelationship:(id)arg1;

@end

