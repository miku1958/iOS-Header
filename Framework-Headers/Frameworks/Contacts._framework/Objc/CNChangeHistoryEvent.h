//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@interface CNChangeHistoryEvent : NSObject <NSCopying, NSSecureCoding>
{
}

+ (unsigned long long)instanceSortOrder;
+ (BOOL)supportsSecureCoding;
- (void)acceptEventVisitor:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)comparisonResultBetweenClasses:(id)arg1;
- (long long)comparisonResultWithinSameClass:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

