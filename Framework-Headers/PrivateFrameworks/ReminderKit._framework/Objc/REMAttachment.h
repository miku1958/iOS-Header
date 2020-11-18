//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>

@class NSString, REMObjectID;

@interface REMAttachment : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding>
{
    NSString *_uti;
    REMObjectID *_objectID;
    REMObjectID *_accountID;
    REMObjectID *_reminderID;
}

@property (readonly, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property (readonly, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) REMObjectID *reminderID; // @synthesize reminderID=_reminderID;
@property (readonly, nonatomic) NSString *uti; // @synthesize uti=_uti;

+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAttachment:(id)arg1 objectID:(id)arg2 accountID:(id)arg3 reminderID:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 UTI:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end
