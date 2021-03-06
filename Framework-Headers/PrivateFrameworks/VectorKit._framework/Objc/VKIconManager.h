//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VKInternalIconManager, VKSharedResources;
@protocol OS_dispatch_source;

@interface VKIconManager : NSObject
{
    VKSharedResources *_sharedResources;
    VKInternalIconManager *_iconManager;
    BOOL _usingSingletonIconManager;
    struct mutex _lock;
    NSObject<OS_dispatch_source> *_iconManagerReleaseSource;
}

+ (id)sharedManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_internalIconManager;
- (unsigned int)darkVariant;
- (void)dealloc;
- (id)imageForDataID:(unsigned int)arg1 text:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForIconID:(unsigned int)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)imageForImageSourceKey:(id)arg1;
- (id)imageForKey:(unsigned int)arg1 value:(unsigned int)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForName:(id)arg1 contentScale:(float)arg2 sizeGroup:(long long)arg3 modifiers:(id)arg4;
- (id)imageForStyleAttributes:(id)arg1 styleManager:(shared_ptr_a3c46825)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)imageForStyleAttributes:(id)arg1 withStylesheetName:(id)arg2 contentScale:(float)arg3 sizeGroup:(long long)arg4 modifiers:(id)arg5;
- (id)init;
- (BOOL)isCachingAtlases;
- (void)purge;
- (void)setIsCachingAtlases:(BOOL)arg1;
- (unsigned int)styleAttributeTransitSystemTypeKey;
- (unsigned int)styleAttributeTransitTypeKey;
- (unsigned int)trafficIncidentTypeKey;

@end

