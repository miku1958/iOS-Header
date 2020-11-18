//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSDictionary, NSString;

@interface CAContext : NSObject
{
}

@property BOOL colorMatchUntaggedContent; // @dynamic colorMatchUntaggedContent;
@property struct CGColorSpace *colorSpace; // @dynamic colorSpace;
@property (copy) NSString *contentsFormat; // @dynamic contentsFormat;
@property (readonly) unsigned int contextId; // @dynamic contextId;
@property (strong) CALayer *layer; // @dynamic layer;
@property float level; // @dynamic level;
@property (readonly) NSDictionary *options; // @dynamic options;
@property (getter=isSecure) BOOL secure; // @dynamic secure;
@property (readonly) BOOL valid; // @dynamic valid;

+ (id)allContexts;
+ (id)currentContext;
+ (id)localContext;
+ (id)localContextWithOptions:(id)arg1;
+ (id)objectForSlot:(unsigned int)arg1;
+ (id)remoteContext;
+ (id)remoteContextWithOptions:(id)arg1;
+ (void)setClientPort:(unsigned int)arg1;
- (unsigned int)createFencePort;
- (unsigned int)createImageSlot:(struct CGSize)arg1 hasAlpha:(BOOL)arg2;
- (unsigned int)createImageSlot:(struct CGSize)arg1 hasAlpha:(BOOL)arg2 extendedColors:(BOOL)arg3;
- (unsigned int)createSlot;
- (void)deleteSlot:(unsigned int)arg1;
- (void)invalidate;
- (void)invalidateFences;
- (void)orderAbove:(unsigned int)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;

@end

