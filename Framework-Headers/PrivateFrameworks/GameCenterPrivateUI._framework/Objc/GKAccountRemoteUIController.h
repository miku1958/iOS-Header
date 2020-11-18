//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKRemoteUIController.h>

@class NSArray, NSDictionary, NSURL;

@interface GKAccountRemoteUIController : GKRemoteUIController
{
    BOOL _authenticatePlayerOnCompletion;
    long long _mode;
    NSArray *_availableExternalServices;
    NSURL *_url;
    NSDictionary *_postBody;
}

@property (nonatomic) BOOL authenticatePlayerOnCompletion; // @synthesize authenticatePlayerOnCompletion=_authenticatePlayerOnCompletion;
@property (strong, nonatomic) NSArray *availableExternalServices; // @synthesize availableExternalServices=_availableExternalServices;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) NSDictionary *postBody; // @synthesize postBody=_postBody;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)accountRemoteUIControllerForPlayer:(id)arg1 mode:(long long)arg2 url:(id)arg3 postBody:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)bagKey;
- (void)dealloc;
- (id)fallbackURL;
- (void)fetchAvailableExternalServicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchFacebookAuthTokenWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchICloudAuthTokenWithHandler:(CDUnknownBlockType)arg1;
- (void)fireCompletionHandler;
- (id)initWithMode:(long long)arg1;
- (id)initWithMode:(long long)arg1 player:(id)arg2;
- (id)postBodyForInitialLoad;
- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updatePostbackDictionary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
