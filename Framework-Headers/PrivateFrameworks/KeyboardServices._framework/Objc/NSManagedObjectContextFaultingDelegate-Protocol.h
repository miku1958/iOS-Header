//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeyboardServices/NSObject-Protocol.h>

@class NSManagedObject, NSManagedObjectContext, NSManagedObjectID, NSPropertyDescription;

@protocol NSManagedObjectContextFaultingDelegate <NSObject>

@optional
- (long long)context:(NSManagedObjectContext *)arg1 shouldHandleInaccessibleFault:(NSManagedObject *)arg2 forObjectID:(NSManagedObjectID *)arg3 andTrigger:(NSPropertyDescription *)arg4;
@end

