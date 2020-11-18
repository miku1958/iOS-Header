//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocs/BRCancellable-Protocol.h>

@class NSDictionary, NSObject, NSString;
@protocol BRCancellable;

@protocol BROperationClient <BRCancellable>
- (NSString *)description;
- (oneway void)progressCallbackWithTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)setRemoteOperationProxy:(NSObject<BRCancellable> *)arg1 userInfo:(NSDictionary *)arg2;
@end

