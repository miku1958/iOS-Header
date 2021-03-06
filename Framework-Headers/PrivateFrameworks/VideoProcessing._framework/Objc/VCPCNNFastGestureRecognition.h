//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VCPCNNModelEspresso;

@interface VCPCNNFastGestureRecognition : NSObject
{
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)detector;
- (void).cxx_destruct;
- (int)createInput:(float *)arg1 keypoints:(struct CGPoint *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (void)dealloc;
- (int)gestureDetection:(struct CGPoint *)arg1 score:(float *)arg2;
- (int)getDetectionScore:(float *)arg1;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (id)init;
- (int)planDestroy;

@end

