//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SXDOM, SXLayoutBlueprint, SXLayoutInstructions, SXLayoutOptions;

@interface SXLayoutTask : NSObject
{
    unsigned long long _type;
    NSString *_identifier;
    SXLayoutOptions *_options;
    SXLayoutInstructions *_instructions;
    SXLayoutBlueprint *_blueprint;
    SXDOM *_DOM;
    double _startTime;
}

@property (readonly, nonatomic) SXDOM *DOM; // @synthesize DOM=_DOM;
@property (readonly, nonatomic) SXLayoutBlueprint *blueprint; // @synthesize blueprint=_blueprint;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) SXLayoutInstructions *instructions; // @synthesize instructions=_instructions;
@property (readonly, nonatomic) SXLayoutOptions *options; // @synthesize options=_options;
@property (readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOptions:(id)arg1 instructions:(id)arg2;
- (id)initWithOptions:(id)arg1 instructions:(id)arg2 blueprint:(id)arg3 DOM:(id)arg4;

@end

