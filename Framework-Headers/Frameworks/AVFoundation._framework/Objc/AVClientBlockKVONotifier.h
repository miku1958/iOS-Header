//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVKVOIntrospection-Protocol.h>
#import <AVFoundation/AVKVONotifier-Protocol.h>

@class AVCallbackContextRegistry, NSString;

__attribute__((visibility("hidden")))
@interface AVClientBlockKVONotifier : NSObject <AVKVONotifier, AVKVOIntrospection>
{
    AVCallbackContextRegistry *_callbackContextRegistry;
    void *_callbackContextToken;
    NSObject *_observer;
    NSObject *_object;
    NSString *_keyPath;
    unsigned long long _options;
    CDUnknownBlockType _block;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject *observedObject;
@property (readonly) Class superclass;

- (void)callbackDidFireWithChangeDictionary:(id)arg1;
- (void)cancelCallbacks;
- (void)dealloc;
- (id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;
- (void)start;

@end
