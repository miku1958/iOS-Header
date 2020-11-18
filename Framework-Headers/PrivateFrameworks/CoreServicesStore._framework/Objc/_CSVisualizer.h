//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface _CSVisualizer : NSObject
{
    NSMutableDictionary *_handlers;
    NSRecursiveLock *_lock;
    const struct __CSStore *_store;
    NSMutableDictionary *_userInfo;
}

@property (readonly) const struct __CSStore *store; // @synthesize store=_store;
@property (readonly) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (id)URLForUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
+ (void)breakDownTable:(const struct Table *)arg1 inStore:(const struct Store *)arg2 buffer:(char *)arg3;
+ (void)enumerateReferencesToUnitsInUnitDescription:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)enumerateValuesForTitlesInDescription:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (BOOL)getUnit:(unsigned int *)arg1 inTable:(unsigned int *)arg2 fromURL:(id)arg3;
+ (id)new;
+ (id)predicateForSearchingDescriptionWithString:(id)arg1 error:(id *)arg2;
+ (struct _NSRange)rangeOfValueForTitle:(id)arg1 inDescription:(id)arg2;
+ (BOOL)unitDescription:(id)arg1 referencesUnit:(unsigned int)arg2 inTable:(unsigned int)arg3;
- (void).cxx_destruct;
- (id)breakDownUsage;
- (void)dealloc;
- (id)descriptionOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;
- (void)enumerateReferencesToUnit:(unsigned int)arg1 inTable:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)handlerForTable:(unsigned int)arg1;
- (id)init;
- (id)initWithStore:(struct __CSStore *)arg1;
- (id)initWithStore:(struct __CSStore *)arg1 useStandardTableHandlers:(BOOL)arg2;
- (void)setHandler:(CDUnknownBlockType)arg1 forTable:(unsigned int)arg2;
- (void)setStandardTableHandlers;
- (id)summaryOfUnit:(unsigned int)arg1 inTable:(unsigned int)arg2;

@end
