//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKit/WFOAuth2AuthorizationSession-Protocol.h>

@class NSArray, NSString, NSURL;

@interface WFDropboxAppAuthorizationSession : NSObject <WFOAuth2AuthorizationSession>
{
    NSArray *_authorizationURLs;
    NSURL *_successURI;
    NSURL *_cancelURI;
    NSString *_clientID;
    NSString *_state;
    CDUnknownBlockType _completionHandler;
}

@property (readonly, nonatomic) NSArray *authorizationURLs; // @synthesize authorizationURLs=_authorizationURLs;
@property (readonly, nonatomic) NSURL *cancelURI; // @synthesize cancelURI=_cancelURI;
@property (readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *state; // @synthesize state=_state;
@property (readonly, nonatomic) NSURL *successURI; // @synthesize successURI=_successURI;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithClientID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)resumeSessionWithURL:(id)arg1;

@end

