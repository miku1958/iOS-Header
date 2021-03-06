//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AXMTextDetectionOptions : NSObject <NSSecureCoding>
{
    BOOL _usesLanguageCorrection;
    BOOL _correctSpelling;
    unsigned long long _recognitionLevel;
    double _normalizedMinimumTextHeightRatio;
    NSArray *_textDetectionLocales;
}

@property (nonatomic) BOOL correctSpelling; // @synthesize correctSpelling=_correctSpelling;
@property (nonatomic) double normalizedMinimumTextHeightRatio; // @synthesize normalizedMinimumTextHeightRatio=_normalizedMinimumTextHeightRatio;
@property (nonatomic) unsigned long long recognitionLevel; // @synthesize recognitionLevel=_recognitionLevel;
@property (strong, nonatomic) NSArray *textDetectionLocales; // @synthesize textDetectionLocales=_textDetectionLocales;
@property (nonatomic) BOOL usesLanguageCorrection; // @synthesize usesLanguageCorrection=_usesLanguageCorrection;

+ (id)defaultOptions;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

