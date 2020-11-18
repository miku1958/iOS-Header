//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface WFWunderlistNote : MTLModel <MTLJSONSerializing>
{
    long long _noteId;
    long long _taskId;
    NSString *_content;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    long long _revision;
}

@property (readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property (readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long noteId; // @synthesize noteId=_noteId;
@property (readonly, nonatomic) long long revision; // @synthesize revision=_revision;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property (readonly, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)createdAtJSONTransformer;
+ (id)updatedAtJSONTransformer;
- (void).cxx_destruct;

@end
