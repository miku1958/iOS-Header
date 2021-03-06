//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveInputPredictionsInternals/PSGWordBoundarySuggestionsExpConfigProtocol-Protocol.h>

@class NSString;

@interface PSGWordBoundarySuggestionsExpConfigDefaults : NSObject <PSGWordBoundarySuggestionsExpConfigProtocol>
{
    BOOL _isMLModelEnabled;
    NSString *_treatmentName;
    NSString *_experimentId;
    NSString *_treatmentId;
    NSString *_inferenceModelConfigPath;
    NSString *_espressoBinFilePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *espressoBinFilePath; // @synthesize espressoBinFilePath=_espressoBinFilePath;
@property (readonly, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *inferenceModelConfigPath; // @synthesize inferenceModelConfigPath=_inferenceModelConfigPath;
@property (readonly, nonatomic) BOOL isMLModelEnabled; // @synthesize isMLModelEnabled=_isMLModelEnabled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;
@property (readonly, nonatomic) NSString *treatmentName; // @synthesize treatmentName=_treatmentName;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToConfig:(id)arg1;

@end

