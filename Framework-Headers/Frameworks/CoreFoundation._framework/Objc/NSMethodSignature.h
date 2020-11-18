//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSMethodSignature : NSObject
{
    void *_private;
    void *_reserved[6];
}

@property (readonly) unsigned long long frameLength;
@property (readonly) unsigned long long methodReturnLength;
@property (readonly) const char *methodReturnType;
@property (readonly) unsigned long long numberOfArguments;

+ (id)signatureWithObjCTypes:(const char *)arg1;
- (struct NSMethodFrameArgInfo *)_argInfo:(long long)arg1;
- (Class)_classForObjectAtArgumentIndex:(long long)arg1;
- (CDStruct_52991635 *)_frameDescriptor;
- (BOOL)_isHiddenStructRet;
- (id)_protocolsForObjectAtArgumentIndex:(long long)arg1;
- (id)_signatureForBlockAtArgumentIndex:(long long)arg1;
- (id)_typeString;
- (void)dealloc;
- (id)debugDescription;
- (void)finalize;
- (const char *)getArgumentTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOneway;

@end

