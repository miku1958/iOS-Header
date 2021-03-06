//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/JSExport-Protocol.h>

@class IKDOMDocument, NSDictionary, NSString;

@protocol SKUIJSApplication <JSExport>

@property (readonly) BOOL isRunningTests;
@property (readonly, nonatomic) BOOL pageRenderMetricsEnabled;

- (void)launchComplete:(NSDictionary *)arg1;
- (void)launchFailed;
- (void)sendDocumentMessage:(IKDOMDocument *)arg1:(NSString *)arg2:(NSDictionary *)arg3;
@end

