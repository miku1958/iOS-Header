//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface _EARSpeakerCodeInfo : NSObject
{
    BOOL _isSpeakerCodeUsed;
    NSString *_trainingSpeakerCode;
    NSString *_inferenceSpeakerCode;
    NSString *_accumulatedGradient;
    NSNumber *_numFrames;
    NSNumber *_nnetVersion;
    NSNumber *_trainingOffset;
    NSNumber *_recognitionOffset;
}

@property (readonly, nonatomic) NSString *accumulatedGradient; // @synthesize accumulatedGradient=_accumulatedGradient;
@property (copy, nonatomic) NSString *inferenceSpeakerCode; // @synthesize inferenceSpeakerCode=_inferenceSpeakerCode;
@property (nonatomic) BOOL isSpeakerCodeUsed; // @synthesize isSpeakerCodeUsed=_isSpeakerCodeUsed;
@property (readonly, nonatomic) NSNumber *nnetVersion; // @synthesize nnetVersion=_nnetVersion;
@property (copy, nonatomic) NSNumber *numFrames; // @synthesize numFrames=_numFrames;
@property (readonly, nonatomic) NSNumber *recognitionOffset; // @synthesize recognitionOffset=_recognitionOffset;
@property (readonly, nonatomic) NSNumber *trainingOffset; // @synthesize trainingOffset=_trainingOffset;
@property (readonly, nonatomic) NSString *trainingSpeakerCode; // @synthesize trainingSpeakerCode=_trainingSpeakerCode;

- (void).cxx_destruct;
- (id)initWithLanguage:(id)arg1;

@end

