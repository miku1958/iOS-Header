//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/_LSQueryResolving-Protocol.h>

@class NSString, _LSLocalQueryResolver;

__attribute__((visibility("hidden")))
@interface _LSXPCQueryResolver : NSObject <_LSQueryResolving>
{
    _LSLocalQueryResolver *_localResolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateResolvedResultsOfQuery:(id)arg1 XPCConnection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)resolveWhatWeCanLocallyWithQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;

@end

