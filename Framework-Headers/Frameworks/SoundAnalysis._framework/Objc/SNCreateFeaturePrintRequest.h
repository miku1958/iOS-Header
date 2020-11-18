//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>
#import <SoundAnalysis/NSSecureCoding-Protocol.h>
#import <SoundAnalysis/SNAnalyzerCreating-Protocol.h>
#import <SoundAnalysis/SNRequest-Protocol.h>

@class NSString;

@interface SNCreateFeaturePrintRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest>
{
    float _overlapFactor;
    long long _featurePrintType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long featurePrintType; // @synthesize featurePrintType=_featurePrintType;
@property (readonly) unsigned long long hash;
@property (nonatomic) float overlapFactor; // @synthesize overlapFactor=_overlapFactor;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createAnalyzerWithError:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCreateFeaturePrintRequest:(id)arg1;

@end
