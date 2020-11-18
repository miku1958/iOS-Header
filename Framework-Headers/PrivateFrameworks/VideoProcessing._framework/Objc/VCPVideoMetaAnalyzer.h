//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VCPVideoMetaAnalyzer : NSObject
{
}

@property (readonly, strong, nonatomic) NSDictionary *privateResults;
@property (readonly, strong, nonatomic) NSDictionary *publicResults;

+ (id)analyzerForTrackType:(id)arg1 withTransform:(struct CGAffineTransform)arg2 requestAnalyses:(unsigned long long)arg3 formatDescription:(struct opaqueCMFormatDescription *)arg4;
- (int)finalizeAnalysis;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;

@end
