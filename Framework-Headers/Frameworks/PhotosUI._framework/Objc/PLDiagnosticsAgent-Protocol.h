//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol PLDiagnosticsAgent
- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(void (^)(NSString *))arg1;
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(void (^)(NSString *))arg1;
- (void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(void (^)(NSString *))arg2;
@end

