//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveExperiments/PREResponsesMetricsProtocol-Protocol.h>
#import <ProactiveExperiments/PREResponsesTrialProtocol-Protocol.h>

@class NSString;

@interface PREResponsesTrialSimulator : NSObject <PREResponsesTrialProtocol, PREResponsesMetricsProtocol>
{
    NSString *_inferenceModelName;
    NSString *_inferenceModelFilePath;
    NSString *_inferenceModelConfigPath;
    NSString *_espressoBinFilePath;
    NSString *_lexiconFilePath;
    NSString *_experimentId;
    NSString *_treatmentId;
}

@property (readonly, nonatomic) NSString *espressoBinFilePath; // @synthesize espressoBinFilePath=_espressoBinFilePath;
@property (readonly, nonatomic) NSString *experimentId; // @synthesize experimentId=_experimentId;
@property (readonly, nonatomic) NSString *inferenceModelConfigPath; // @synthesize inferenceModelConfigPath=_inferenceModelConfigPath;
@property (readonly, nonatomic) NSString *inferenceModelFilePath; // @synthesize inferenceModelFilePath=_inferenceModelFilePath;
@property (readonly, nonatomic) NSString *inferenceModelName; // @synthesize inferenceModelName=_inferenceModelName;
@property (readonly, nonatomic) NSString *lexiconFilePath; // @synthesize lexiconFilePath=_lexiconFilePath;
@property (readonly, nonatomic) NSString *treatmentId; // @synthesize treatmentId=_treatmentId;

- (void).cxx_destruct;
- (id)init;
- (void)registerResponseTapped:(id)arg1;
- (void)registerResponsesGenerated:(id)arg1;

@end

