//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCopying-Protocol.h>

@class NSDocInfo, NSString;

__attribute__((visibility("hidden")))
@interface NSLeafProxy <NSCopying>
{
    Class isa;
    NSString *dir;
    NSString *file;
    NSDocInfo *docInfo;
    long long refCount;
    id realObject;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)forwardInvocation:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)autorelease;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3;
- (BOOL)isProxy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)reallyDealloc;
- (void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

