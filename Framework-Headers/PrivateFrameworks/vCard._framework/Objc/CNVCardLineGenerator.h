//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNVCardLineFactory;

@interface CNVCardLineGenerator : NSObject
{
    NSString *_lineName;
    long long *_groupingCount;
    id<CNVCardLineFactory> _lineFactory;
}

+ (id)activityAlertGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;
+ (id)alternateDateComponentsGeneratorWithName:(id)arg1 groupingcount:(long long *)arg2;
+ (id)dateComponentsGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;
+ (id)emailGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;
+ (id)generatorWithName:(id)arg1 groupingCount:(long long *)arg2;
+ (id)instantMessagingGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;
+ (id)legacyInstantMessagingGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;
+ (id)phoneGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;
+ (id)socialProfileGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;
+ (id)streetAddressGeneratorWithName:(id)arg1 groupingCount:(long long *)arg2;
- (void).cxx_destruct;
- (void)addCustomLabel:(id)arg1 toLine:(id)arg2;
- (void)addPrimaryValueMarkerToLine:(id)arg1;
- (void)addStandardLabel:(id)arg1 toLine:(id)arg2;
- (id)initWithName:(id)arg1 groupingCount:(long long *)arg2;
- (id)lineWithValue:(id)arg1 label:(id)arg2;
- (id)makeLineWithName:(id)arg1 value:(id)arg2;
- (id)standardLabelsForLabel:(id)arg1;

@end

