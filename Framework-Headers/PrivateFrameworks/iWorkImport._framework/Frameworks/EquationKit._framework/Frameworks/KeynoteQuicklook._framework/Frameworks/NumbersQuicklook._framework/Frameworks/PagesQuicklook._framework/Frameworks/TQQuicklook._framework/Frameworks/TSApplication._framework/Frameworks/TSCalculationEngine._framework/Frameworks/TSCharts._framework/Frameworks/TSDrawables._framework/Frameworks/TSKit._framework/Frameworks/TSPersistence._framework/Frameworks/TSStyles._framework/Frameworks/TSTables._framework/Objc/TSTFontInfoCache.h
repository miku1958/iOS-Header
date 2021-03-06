//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface TSTFontInfoCache : NSObject
{
    struct _opaque_pthread_rwlock_t _rwlock;
    struct os_unfair_lock_s _resolvedTextStyleLock;
    NSMapTable *_cache;
    NSMapTable *_propertyMapToTextStyleMap;
}

@property (strong, nonatomic) NSMapTable *cache; // @synthesize cache=_cache;
@property (strong, nonatomic) NSMapTable *propertyMapToTextStyleMap; // @synthesize propertyMapToTextStyleMap=_propertyMapToTextStyleMap;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fontInfoForTextStyle:(id)arg1;
- (id)fontInfoForTextStyle:(id)arg1 withString:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)p_didEnterBackground:(id)arg1;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)resolvedTextStyleWithPropertyMap:(id)arg1;

@end

