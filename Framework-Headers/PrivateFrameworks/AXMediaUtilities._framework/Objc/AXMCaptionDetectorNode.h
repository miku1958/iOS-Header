//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class AXImageCaptionModel, AXMSceneDetectorNode, NSURL;

@interface AXMCaptionDetectorNode : AXMEvaluationNode
{
    AXMSceneDetectorNode *_sceneDetector;
}

@property (readonly, nonatomic) AXImageCaptionModel *effectiveCaptionModelInfo;
@property (readonly, nonatomic) NSURL *effectiveModelURL;
@property (nonatomic) unsigned long long genderStrategy;
@property (strong, nonatomic) NSURL *overrideModelURL;
@property (nonatomic) unsigned long long overrideScaleMethod;
@property (weak, nonatomic) AXMSceneDetectorNode *sceneDetector; // @synthesize sceneDetector=_sceneDetector;

+ (BOOL)isSupported;
+ (struct CGSize)preferredModelInputSize;
+ (BOOL)supportsSecureCoding;
+ (id)title;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;

@end
