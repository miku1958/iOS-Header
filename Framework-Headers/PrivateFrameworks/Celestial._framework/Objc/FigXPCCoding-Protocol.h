//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/NSObject-Protocol.h>

@class NSObject;
@protocol OS_xpc_object;

@protocol FigXPCCoding <NSObject>
- (NSObject<OS_xpc_object> *)copyXPCEncoding;
- (id)initWithXPCEncoding:(NSObject<OS_xpc_object> *)arg1;
@end

