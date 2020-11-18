//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRCPhotoEvaluatorResult;

@interface SCRCPhotoEvaluatorResults : NSObject
{
    SCRCPhotoEvaluatorResult *_blurResult;
    SCRCPhotoEvaluatorResult *_colorResult;
    SCRCPhotoEvaluatorResult *_luminanceResult;
}

@property (readonly, nonatomic) SCRCPhotoEvaluatorResult *blurResult; // @synthesize blurResult=_blurResult;
@property (readonly, nonatomic) SCRCPhotoEvaluatorResult *colorResult; // @synthesize colorResult=_colorResult;
@property (readonly, nonatomic) SCRCPhotoEvaluatorResult *luminanceResult; // @synthesize luminanceResult=_luminanceResult;

- (void).cxx_destruct;
- (id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 luminanceResult:(id)arg3;

@end
