//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSSerializableObject.h>

@class NSArray, NSDate;

@interface TPSContextualCondition : TPSSerializableObject
{
    unsigned long long _type;
    unsigned long long _joinType;
    NSDate *_matchedDate;
    NSArray *_rules;
}

@property (nonatomic) unsigned long long joinType; // @synthesize joinType=_joinType;
@property (copy, nonatomic) NSDate *matchedDate; // @synthesize matchedDate=_matchedDate;
@property (copy, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)classSet;
+ (id)eventsForConditionDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2;
- (void)restartTracking;

@end

