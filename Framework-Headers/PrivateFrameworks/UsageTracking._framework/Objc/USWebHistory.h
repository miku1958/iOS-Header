//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _DKKnowledgeEventStreamDeleting;

@interface USWebHistory : NSObject
{
    BOOL _usageTrusted;
    id<_DKKnowledgeEventStreamDeleting> _eventStorage;
}

@property (readonly) id<_DKKnowledgeEventStreamDeleting> eventStorage; // @synthesize eventStorage=_eventStorage;
@property (readonly) BOOL usageTrusted; // @synthesize usageTrusted=_usageTrusted;

- (void).cxx_destruct;
- (void)_deleteEventsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_deleteEventsWithWebUsagePredicate:(id)arg1 videoUsagePredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteAllHistoryForApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteHistoryForDomain:(id)arg1 webApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteHistoryForURL:(id)arg1 webApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)initWithEventStorage:(id)arg1 usageTrusted:(BOOL)arg2;

@end

