//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@interface NSTruePredicate : NSPredicate
{
}

+ (BOOL)_allowsEvaluation;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultInstance;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

