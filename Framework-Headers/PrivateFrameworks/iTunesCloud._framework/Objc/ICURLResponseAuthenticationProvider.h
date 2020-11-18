//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICURLResponseAuthenticationProvider : NSObject
{
    long long _interactionLevel;
}

@property (readonly, nonatomic) long long interactionLevel; // @synthesize interactionLevel=_interactionLevel;

+ (id)defaultProvider;
- (id)initWithUserInteractionLevel:(long long)arg1;
- (void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

