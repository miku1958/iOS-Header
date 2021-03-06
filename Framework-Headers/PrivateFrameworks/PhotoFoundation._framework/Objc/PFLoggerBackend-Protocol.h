//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/NSObject-Protocol.h>

@class NSString;

@protocol PFLoggerBackend <NSObject>

@property (readonly, nonatomic) BOOL allowsConcurrentAccess;
@property (readonly, nonatomic) BOOL formatsMessage;
@property (readonly, nonatomic) BOOL outputsToDebuggerConsole;

- (void)flushWithCompletionHandler:(void (^)(void))arg1;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(NSString *)arg2 subsystem:(NSString *)arg3 level:(int)arg4 message:(NSString *)arg5 format:(NSString *)arg6 args:(struct __va_list_tag [1])arg7;
@end

