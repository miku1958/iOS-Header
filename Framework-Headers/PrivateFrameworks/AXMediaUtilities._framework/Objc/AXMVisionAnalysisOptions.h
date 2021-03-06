//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMTextDetectionOptions, NSArray, NSData;

@interface AXMVisionAnalysisOptions : NSObject <NSSecureCoding>
{
    BOOL _detectFaceRectangles;
    BOOL _detectFaceNames;
    BOOL _detectFaceAttributes;
    BOOL _detectFaceExpressions;
    BOOL _detectFaceLandmarks;
    BOOL _detectFacePose;
    BOOL _detectScenes;
    BOOL _detectNSFW;
    BOOL _detectSignificantEvents;
    BOOL _detectModelClassifications;
    BOOL _detectCaptions;
    BOOL _detectTraits;
    BOOL _detectRectangles;
    BOOL _detectHorizon;
    BOOL _detectProminentObjects;
    BOOL _detectAesthetics;
    BOOL _detectIconClass;
    BOOL _detectAXElements;
    BOOL _detectText;
    BOOL _includeImageInResult;
    BOOL _preserveInputImageSize;
    long long _clientID;
    NSData *_equivalenceToken;
    AXMTextDetectionOptions *_textDetectionOptions;
    NSArray *_ignoredLayerContextIDs;
    NSArray *_includedLayerContextIDs;
}

@property (nonatomic) long long clientID; // @synthesize clientID=_clientID;
@property (nonatomic) BOOL detectAXElements; // @synthesize detectAXElements=_detectAXElements;
@property (nonatomic) BOOL detectAesthetics; // @synthesize detectAesthetics=_detectAesthetics;
@property (nonatomic) BOOL detectCaptions; // @synthesize detectCaptions=_detectCaptions;
@property (nonatomic) BOOL detectFaceAttributes; // @synthesize detectFaceAttributes=_detectFaceAttributes;
@property (nonatomic) BOOL detectFaceExpressions; // @synthesize detectFaceExpressions=_detectFaceExpressions;
@property (nonatomic) BOOL detectFaceLandmarks; // @synthesize detectFaceLandmarks=_detectFaceLandmarks;
@property (nonatomic) BOOL detectFaceNames; // @synthesize detectFaceNames=_detectFaceNames;
@property (nonatomic) BOOL detectFacePose; // @synthesize detectFacePose=_detectFacePose;
@property (nonatomic) BOOL detectFaceRectangles; // @synthesize detectFaceRectangles=_detectFaceRectangles;
@property (readonly, nonatomic) BOOL detectFaces;
@property (nonatomic) BOOL detectHorizon; // @synthesize detectHorizon=_detectHorizon;
@property (nonatomic) BOOL detectIconClass; // @synthesize detectIconClass=_detectIconClass;
@property (nonatomic) BOOL detectModelClassifications; // @synthesize detectModelClassifications=_detectModelClassifications;
@property (nonatomic) BOOL detectNSFW; // @synthesize detectNSFW=_detectNSFW;
@property (nonatomic) BOOL detectProminentObjects; // @synthesize detectProminentObjects=_detectProminentObjects;
@property (nonatomic) BOOL detectRectangles; // @synthesize detectRectangles=_detectRectangles;
@property (nonatomic) BOOL detectScenes; // @synthesize detectScenes=_detectScenes;
@property (nonatomic) BOOL detectSignificantEvents; // @synthesize detectSignificantEvents=_detectSignificantEvents;
@property (nonatomic) BOOL detectText; // @synthesize detectText=_detectText;
@property (nonatomic) BOOL detectTraits; // @synthesize detectTraits=_detectTraits;
@property (strong, nonatomic) NSData *equivalenceToken; // @synthesize equivalenceToken=_equivalenceToken;
@property (readonly, nonatomic) BOOL hasDetectionsEnabled;
@property (strong, nonatomic) NSArray *ignoredLayerContextIDs; // @synthesize ignoredLayerContextIDs=_ignoredLayerContextIDs;
@property (nonatomic) BOOL includeImageInResult; // @synthesize includeImageInResult=_includeImageInResult;
@property (strong, nonatomic) NSArray *includedLayerContextIDs; // @synthesize includedLayerContextIDs=_includedLayerContextIDs;
@property (nonatomic) BOOL preserveInputImageSize; // @synthesize preserveInputImageSize=_preserveInputImageSize;
@property (strong, nonatomic) AXMTextDetectionOptions *textDetectionOptions; // @synthesize textDetectionOptions=_textDetectionOptions;

+ (id)defaultOptions;
+ (BOOL)supportsSecureCoding;
+ (id)voiceOverOptions;
- (void).cxx_destruct;
- (id)description;
- (void)disableAllDetectors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

