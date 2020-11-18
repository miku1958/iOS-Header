//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUMedusaSettings : PXSettings
{
    double __desiredWidth;
    double __widthDelay;
    double __testStartDelay;
    double __testInterval;
    double __testIncrement;
}

@property (nonatomic) double _desiredWidth; // @synthesize _desiredWidth=__desiredWidth;
@property (nonatomic) double _testIncrement; // @synthesize _testIncrement=__testIncrement;
@property (nonatomic) double _testInterval; // @synthesize _testInterval=__testInterval;
@property (nonatomic) double _testStartDelay; // @synthesize _testStartDelay=__testStartDelay;
@property (nonatomic) double _widthDelay; // @synthesize _widthDelay=__widthDelay;

+ (void)runSizeTest;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;

@end

