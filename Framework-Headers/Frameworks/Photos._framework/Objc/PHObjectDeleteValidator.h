//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEntityDescription, NSManagedObjectContext, NSMutableSet;

@interface PHObjectDeleteValidator : NSObject
{
    NSMutableSet *_deletedObjectIDs;
    NSEntityDescription *_entity;
    NSManagedObjectContext *_context;
}

- (void).cxx_destruct;
- (id)initWithEntityName:(id)arg1 managedObjectContext:(id)arg2;
- (BOOL)recordObjectID:(id)arg1;
- (BOOL)validateForDeleteWithRequestsByObjectID:(id)arg1 error:(id *)arg2;

@end

