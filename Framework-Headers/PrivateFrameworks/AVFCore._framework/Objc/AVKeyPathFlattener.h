//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/AVKeyPathDependencyHost-Protocol.h>
#import <AVFCore/AVWeakObservable-Protocol.h>

@class AVKeyPathDependencyManager, AVTwoPartKeyPath, NSString;

__attribute__((visibility("hidden")))
@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable>
{
    AVKeyPathDependencyManager *_dependencyManager;
    AVTwoPartKeyPath *_dependencyKeyPath;
    NSObject *_observedObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id dependentProperty;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (id)init;
- (id)initForObservingValueAtKeyPath:(id)arg1 onObject:(id)arg2;
- (id)observedObject;
- (id)topLevelDependencyProperty;

@end

