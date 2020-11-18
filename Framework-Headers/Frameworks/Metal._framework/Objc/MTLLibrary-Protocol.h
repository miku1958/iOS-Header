//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol MTLDevice, MTLFunction;

@protocol MTLLibrary <NSObject>

@property (readonly) id<MTLDevice> device;
@property (readonly) NSArray *functionNames;
@property (copy) NSString *label;

- (id<MTLFunction>)newFunctionWithName:(NSString *)arg1;
@end
