//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IdentityLookup/NSObject-Protocol.h>

@class ILMessageFilterExtensionContext, ILMessageFilterReportRequest;

@protocol ILMessageFilterReportHandling <NSObject>
- (void)handleReportRequest:(ILMessageFilterReportRequest *)arg1 context:(ILMessageFilterExtensionContext *)arg2 completion:(void (^)(void))arg3;
@end
