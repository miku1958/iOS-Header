//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, WBSAllowedPasswordRule, WBSMaxConsecutivePasswordRule, WBSMaxLengthPasswordRule, WBSMinLengthPasswordRule;

@interface WBSPasswordRuleSet : NSObject
{
    WBSAllowedPasswordRule *_allowedRule;
    NSArray *_requiredRules;
    WBSMaxConsecutivePasswordRule *_maxConsecutiveRule;
    WBSMinLengthPasswordRule *_minLengthRule;
    WBSMaxLengthPasswordRule *_maxLengthRule;
}

@property (readonly, nonatomic) WBSAllowedPasswordRule *allowedRule; // @synthesize allowedRule=_allowedRule;
@property (readonly, nonatomic) WBSMaxConsecutivePasswordRule *maxConsecutiveRule; // @synthesize maxConsecutiveRule=_maxConsecutiveRule;
@property (readonly, nonatomic) WBSMaxLengthPasswordRule *maxLengthRule; // @synthesize maxLengthRule=_maxLengthRule;
@property (readonly, nonatomic) WBSMinLengthPasswordRule *minLengthRule; // @synthesize minLengthRule=_minLengthRule;
@property (readonly, copy, nonatomic) NSArray *requiredRules; // @synthesize requiredRules=_requiredRules;

+ (id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3;
+ (id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5;
- (void).cxx_destruct;
- (id)initWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5;

@end

