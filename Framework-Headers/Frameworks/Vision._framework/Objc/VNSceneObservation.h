//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNFeaturePrintObservation.h>

@class NSArray, NSString;

@interface VNSceneObservation : VNFeaturePrintObservation
{
    NSArray *_sceneprints;
    NSString *_sceneprintVersion;
}

@property (readonly, copy, nonatomic) NSString *sceneprintVersion; // @synthesize sceneprintVersion=_sceneprintVersion;
@property (readonly, nonatomic) NSArray *sceneprints; // @synthesize sceneprints=_sceneprints;

+ (id)observationWithSceneprints:(id)arg1;
+ (id)sceneprintCurrentVersion;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (unsigned long long)elementCount;
- (unsigned long long)elementType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 sceneprints:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

