//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DiagnosticExtensionsDaemon/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol DEDWorkerProtocol <NSObject>
- (void)adoptFiles:(NSArray *)arg1 forSession:(NSString *)arg2;
- (void)cancelSession:(NSString *)arg1;
- (void)commitSession:(NSString *)arg1;
- (void)getSessionStatusWithSession:(NSString *)arg1;
- (void)listAvailableExtensionsForSession:(NSString *)arg1;
- (void)pingSession:(NSString *)arg1;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)terminateExtension:(NSString *)arg1 info:(NSDictionary *)arg2 session:(NSString *)arg3;
- (long long)transportType;
@end
