//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface _CADFetchCalendarItemsWithPredicateOperation : NSOperation
{
    NSPredicate *_predicate;
    int _entityType;
    struct CalDatabase *_database;
    int _fetchIdentifier;
    CDUnknownBlockType _completion;
}

@property (readonly, nonatomic) int fetchIdentifier; // @synthesize fetchIdentifier=_fetchIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 entityType:(int)arg2 database:(struct CalDatabase *)arg3 fetchIdentifier:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)main;

@end

