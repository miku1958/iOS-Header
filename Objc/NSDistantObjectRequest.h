//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConnection, NSInvocation;

@interface NSDistantObjectRequest : NSObject
{
}

@property (readonly, strong) NSConnection *connection;
@property (readonly, strong) id conversation;
@property (readonly, strong) NSInvocation *invocation;

- (void)replyWithException:(id)arg1;

@end

