//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeature.h>

@class NSArray, NSMutableDictionary, NSString;

@interface IPFeatureKeyword : IPFeature
{
    NSMutableDictionary *_contextDictionary;
    NSString *_keywordString;
    NSArray *_eventTypes;
    unsigned long long _type;
}

@property (readonly) NSMutableDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;
@property (strong, nonatomic) NSArray *eventTypes; // @synthesize eventTypes=_eventTypes;
@property (strong) NSString *keywordString; // @synthesize keywordString=_keywordString;
@property unsigned long long type; // @synthesize type=_type;

+ (id)featureKeywordWithType:(unsigned long long)arg1 string:(id)arg2 matchRange:(struct _NSRange)arg3;
- (void).cxx_destruct;
- (void)addEventType:(id)arg1;
- (id)description;
- (id)humandReadableEventTypes;
- (id)typeDescription;

@end
