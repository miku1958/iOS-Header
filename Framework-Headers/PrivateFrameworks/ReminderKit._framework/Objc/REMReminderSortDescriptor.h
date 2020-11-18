//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface REMReminderSortDescriptor : NSObject <NSSecureCoding>
{
    BOOL _ascending;
    long long _type;
}

@property (readonly, nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (id)sortDescriptorSortingByCreationDateAscending:(BOOL)arg1;
+ (id)sortDescriptorSortingByDueDateAscending:(BOOL)arg1;
+ (id)sortDescriptorSortingByOrderingInListAscending:(BOOL)arg1;
+ (id)sortDescriptorSortingByPriorityAscending:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 ascending:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;

@end
