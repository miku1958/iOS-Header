//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class BSSettings, NSArray, NSDate, NSString, SSEnvironmentDescriptionAppleInternalOptions, SSImageSurface, SSUIServiceOptions;

@interface SSEnvironmentDescription : NSObject <SSLoggable, BSXPCCoding>
{
    NSArray *_elements;
    NSString *_identifier;
    NSString *_sessionIdentifier;
    unsigned long long _presentationMode;
    BOOL _canAutosaveToFiles;
    BOOL _skipShutterSound;
    unsigned int _externalFlashLayerContextID;
    SSImageSurface *_imageSurface;
    double _imageScale;
    SSUIServiceOptions *_serviceOptions;
    NSDate *_date;
    unsigned long long _externalFlashLayerRenderID;
    SSEnvironmentDescriptionAppleInternalOptions *_appleInternalOptions;
    NSString *_betaApplicationBundleID;
    NSString *_betaApplicationName;
    struct CGSize _imagePixelSize;
}

@property (strong, nonatomic) SSEnvironmentDescriptionAppleInternalOptions *appleInternalOptions; // @synthesize appleInternalOptions=_appleInternalOptions;
@property (copy, nonatomic) NSString *betaApplicationBundleID; // @synthesize betaApplicationBundleID=_betaApplicationBundleID;
@property (copy, nonatomic) NSString *betaApplicationName; // @synthesize betaApplicationName=_betaApplicationName;
@property (readonly, nonatomic) BSSettings *bsSettings;
@property (nonatomic) BOOL canAutosaveToFiles; // @synthesize canAutosaveToFiles=_canAutosaveToFiles;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *elements; // @synthesize elements=_elements;
@property (nonatomic) unsigned int externalFlashLayerContextID; // @synthesize externalFlashLayerContextID=_externalFlashLayerContextID;
@property (nonatomic) unsigned long long externalFlashLayerRenderID; // @synthesize externalFlashLayerRenderID=_externalFlashLayerRenderID;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) struct CGSize imagePixelSize; // @synthesize imagePixelSize=_imagePixelSize;
@property (readonly, nonatomic) struct CGSize imagePointSize;
@property (nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
@property (strong, nonatomic) SSImageSurface *imageSurface; // @synthesize imageSurface=_imageSurface;
@property (readonly, nonatomic) NSString *loggableDescription;
@property (nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property (strong, nonatomic) SSUIServiceOptions *serviceOptions; // @synthesize serviceOptions=_serviceOptions;
@property (copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property (nonatomic) BOOL skipShutterSound; // @synthesize skipShutterSound=_skipShutterSound;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setDebugElements:(id)arg1;
- (void)takeElementsFromDisplayLayout:(id)arg1;

@end

