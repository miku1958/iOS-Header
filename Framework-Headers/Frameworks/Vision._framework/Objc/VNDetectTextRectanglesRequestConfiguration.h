//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration
{
    BOOL _reportCharacterBoxes;
    BOOL _detectDiacritics;
    BOOL _minimizeFalseDetections;
    unsigned long long _algorithm;
    unsigned long long _minimumCharacterPixelHeight;
    NSString *_textRecognition;
}

@property (nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property (nonatomic) BOOL detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property (nonatomic) BOOL minimizeFalseDetections; // @synthesize minimizeFalseDetections=_minimizeFalseDetections;
@property (nonatomic) unsigned long long minimumCharacterPixelHeight; // @synthesize minimumCharacterPixelHeight=_minimumCharacterPixelHeight;
@property (nonatomic) BOOL reportCharacterBoxes; // @synthesize reportCharacterBoxes=_reportCharacterBoxes;
@property (copy, nonatomic) NSString *textRecognition; // @synthesize textRecognition=_textRecognition;

- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)arg1;

@end

