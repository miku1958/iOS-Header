//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MLSequence : NSObject
{
    long long _type;
    NSArray *_values;
}

@property (readonly, nonatomic) NSArray *featureValues;
@property (readonly, nonatomic) NSArray *int64Values;
@property (readonly, nonatomic) NSArray *stringValues;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) NSArray *values; // @synthesize values=_values;

+ (id)emptySequenceWithType:(long long)arg1;
+ (id)sequenceFromArray:(id)arg1 error:(id *)arg2;
+ (id)sequenceWithInt64Array:(id)arg1;
+ (id)sequenceWithStringArray:(id)arg1;
- (void).cxx_destruct;
- (id)initWithArray:(id)arg1 type:(long long)arg2;

@end

