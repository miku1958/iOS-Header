//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DCDocumentCameraViewServiceSessionRequest;

@protocol DCDocumentCameraViewServiceViewController
- (void)prepareForDisplayWithCompletion:(void (^)(struct CGSize))arg1;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)startSessionWithClientContext:(DCDocumentCameraViewServiceSessionRequest *)arg1 completion:(void (^)(DCDocumentCameraViewServiceSession *))arg2;
- (void)viewControllerWasDismissed;
@end

