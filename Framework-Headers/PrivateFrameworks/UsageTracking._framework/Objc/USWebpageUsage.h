//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;
@protocol _CDAsyncLocalContext, _DKKnowledgeSaving;

@interface USWebpageUsage : NSObject
{
    NSMutableDictionary *_contextUsageRecord;
    BOOL _usageTrusted;
    NSURL *_URL;
    NSString *_bundleIdentifier;
    id<_CDAsyncLocalContext> _context;
    id<_DKKnowledgeSaving> _eventStorage;
}

@property (readonly, copy) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly) id<_CDAsyncLocalContext> context; // @synthesize context=_context;
@property (readonly) id<_DKKnowledgeSaving> eventStorage; // @synthesize eventStorage=_eventStorage;
@property (readonly) BOOL usageTrusted; // @synthesize usageTrusted=_usageTrusted;

+ (id)getProcessIdentifier;
- (void).cxx_destruct;
- (void)changeState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(CDStruct_6ad76789)arg3;
- (id)initWithURL:(id)arg1 context:(id)arg2 eventStorage:(id)arg3 bundleIdentifier:(id)arg4 usageTrusted:(BOOL)arg5;

@end
