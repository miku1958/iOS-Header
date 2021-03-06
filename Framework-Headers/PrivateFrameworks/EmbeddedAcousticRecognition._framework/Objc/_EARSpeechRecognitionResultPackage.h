//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class _EARAudioAnalytics, _EARLatticeMitigatorResult, _EARSpeechRecognition;

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying>
{
    BOOL _recognitionIsFormatted;
    BOOL _isFinal;
    _EARSpeechRecognition *_recognition;
    _EARSpeechRecognition *_preITNRecognition;
    _EARAudioAnalytics *_audioAnalytics;
    double _utteranceStart;
    _EARLatticeMitigatorResult *_latticeMitigatorResult;
}

@property (readonly, copy, nonatomic) _EARAudioAnalytics *audioAnalytics; // @synthesize audioAnalytics=_audioAnalytics;
@property (readonly, nonatomic) BOOL isFinal; // @synthesize isFinal=_isFinal;
@property (readonly, copy, nonatomic) _EARLatticeMitigatorResult *latticeMitigatorResult; // @synthesize latticeMitigatorResult=_latticeMitigatorResult;
@property (readonly, copy, nonatomic) _EARSpeechRecognition *preITNRecognition; // @synthesize preITNRecognition=_preITNRecognition;
@property (readonly, copy, nonatomic) _EARSpeechRecognition *recognition; // @synthesize recognition=_recognition;
@property (readonly, nonatomic) BOOL recognitionIsFormatted; // @synthesize recognitionIsFormatted=_recognitionIsFormatted;
@property (readonly, nonatomic) double utteranceStart; // @synthesize utteranceStart=_utteranceStart;

- (void).cxx_destruct;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(double)arg6;
- (id)_initWithRecognition:(id)arg1 preITNRecognition:(id)arg2 recognitionIsFormatted:(BOOL)arg3 isFinal:(BOOL)arg4 audioAnalytics:(id)arg5 utteranceStart:(double)arg6 latticeMitigatorResult:(id)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)nBestResults;

@end

