//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IOSurface/NSSecureCoding-Protocol.h>

@interface IOSurface : NSObject <NSSecureCoding>
{
    void *_impl;
}

@property (readonly) long long allocationSize;
@property (readonly) BOOL allowsPixelSizeCasting;
@property (readonly) void *baseAddress;
@property (readonly) long long bytesPerElement;
@property (readonly) long long bytesPerRow;
@property (readonly) long long elementHeight;
@property (readonly) long long elementWidth;
@property (readonly) long long height;
@property (readonly, getter=isInUse) BOOL inUse;
@property (readonly) int localUseCount;
@property (readonly) unsigned int pixelFormat;
@property (readonly) unsigned long long planeCount;
@property (readonly) unsigned int seed;
@property (readonly) long long width;

+ (BOOL)supportsSecureCoding;
- (unsigned long long)_cfTypeID;
- (id)allAttachments;
- (id)attachmentForKey:(id)arg1;
- (void *)baseAddressOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)bytesPerElementOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)bytesPerRowOfPlaneAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)decrementUseCount;
- (long long)elementHeightOfPlaneAtIndex:(unsigned long long)arg1;
- (long long)elementWidthOfPlaneAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)heightOfPlaneAtIndex:(unsigned long long)arg1;
- (void)incrementUseCount;
- (id)initWithClientBuffer:(struct __IOSurfaceClient *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithProperties:(id)arg1;
- (id)initWithSurfaceID:(unsigned int)arg1;
- (BOOL)isDisplayable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSysMemOnly;
- (int)lockWithOptions:(unsigned int)arg1 seed:(unsigned int *)arg2;
- (unsigned long long)protectionOptions;
- (unsigned long long)registryID;
- (void)removeAllAttachments;
- (void)removeAttachmentForKey:(id)arg1;
- (void)setAllAttachments:(id)arg1;
- (void)setAttachment:(id)arg1 forKey:(id)arg2;
- (int)setPurgeable:(unsigned int)arg1 oldState:(unsigned int *)arg2;
- (void)setTimestamp:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)supportsProtectionOptions:(unsigned long long)arg1;
- (unsigned long long)timestampAtIndex:(unsigned long long)arg1;
- (unsigned long long)traceID;
- (int)unlockWithOptions:(unsigned int)arg1 seed:(unsigned int *)arg2;
- (long long)widthOfPlaneAtIndex:(unsigned long long)arg1;

@end
