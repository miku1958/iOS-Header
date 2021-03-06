//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/NSSecureCoding-Protocol.h>

@class NSLocale, NSString;

@interface _LTSpeechTranscription : NSObject <NSSecureCoding>
{
    BOOL _lowConfidence;
    NSLocale *_locale;
    NSString *_formattedString;
    NSString *_sanitizedFormattedString;
    double _minConfidence;
    double _maxConfidence;
    double _confidence;
}

@property (nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (copy, nonatomic) NSString *formattedString; // @synthesize formattedString=_formattedString;
@property (copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (nonatomic, getter=isLowConfidence) BOOL lowConfidence; // @synthesize lowConfidence=_lowConfidence;
@property (nonatomic) double maxConfidence; // @synthesize maxConfidence=_maxConfidence;
@property (nonatomic) double minConfidence; // @synthesize minConfidence=_minConfidence;
@property (copy, nonatomic) NSString *sanitizedFormattedString; // @synthesize sanitizedFormattedString=_sanitizedFormattedString;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormattedString:(id)arg1 locale:(id)arg2 confidence:(double)arg3 minConfidence:(double)arg4 maxConfidence:(double)arg5;
- (id)initWithRecognitionChoice:(id)arg1 inSausage:(id)arg2;

@end

