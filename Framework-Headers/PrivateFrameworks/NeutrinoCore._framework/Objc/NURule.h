//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSSecureCoding-Protocol.h>

@interface NURule : NSObject <NSSecureCoding>
{
    long long _salience;
}

@property (nonatomic) long long salience; // @synthesize salience=_salience;

+ (id)ruleWithBlockPredicate:(CDUnknownBlockType)arg1 action:(CDUnknownBlockType)arg2;
+ (id)ruleWithPredicate:(id)arg1 action:(CDUnknownBlockType)arg2;
+ (id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(double)arg3;
+ (id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(double)arg3;
+ (id)ruleWithTarget:(id)arg1 predicate:(SEL)arg2 action:(SEL)arg3;
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performActionWithSystem:(id)arg1;

@end
