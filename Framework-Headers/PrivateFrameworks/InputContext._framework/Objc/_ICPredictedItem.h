//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _ICProactiveTrigger;

@interface _ICPredictedItem : NSObject
{
    NSString *_identifier;
    double _score;
    NSString *_renderedText;
    NSString *_value;
    _ICProactiveTrigger *_trigger;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *renderedText; // @synthesize renderedText=_renderedText;
@property (nonatomic) double score; // @synthesize score=_score;
@property (readonly, nonatomic) _ICProactiveTrigger *trigger; // @synthesize trigger=_trigger;
@property (copy, nonatomic) NSString *value; // @synthesize value=_value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 value:(id)arg3 proactiveTrigger:(id)arg4;

@end

