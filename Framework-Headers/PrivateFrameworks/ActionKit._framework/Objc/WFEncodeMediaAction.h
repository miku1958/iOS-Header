//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class NSMutableArray;

@interface WFEncodeMediaAction : WFAction
{
    NSMutableArray *_exportSessions;
}

@property (strong, nonatomic) NSMutableArray *exportSessions; // @synthesize exportSessions=_exportSessions;

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;
- (void).cxx_destruct;
- (void)cancel;
- (void)encodeItems:(id)arg1 metadata:(id)arg2;
- (void)finishRunningWithError:(id)arg1;
- (void)getMetadataItems:(CDUnknownBlockType)arg1;
- (void)initializeParameters;
- (id)metadataForAsset:(id)arg1 newMetadata:(id)arg2;
- (id)nonEmptyStringValueForKey:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (void)updateSpeedVisibility;

@end

