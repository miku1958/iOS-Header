//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface AXSSDatabaseManager : NSObject
{
    int _lockNotificationToken;
    BOOL _isScreenedLocked;
    NSManagedObjectContext *_managedObjectContext;
}

@property (readonly, nonatomic) BOOL canSave;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;

+ (id)sharedDatabase;
- (void).cxx_destruct;
- (id)cloudObjectFromLocalObjects:(id)arg1 withTable:(id)arg2 andObjectID:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)userAuthChanged;

@end

