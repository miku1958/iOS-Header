//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKRouteContextObserver-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKRouteContextObserverThunk : NSObject <VKRouteContextObserver>
{
    struct LabelTransitSupport *_transitSupport;
    struct _retain_ptr<VKRouteContext *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _routeContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRouteContext:(id)arg1 transitSupport:(struct LabelTransitSupport *)arg2;
- (void)routeContextStateDidChange:(id)arg1;

@end

