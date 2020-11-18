//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, NSURL, NSUUID;

@protocol _NCWidgetViewController_Service_IPC
- (void)__openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__performUpdateWithReplyHandler:(void (^)(unsigned long long, BOOL))arg1;
- (void)__requestEncodedLayerTreeToURL:(NSURL *)arg1 withCodingImageFormat:(NSString *)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)__updateVisibilityState:(long long)arg1;

@optional
- (void)__setActiveDisplayMode:(long long)arg1;
- (void)__setMaximumSize:(struct CGSize)arg1 forDisplayMode:(long long)arg2;
@end

