//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSString, NSValue, QLPreviewContext;

@protocol QLRemotePreviewService <NSObject>
- (void)getPrinterProxyWithCompletionHandler:(void (^)(id<QLPrintingProtocol>))arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(QLPreviewContext *)arg2 completionHandler:(void (^)(NSError *, NSDictionary *))arg3;
- (void)previewControllerDidUpdatePreferredContentSize:(NSValue *)arg1;
- (void)previewControllerDidUpdateTitle:(NSString *)arg1;
- (void)previewDidAppear:(BOOL)arg1;
- (void)previewDidDisappear:(BOOL)arg1;
- (void)previewWillAppear:(BOOL)arg1;
- (void)previewWillDisappear:(BOOL)arg1;
@end

