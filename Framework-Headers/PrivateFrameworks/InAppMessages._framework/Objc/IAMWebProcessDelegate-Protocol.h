//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InAppMessages/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol IAMWebProcessDelegate <NSObject>
- (void)webProcessJSODidCallClose;
- (void)webProcessJSODidCallOpen:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)webProcessJSODidCallPerformAction:(NSDictionary *)arg1 options:(NSDictionary *)arg2;
- (void)webProcessJSODidReportEvent:(NSDictionary *)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
@end

