//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSInvocation, NSString, TMLMethodDescriptor;

@interface TMLMethodCall : NSObject
{
    TMLMethodDescriptor *_methodDescriptor;
    SEL _selector;
    BOOL _classSelector;
    CDUnknownBlockType _block;
    NSInvocation *_invocation;
    NSArray *_argTypes;
}

@property (readonly, nonatomic) BOOL classMethod; // @synthesize classMethod=_classSelector;
@property (readonly, nonatomic) NSString *methodName;

- (void).cxx_destruct;
- (id)_callWithArguments:(id)arg1;
- (id)callWithArguments:(id)arg1;
- (id)initWithMethodDescriptor:(id)arg1 forClass:(Class)arg2;

@end

