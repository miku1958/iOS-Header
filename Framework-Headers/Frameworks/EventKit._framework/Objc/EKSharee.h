//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class EKCalendar, NSString;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>
{
}

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) EKCalendar *owner;
@property (nonatomic) unsigned long long shareeAccessLevel;
@property (nonatomic) unsigned long long shareeStatus;
@property (readonly) Class superclass;

+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (void *)ABRecordWithAddressBook:(void *)arg1;
- (id)_persistentSharee;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)lazyLoadRelationForKey:(id)arg1;

@end
