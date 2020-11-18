//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSFastEnumeration-Protocol.h>
#import <SpriteKit/NSMutableCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
    int _storageLock;
    NSMutableArray *_storage;
}

@property (readonly, weak) NSArray *arrayRepresentation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithNSMutableArray:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObjectsInArray:(id)arg1;

@end

