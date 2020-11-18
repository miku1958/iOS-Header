//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSFastEnumeration-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
    struct _opaque_pthread_mutex_t _storageLock;
    NSMutableArray *_storage;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)initWithNSMapTable:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
