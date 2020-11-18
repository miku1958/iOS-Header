//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMTextLayoutManager, NSArray;

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding>
{
    AXMTextLayoutManager *_textLayoutManager;
    NSArray *_recognitionLanguages;
    NSArray *_customWords;
}

@property (copy, nonatomic) NSArray *customWords; // @synthesize customWords=_customWords;
@property (copy, nonatomic) NSArray *recognitionLanguages; // @synthesize recognitionLanguages=_recognitionLanguages;

+ (long long)_vnRequestTextRecognitionLevelForAXMTextRecognitionLevel:(unsigned long long)arg1;
+ (BOOL)isSupported;
+ (id)supportedRecognitionLanguagesForFlavor:(unsigned long long)arg1 textRecognitionLevel:(unsigned long long)arg2 error:(id *)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)title;
- (void).cxx_destruct;
- (void)_evaluateByDetectingTextRectangles:(id)arg1 textDetectionOptions:(id)arg2;
- (void)_evaluateByRecognizingText:(id)arg1 textDetectionOptions:(id)arg2;
- (id)_visionTextDetectionOptionForLanguage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1;
- (void)freeResources;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)shouldEvaluate:(id)arg1;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
