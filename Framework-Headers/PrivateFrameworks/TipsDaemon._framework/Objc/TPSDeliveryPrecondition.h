//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSSerializableObject.h>

@class NSArray;

@interface TPSDeliveryPrecondition : TPSSerializableObject
{
    unsigned long long _joinType;
    NSArray *_conditions;
}

@property (copy, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property (nonatomic) unsigned long long joinType; // @synthesize joinType=_joinType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)initWithDictionary:(id)arg1;

@end

