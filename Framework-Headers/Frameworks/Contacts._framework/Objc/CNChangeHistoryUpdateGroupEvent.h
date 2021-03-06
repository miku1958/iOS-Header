//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNChangeHistoryEvent.h>

@class CNGroup;

@interface CNChangeHistoryUpdateGroupEvent : CNChangeHistoryEvent
{
    CNGroup *_group;
}

@property (readonly, nonatomic) CNGroup *group; // @synthesize group=_group;

+ (unsigned long long)instanceSortOrder;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

