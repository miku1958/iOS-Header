//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface BKSHIDEventRouterManagerBase : NSObject
{
    NSArray *_eventRouters;
}

@property (strong, nonatomic) NSArray *eventRouters; // @synthesize eventRouters=_eventRouters;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (long long)routerDestinationForDescriptor:(id)arg1;

@end

