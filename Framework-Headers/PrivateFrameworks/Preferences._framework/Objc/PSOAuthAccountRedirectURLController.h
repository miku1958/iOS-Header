//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject
{
    NSMapTable *_redirectHandlerMap;
}

@property (strong, nonatomic) NSMapTable *redirectHandlerMap; // @synthesize redirectHandlerMap=_redirectHandlerMap;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_redirectURLFromURL:(id)arg1;
- (BOOL)handleOAuthRedirectURL:(id)arg1;
- (id)init;
- (void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(CDUnknownBlockType)arg2;
- (void)unRegisterOAuthClientForRedirectURL:(id)arg1;

@end
