//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface _UIHIDEventOrderedDescriptorSet : NSObject <NSCopying>
{
    NSMutableOrderedSet *_orderedDescriptors;
    NSMutableDictionary *_eventsByDescriptor;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

