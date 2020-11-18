//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/NSCoding-Protocol.h>
#import <Metal/NSCopying-Protocol.h>

@class NSString;

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding>
{
}

@property (readonly) unsigned long long dirtySize; // @dynamic dirtySize;
@property (readonly) NSString *memoryPool; // @dynamic memoryPool;
@property (readonly) BOOL pageoffRequired; // @dynamic pageoffRequired;
@property (readonly) BOOL purgeable; // @dynamic purgeable;
@property (readonly) unsigned long long residentSize; // @dynamic residentSize;
@property (readonly) unsigned long long uniqueIdentifier; // @dynamic uniqueIdentifier;
@property (readonly) unsigned long long virtualSize; // @dynamic virtualSize;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
