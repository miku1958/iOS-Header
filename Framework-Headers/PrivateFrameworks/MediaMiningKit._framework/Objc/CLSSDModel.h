//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSClassificationBasedSignalModel-Protocol.h>

@class CLSSignalNode, NSString;

@interface CLSSDModel : NSObject <CLSClassificationBasedSignalModel>
{
    unsigned long long _version;
    unsigned long long _minimumSupportedVersion;
    CLSSignalNode *_foodNode;
    CLSSignalNode *_landscapeCityscapeNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long minimumSupportedVersion; // @synthesize minimumSupportedVersion=_minimumSupportedVersion;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version; // @synthesize version=_version;

+ (unsigned long long)currentAnalyzerVersion;
+ (unsigned long long)latestVersion;
+ (id)modelWithVersion:(unsigned long long)arg1;
+ (id)name;
- (void).cxx_destruct;
- (id)initWithVersion:(unsigned long long)arg1;
- (BOOL)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)modelInfo;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (void)setupVersion33;
- (void)setupVersion51_4;

@end

