//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DABookmarkDAV/NSObject-Protocol.h>

@class NSData, NSString;

@protocol CoreDAVLogDelegate <NSObject>
- (void)coreDAVLogDiagnosticMessage:(NSString *)arg1 atLevel:(long long)arg2;
- (long long)coreDAVLogLevel;
- (void)coreDAVLogTransmittedDataPartial:(NSData *)arg1;
- (long long)coreDAVOutputLevel;
- (void)coreDAVTransmittedDataFinished;
- (BOOL)shouldLogTransmittedData;

@optional
- (void)coreDAVLogRequestBody:(NSData *)arg1;
- (void)coreDAVLogResponseBody:(NSData *)arg1;
- (void)triggerOSLogFault;
@end

