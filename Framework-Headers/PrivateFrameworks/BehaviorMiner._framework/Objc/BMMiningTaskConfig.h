//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BMMiningTaskConfig : NSObject
{
    BOOL _interactionExtractedTopicFromAttachmentFactorInUse;
    NSString *_trialID;
    NSDictionary *_bmMiningTaskConfig;
}

@property (strong) NSDictionary *bmMiningTaskConfig; // @synthesize bmMiningTaskConfig=_bmMiningTaskConfig;
@property (nonatomic) BOOL interactionExtractedTopicFromAttachmentFactorInUse; // @synthesize interactionExtractedTopicFromAttachmentFactorInUse=_interactionExtractedTopicFromAttachmentFactorInUse;
@property (strong, nonatomic) NSString *trialID; // @synthesize trialID=_trialID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfigFilePath:(id)arg1;
- (id)initWithDefaultConfig;
- (BOOL)loadBMMiningTaskConfig:(id)arg1;
- (void)loadDefaultConfig;
- (void)updateFactorLevelsFromFilePath:(id)arg1;

@end
