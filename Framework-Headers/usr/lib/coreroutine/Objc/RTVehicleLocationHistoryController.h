//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTPurgable-Protocol.h>

@class NSManagedObjectContext, NSString;
@protocol OS_dispatch_queue;

@interface RTVehicleLocationHistoryController : NSObject <RTPurgable>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSManagedObjectContext *_managedObjectContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_deleteVehicleEventsBeforeDate:(id)arg1;
- (BOOL)_evaluateUsualLocationWithVehicleEvent:(id)arg1;
- (id)_getAllVehicleEventsFromHistory;
- (BOOL)_persistVehicleEventToHistory:(id)arg1;
- (id)initWithQueue:(id)arg1 managedObjectContext:(id)arg2;
- (void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

