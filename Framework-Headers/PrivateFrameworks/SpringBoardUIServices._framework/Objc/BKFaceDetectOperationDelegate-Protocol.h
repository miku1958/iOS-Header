//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/BKOperationDelegate-Protocol.h>

@class BKFaceDetectStateInfo, BKOperation;

@protocol BKFaceDetectOperationDelegate <BKOperationDelegate>

@optional
- (void)operation:(BKOperation *)arg1 faceDetectStateChanged:(BKFaceDetectStateInfo *)arg2;
@end
