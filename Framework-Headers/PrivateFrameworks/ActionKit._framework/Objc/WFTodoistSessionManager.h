//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, NSURLSession, WFOAuth2Credential;

@interface WFTodoistSessionManager : NSObject
{
    NSURLSession *_session;
    WFOAuth2Credential *_credential;
    NSURL *_baseURL;
    NSString *_syncToken;
}

@property (readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (copy, nonatomic) WFOAuth2Credential *credential; // @synthesize credential=_credential;
@property (readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;

- (void).cxx_destruct;
- (void)createFileOnItemWithId:(long long)arg1 withFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)createItemInProject:(id)arg1 content:(id)arg2 dueDateString:(id)arg3 reminderDateString:(id)arg4 reminderService:(long long)arg5 priority:(long long)arg6 note:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)getProjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)requestWithCommands:(id)arg1 resourceTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
