//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSURL;

@protocol BarcodeSupportHelperProtocol
- (void)processAppClipImageWithURL:(NSURL *)arg1 scale:(double)arg2 reply:(void (^)(NSURL *))arg3;
- (void)setUpQRCodeControlCenterModuleWithReply:(void (^)(BOOL, NSError *))arg1;
@end

