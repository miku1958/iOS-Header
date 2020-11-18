//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSPredicate, NSString;

@interface CKGenericCondition : NSObject
{
    MISSING_TYPE *type;
    MISSING_TYPE *negated;
    MISSING_TYPE *sql.storage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, copy) NSString *sql;

+ (void)setSupportsSecureCoding:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)and:(id)arg1;
- (id)copyWithZone:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateOn:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchType:(long long)arg1 value:(id)arg2 negated:(BOOL)arg3;
- (id)initWithValue:(BOOL)arg1;
- (id)or:(id)arg1;

@end
