//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKDiscoveryBonjour, NSMutableArray;

@interface GKDiscoveryBonjourResolveContainer : NSObject
{
    NSMutableArray *_serviceRefList;
    GKDiscoveryBonjour *_context;
    CDUnknownBlockType _resolveCompletionHandler;
}

@property (nonatomic) GKDiscoveryBonjour *context; // @synthesize context=_context;
@property (copy, nonatomic) CDUnknownBlockType resolveCompletionHandler; // @synthesize resolveCompletionHandler=_resolveCompletionHandler;
@property (strong, nonatomic) NSMutableArray *serviceRefList; // @synthesize serviceRefList=_serviceRefList;

- (void)dealloc;
- (id)init;

@end

