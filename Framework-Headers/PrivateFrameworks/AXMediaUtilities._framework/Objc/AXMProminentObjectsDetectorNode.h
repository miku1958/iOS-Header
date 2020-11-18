//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode
{
    VNGenerateAttentionBasedSaliencyImageRequest *__imageSaliencyRequest;
}

@property (strong, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *_imageSaliencyRequest; // @synthesize _imageSaliencyRequest=__imageSaliencyRequest;

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
