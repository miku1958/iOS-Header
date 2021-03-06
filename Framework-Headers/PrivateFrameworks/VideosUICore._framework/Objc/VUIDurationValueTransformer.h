//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSDateComponentsFormatter;

@interface VUIDurationValueTransformer : NSValueTransformer
{
    NSDateComponentsFormatter *_hoursMinutesFormatter;
    NSDateComponentsFormatter *_secondsFormatter;
}

@property (strong, nonatomic) NSDateComponentsFormatter *hoursMinutesFormatter; // @synthesize hoursMinutesFormatter=_hoursMinutesFormatter;
@property (strong, nonatomic) NSDateComponentsFormatter *secondsFormatter; // @synthesize secondsFormatter=_secondsFormatter;

+ (BOOL)allowsReverseTransformation;
+ (void)initialize;
+ (Class)transformedValueClass;
- (void).cxx_destruct;
- (id)init;
- (id)transformedValue:(id)arg1;

@end

