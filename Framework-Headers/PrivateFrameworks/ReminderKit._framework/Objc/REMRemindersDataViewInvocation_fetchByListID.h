//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByListID : REMStoreInvocation <NSSecureCoding>
{
    BOOL _includingSubtasks;
    REMObjectID *_listID;
}

@property (readonly, nonatomic) BOOL includingSubtasks; // @synthesize includingSubtasks=_includingSubtasks;
@property (readonly, nonatomic) REMObjectID *listID; // @synthesize listID=_listID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithListID:(id)arg1 includingSubtasks:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;

@end
