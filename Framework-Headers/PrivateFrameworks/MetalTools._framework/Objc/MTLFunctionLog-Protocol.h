//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/NSObject-Protocol.h>

@class NSString;
@protocol MTLFunction, MTLFunctionLogDebugLocation;

@protocol MTLFunctionLog <NSObject>

@property (readonly, nonatomic) id<MTLFunctionLogDebugLocation> debugLocation;
@property (readonly, nonatomic) NSString *encoderLabel;
@property (readonly, nonatomic) id<MTLFunction> function;
@property (readonly, nonatomic) unsigned long long type;

@end

