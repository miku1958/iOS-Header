//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>
{
    NSArray *_externalIdentifiers;
    REMObjectID *_listObjectID;
}

@property (readonly, nonatomic) NSArray *externalIdentifiers; // @synthesize externalIdentifiers=_externalIdentifiers;
@property (readonly, nonatomic) REMObjectID *listObjectID; // @synthesize listObjectID=_listObjectID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifiers:(id)arg1 listObjectID:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
