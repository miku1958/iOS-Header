//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/RLMObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSDate, NSString, WFRealmWorkflow;

@interface WFRealmWorkflowRunEvent : RLMObject <WFRecordStorage>
{
    NSString *_identifier;
    WFRealmWorkflow *_workflow;
    NSDate *_date;
    NSString *_source;
    NSString *_triggerID;
    long long _outcome;
}

@property (strong) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *identifier; // @synthesize identifier=_identifier;
@property long long outcome; // @synthesize outcome=_outcome;
@property NSString *source; // @synthesize source=_source;
@property (readonly) Class superclass;
@property (copy) NSString *triggerID; // @synthesize triggerID=_triggerID;
@property (strong) WFRealmWorkflow *workflow; // @synthesize workflow=_workflow;

+ (id)className;
+ (id)defaultPropertyValues;
+ (id)primaryKey;
+ (id)requiredProperties;
- (void).cxx_destruct;
- (id)descriptor;

@end

