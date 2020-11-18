//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject
{
    WebScriptObjectPrivate *_private;
}

+ (id)_convertValueToObjcValue:(struct JSValue)arg1 originRootObject:(struct RootObject *)arg2 rootObject:(struct RootObject *)arg3;
+ (void)initialize;
+ (id)scriptObjectForJSObject:(struct OpaqueJSValue *)arg1 originRootObject:(struct RootObject *)arg2 rootObject:(struct RootObject *)arg3;
+ (BOOL)throwException:(id)arg1;
- (struct OpaqueJSValue *)JSObject;
- (id)JSValue;
- (struct OpaqueJSContext *)_globalContextRef;
- (BOOL)_hasImp;
- (struct JSObject *)_imp;
- (id)_initWithJSObject:(struct JSObject *)arg1 originRootObject:(RefPtr_11363527 *)arg2 rootObject:(RefPtr_11363527 *)arg3;
- (BOOL)_isSafeScript;
- (struct RootObject *)_originRootObject;
- (struct RootObject *)_rootObject;
- (void)_setImp:(struct JSObject *)arg1 originRootObject:(RefPtr_11363527 *)arg2 rootObject:(RefPtr_11363527 *)arg3;
- (void)_setOriginRootObject:(RefPtr_11363527 *)arg1 andRootObject:(RefPtr_11363527 *)arg2;
- (id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (void)dealloc;
- (id)evaluateWebScript:(id)arg1;
- (BOOL)hasWebScriptKey:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (oneway void)release;
- (void)removeWebScriptKey:(id)arg1;
- (void)setException:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setWebScriptValueAtIndex:(unsigned int)arg1 value:(id)arg2;
- (id)stringRepresentation;
- (id)valueForKey:(id)arg1;
- (id)webScriptValueAtIndex:(unsigned int)arg1;

@end

