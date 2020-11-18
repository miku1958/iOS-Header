//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, Protocol;

@interface _WKRemoteObjectInterface : NSObject
{
    struct RetainPtr<NSString> _identifier;
    struct HashMap<SEL *, MethodInfo, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo>> _methods;
    Protocol *_protocol;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;

+ (id)remoteObjectInterfaceWithProtocol:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const Vector_b2b96d16 *)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)arg1;
- (const Vector_b2b96d16 *)_allowedArgumentClassesForSelector:(SEL)arg1;
- (id)_methodSignatureForReplyBlockOfSelector:(SEL)arg1;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (id)debugDescription;
- (id)initWithProtocol:(id)arg1 identifier:(id)arg2;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;

@end

