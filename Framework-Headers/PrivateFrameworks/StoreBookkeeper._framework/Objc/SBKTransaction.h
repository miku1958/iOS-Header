//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, SBKRequest;

__attribute__((visibility("hidden")))
@interface SBKTransaction : NSObject
{
    NSString *_domain;
    NSURL *_requestURL;
    SBKRequest *_activeRequest;
    NSMutableDictionary *_userInfo;
}

@property (strong) SBKRequest *activeRequest; // @synthesize activeRequest=_activeRequest;
@property (readonly, copy) NSString *domain; // @synthesize domain=_domain;
@property (strong) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property (strong) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)clampsKey;
- (id)init;
- (id)initWithDomain:(id)arg1 requestURL:(id)arg2;
- (id)newRequest;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setTransactionContext:(id)arg1 forKey:(id)arg2;
- (id)transactionContextForKey:(id)arg1;

@end

