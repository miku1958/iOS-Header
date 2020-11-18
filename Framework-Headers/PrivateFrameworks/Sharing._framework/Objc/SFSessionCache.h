//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface SFSessionCache : NSObject <NSSecureCoding>
{
    BOOL _activated;
    BOOL _invalidated;
    struct NSMutableDictionary *_sessions;
    struct NSMutableDictionary *_timestamps;
    unsigned long long _capacity;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    NSUUID *_identifier;
    NSString *_serviceIdentifier;
}

@property (nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_ensureStarted;
- (void)_ensureStopped;
- (void)_popCache;
- (void)_sessionWasInterrupted:(id)arg1;
- (void)_sessionWasInvalidated:(id)arg1;
- (id)_sessionWithDevice:(id)arg1 activate:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)activate;
- (id)activePeerDeviceIDs;
- (id)activeSessions;
- (BOOL)cacheFull;
- (void)clearCache;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(CDUnknownBlockType)arg3 toDevice:(id)arg4;
- (void)sendWithFlags:(unsigned int)arg1 object:(id)arg2 toDevice:(id)arg3;
- (id)sessionWithDevice:(id)arg1 activate:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end

