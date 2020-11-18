//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol MTLDevice;

@protocol MTLFunction <NSObject>

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) NSArray *vertexAttributes;

@end

