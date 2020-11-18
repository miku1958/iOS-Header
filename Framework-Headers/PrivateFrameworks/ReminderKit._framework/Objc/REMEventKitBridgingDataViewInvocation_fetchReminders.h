//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface REMEventKitBridgingDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding>
{
    NSArray *_listIDs;
}

@property (readonly, nonatomic) NSArray *listIDs; // @synthesize listIDs=_listIDs;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithListIDs:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
