//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMSemanticTextFactory, AXMTextLayoutManager;

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding>
{
    AXMSemanticTextFactory *_semanticTextFactory;
    AXMTextLayoutManager *_textLayoutManager;
}

@property (strong, nonatomic) AXMSemanticTextFactory *semanticTextFactory; // @synthesize semanticTextFactory=_semanticTextFactory;
@property (strong, nonatomic) AXMTextLayoutManager *textLayoutManager; // @synthesize textLayoutManager=_textLayoutManager;

+ (id)effectiveLanguagesFromOptions:(id)arg1;
+ (id)filterPreferredDetectionLanguages:(id)arg1 withSupportedDetectionLanguages:(id)arg2;
+ (BOOL)isSupported;
+ (long long)recognitionLevelFromOptions:(id)arg1;
+ (id)supportedDetectionLanguagesForLevel:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)textDetectionLanguagesFromOptions:(id)arg1;
+ (id)title;
- (void).cxx_destruct;
- (id)_textDetectionOptions:(id)arg1;
- (id)_textsForObservations:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)shouldEvaluate:(id)arg1;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end

