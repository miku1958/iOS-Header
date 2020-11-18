//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSession-Protocol.h>
#import <GeoServices/GEODataSessionRulesProvider-Protocol.h>

@class GEODataURLSession, GEODataXPCSession, NSString;
@protocol GEODataSession, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEODataSession : NSObject <GEODataSessionRulesProvider, GEODataSession>
{
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    id<GEODataSession> _urlSession;
    id<GEODataSession> _xpcSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // @synthesize sessionIsolation=_sessionIsolation;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEODataURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property (readonly, nonatomic) GEODataXPCSession *xpcSession; // @synthesize xpcSession=_xpcSession;

+ (id)sharedDataSession;
- (void).cxx_destruct;
- (BOOL)_rules_isOnlineAllowedForRequest:(id)arg1;
- (id)init;
- (id)initWithXPCSession:(id)arg1 urlSession:(id)arg2;
- (id)manifestManager;
- (id)preferedRulesForRequest:(id)arg1;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;

@end

