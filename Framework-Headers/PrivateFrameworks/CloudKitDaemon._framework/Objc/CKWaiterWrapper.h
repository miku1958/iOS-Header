//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKWaiterWrapper : NSObject
{
    id _waiter;
    NSArray *_zoneIDs;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) id waiter; // @synthesize waiter=_waiter;
@property (strong, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;

@end

