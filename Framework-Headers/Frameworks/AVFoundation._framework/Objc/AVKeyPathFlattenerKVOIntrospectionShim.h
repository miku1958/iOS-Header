//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVCallbackCancellation-Protocol.h>
#import <AVFoundation/AVKVOIntrospection-Protocol.h>

@class NSString;
@protocol AVKVOIntrospection><AVCallbackCancellation;

@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <AVKVOIntrospection, AVCallbackCancellation>
{
    NSObject *_observedObject;
    id<AVKVOIntrospection><AVCallbackCancellation> _realNotifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject *observedObject;
@property (readonly) Class superclass;

- (void)cancelCallbacks;
- (void)dealloc;
- (id)initWithObservedObject:(id)arg1 realNotifier:(id)arg2;

@end

