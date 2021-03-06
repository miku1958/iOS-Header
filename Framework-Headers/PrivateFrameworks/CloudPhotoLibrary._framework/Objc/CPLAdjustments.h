//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLResource, NSData, NSString;

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_adjustmentType;
    NSString *_adjustmentCompoundVersion;
    NSString *_adjustmentCreatorCode;
    unsigned long long _adjustmentSourceType;
    NSData *_simpleAdjustmentData;
    NSString *_similarToOriginalAdjustmentsFingerprint;
    NSString *_otherAdjustmentsFingerprint;
    unsigned long long _adjustmentRenderTypes;
    CPLResource *_adjustmentData;
    NSString *_creatorCode;
}

@property (copy, nonatomic) NSString *adjustmentCompoundVersion; // @synthesize adjustmentCompoundVersion=_adjustmentCompoundVersion;
@property (copy, nonatomic) NSString *adjustmentCreatorCode; // @synthesize adjustmentCreatorCode=_adjustmentCreatorCode;
@property (strong, nonatomic) CPLResource *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property (nonatomic) unsigned long long adjustmentRenderTypes; // @synthesize adjustmentRenderTypes=_adjustmentRenderTypes;
@property (nonatomic) unsigned long long adjustmentSourceType; // @synthesize adjustmentSourceType=_adjustmentSourceType;
@property (copy, nonatomic) NSString *adjustmentType; // @synthesize adjustmentType=_adjustmentType;
@property (copy, nonatomic) NSString *creatorCode; // @synthesize creatorCode=_creatorCode;
@property (copy, nonatomic) NSString *otherAdjustmentsFingerprint; // @synthesize otherAdjustmentsFingerprint=_otherAdjustmentsFingerprint;
@property (copy, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint; // @synthesize similarToOriginalAdjustmentsFingerprint=_similarToOriginalAdjustmentsFingerprint;
@property (strong, nonatomic) NSData *simpleAdjustmentData; // @synthesize simpleAdjustmentData=_simpleAdjustmentData;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)adjustmentSimpleDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

