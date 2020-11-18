//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CPLFeatureVersionHistory : NSObject
{
    NSMutableDictionary *_anchorToVersion;
    NSMutableDictionary *_versionToAnchor;
    long long _currentFeatureVersion;
}

@property (readonly, nonatomic) long long currentFeatureVersion; // @synthesize currentFeatureVersion=_currentFeatureVersion;

- (void).cxx_destruct;
- (void)addSyncAnchor:(id)arg1 forFeatureVersion:(long long)arg2;
- (id)description;
- (void)enumerateHistoryWithBlock:(CDUnknownBlockType)arg1;
- (long long)featureVersionForSyncAnchor:(id)arg1;
- (id)initWithCurrentFeatureVersion:(long long)arg1;
- (id)syncAnchorForFeatureVersion:(long long)arg1;

@end

