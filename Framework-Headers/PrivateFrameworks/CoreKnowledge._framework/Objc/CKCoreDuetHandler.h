//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKCoreDuetHandler : NSObject
{
}

+ (void)duetEventsWithIdentifier:(id)arg1 inStreamNamed:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)duetKnowledgeStore;
+ (void)removeAllFromStreamNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)saveEvents:(id)arg1 toStreamNamed:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
