//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSXPCInterface;

@protocol _HKXPCExportable <NSObject>
- (void)connectionInvalidated;
- (NSXPCInterface *)exportedInterface;
- (NSXPCInterface *)remoteInterface;

@optional
- (void)connectionConfigured;
- (void)connectionInterrupted;
@end

