//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXDiagnosticsSettings : PXSettings
{
    BOOL _enableContextualGesture;
    BOOL _enableGenericService;
    BOOL _enableMemoriesRelatedService;
    BOOL _enableTitleFontService;
    BOOL _enableCompleteMyMomentService;
    BOOL _simulateLaunchedToTest;
    BOOL _enableScrollService;
    double _scrollSpeed;
    long long _scrollIterations;
}

@property (nonatomic) BOOL enableCompleteMyMomentService; // @synthesize enableCompleteMyMomentService=_enableCompleteMyMomentService;
@property (nonatomic) BOOL enableContextualGesture; // @synthesize enableContextualGesture=_enableContextualGesture;
@property (nonatomic) BOOL enableGenericService; // @synthesize enableGenericService=_enableGenericService;
@property (nonatomic) BOOL enableMemoriesRelatedService; // @synthesize enableMemoriesRelatedService=_enableMemoriesRelatedService;
@property (nonatomic) BOOL enableScrollService; // @synthesize enableScrollService=_enableScrollService;
@property (nonatomic) BOOL enableTitleFontService; // @synthesize enableTitleFontService=_enableTitleFontService;
@property (nonatomic) long long scrollIterations; // @synthesize scrollIterations=_scrollIterations;
@property (nonatomic) double scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property (nonatomic) BOOL simulateLaunchedToTest; // @synthesize simulateLaunchedToTest=_simulateLaunchedToTest;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)setDefaultValues;

@end

