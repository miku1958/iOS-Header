//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class PPLabeledValue;

@interface PPScoredLabeledValue : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _flags;
    PPLabeledValue *_labeledValue;
    double _score;
}

@property (readonly, nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) PPLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
@property (readonly, nonatomic) double score; // @synthesize score=_score;

+ (id)scoredLabeledValueWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabeledValue:(id)arg1 score:(double)arg2 flags:(unsigned char)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToScoredLabeledValue:(id)arg1;
- (long long)reverseCompare:(id)arg1;

@end
