//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol UAUserActivityDebugLoggingProtocol <NSObject>
- (void)doGetLoggingFileForClient:(NSString *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(NSFileHandle *, NSError *))arg3;
@end

