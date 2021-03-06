//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHMatcherDelegate-Protocol.h>
#import <ShazamKit/SHSessionDriverDelegate-Protocol.h>

@class NSString, SHStore;
@protocol SHMatcher, SHSessionDelegate, SHSessionDriver;

@interface SHSession : NSObject <SHMatcherDelegate, SHSessionDriverDelegate>
{
    id<SHSessionDelegate> _delegate;
    SHStore *_store;
    id<SHMatcher> _matcher;
    id<SHSessionDriver> _sessionDriver;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SHSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<SHMatcher> matcher; // @synthesize matcher=_matcher;
@property (strong, nonatomic) id<SHSessionDriver> sessionDriver; // @synthesize sessionDriver=_sessionDriver;
@property (readonly, nonatomic) SHStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (void)didFinishForMatcher:(id)arg1;
- (id)init;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 matcher:(id)arg2;
- (BOOL)isSessionDriverSignature:(id)arg1;
- (void)matchSignature:(id)arg1;
- (void)matchStreamingBuffer:(id)arg1 atTime:(id)arg2;
- (void)matcher:(id)arg1 didFailForSignature:(id)arg2 matcherResponse:(id)arg3 withError:(id)arg4;
- (void)matcher:(id)arg1 didFindMatchingResponse:(id)arg2;
- (void)matcher:(id)arg1 didNotFindMatchForSignature:(id)arg2 matcherResponse:(id)arg3;
- (id)matcherForStore:(id)arg1;

@end

