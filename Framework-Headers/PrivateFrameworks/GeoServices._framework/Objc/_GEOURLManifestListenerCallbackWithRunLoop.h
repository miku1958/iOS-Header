//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEOURLManifestListenerCallback-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GEOURLManifestListenerCallbackWithRunLoop : NSObject <_GEOURLManifestListenerCallback>
{
    CDUnknownBlockType _handler;
    struct __CFRunLoop *_runLoop;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1 handler:(CDUnknownBlockType)arg2;
- (void)performHandler:(BOOL)arg1;

@end
