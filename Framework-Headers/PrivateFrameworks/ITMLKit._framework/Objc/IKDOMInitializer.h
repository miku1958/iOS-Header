//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IKDOMInitializer : NSObject
{
    NSMutableDictionary *_nodeDeregisterObservers;
}

@property (strong, nonatomic) NSMutableDictionary *nodeDeregisterObservers; // @synthesize nodeDeregisterObservers=_nodeDeregisterObservers;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addNodeDeregisterObserverWithName:(id)arg1 observer:(CDUnknownBlockType)arg2;
- (id)init;
- (void)removeNodeDeregisterObserverWithName:(id)arg1;

@end
