//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class NSObject;
@protocol OS_xpc_object;

@protocol BSXPCCoding <NSObject>
- (void)encodeWithXPCDictionary:(NSObject<OS_xpc_object> *)arg1;
- (id)initWithXPCDictionary:(NSObject<OS_xpc_object> *)arg1;

@optional
- (Class)fallbackXPCEncodableClass;
@end
