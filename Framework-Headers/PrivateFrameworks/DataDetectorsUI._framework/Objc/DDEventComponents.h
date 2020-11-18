//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DataDetectorsUI/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface DDEventComponents : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_eventTypeIdentifier;
    NSDate *_startDate;
    NSDate *_endDate;
    double _duration;
    struct _NSRange _originRange;
    long long _source;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (copy, nonatomic) NSString *eventTypeIdentifier; // @synthesize eventTypeIdentifier=_eventTypeIdentifier;
@property (nonatomic) struct _NSRange originRange; // @synthesize originRange=_originRange;
@property (nonatomic) long long source; // @synthesize source=_source;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)_eventComponents:(id)arg1 matchingResult:(struct __DDResult *)arg2 context:(id)arg3;
+ (id)_eventsFromIntelligentSuggestions:(id)arg1;
+ (id)_eventsFromNaturalLanguageText:(id)arg1 context:(id)arg2;
+ (id)bestEventComponentsForResult:(struct __DDResult *)arg1 withNaturalLanguageContext:(id)arg2 suggestionsContext:(id)arg3 context:(id)arg4;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

