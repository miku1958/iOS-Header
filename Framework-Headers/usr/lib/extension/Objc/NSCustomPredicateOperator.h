//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicateOperator.h>

__attribute__((visibility("hidden")))
@interface NSCustomPredicateOperator : NSPredicateOperator
{
    SEL _selector;
}

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (SEL)selector;
- (id)symbol;

@end
