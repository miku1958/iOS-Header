//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/GKNoiseModule-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GKNoiseModifier : NSObject <GKNoiseModule>
{
    NSMutableArray *_inputModules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cloneModule;
- (id)init;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)inputModuleAtIndex:(int)arg1;
- (int)requiredInputModuleCount;
- (void)setInputModule:(id)arg1 atIndex:(int)arg2;
- (double)valueAt: /* Error: Ran out of types for this method. */;

@end

