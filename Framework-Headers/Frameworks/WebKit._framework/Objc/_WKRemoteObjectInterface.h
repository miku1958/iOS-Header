//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, Protocol;

@interface _WKRemoteObjectInterface : NSObject
{
    struct HashMap<SEL *, WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow, 16>, WTF::PtrHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<WTF::Vector<WTF::RetainPtr<NSSet>, 0, WTF::CrashOnOverflow, 16>>> _allowedArgumentClasses;
    struct RetainPtr<NSString> _identifier;
    Protocol *_protocol;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;

+ (id)remoteObjectInterfaceWithProtocol:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const Vector_66be88e3 *)_allowedArgumentClassesForSelector:(SEL)arg1;
- (id)_methodSignatureForSelector:(SEL)arg1;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2;
- (id)description;
- (id)initWithProtocol:(id)arg1 identifier:(id)arg2;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3;

@end

