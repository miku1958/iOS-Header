//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, SUScriptObject;

@interface SUScriptNativeObject : NSObject
{
    id _strongObject;
    id _weakObject;
    SUScriptObject *_scriptObject;
    NSLock *_internalLock;
}

@property (strong, nonatomic) NSLock *internalLock; // @synthesize internalLock=_internalLock;
@property (strong) id object;
@property (weak) SUScriptObject *scriptObject;
@property (strong, nonatomic) id strongObject;
@property (weak, nonatomic) id weakObject;

+ (id)objectWithNativeObject:(id)arg1;
+ (id)objectWithNativeObject:(id)arg1 weak:(BOOL)arg2;
- (void).cxx_destruct;
- (void)destroyNativeObject;
- (id)init;
- (void)lock;
- (void)setupNativeObject;
- (void)unlock;

@end

