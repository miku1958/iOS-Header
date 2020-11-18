//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMethodSignature;

__attribute__((visibility("hidden")))
@interface _NSXPCInterfaceMethodInfo : NSObject
{
    NSMethodSignature *_replyMethodSignature;
    int _replyPosition;
    NSArray *_replyArguments;
    NSArray *_arguments;
    unsigned long long _version;
    Class _returnClass;
    BOOL _sendsProxyInArgument;
    BOOL _receivesProxyInReply;
}

@property (copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property BOOL receivesProxyInReply; // @synthesize receivesProxyInReply=_receivesProxyInReply;
@property (copy) NSArray *replyArguments; // @synthesize replyArguments=_replyArguments;
@property (strong) NSMethodSignature *replyMethodSignature; // @synthesize replyMethodSignature=_replyMethodSignature;
@property int replyPosition; // @synthesize replyPosition=_replyPosition;
@property Class returnClass; // @synthesize returnClass=_returnClass;
@property BOOL sendsProxyInArgument; // @synthesize sendsProxyInArgument=_sendsProxyInArgument;
@property unsigned long long version; // @synthesize version=_version;

- (void)dealloc;
- (id)init;

@end
