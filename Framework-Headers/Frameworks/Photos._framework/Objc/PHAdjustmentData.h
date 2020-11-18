//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PHAdjustmentData : NSObject <NSSecureCoding>
{
    NSString *_formatIdentifier;
    NSString *_formatVersion;
    NSData *_data;
    long long _baseVersion;
}

@property (nonatomic) long long baseVersion; // @synthesize baseVersion=_baseVersion;
@property (readonly) NSData *data; // @synthesize data=_data;
@property (copy, nonatomic) NSString *formatIdentifier; // @synthesize formatIdentifier=_formatIdentifier;
@property (copy, nonatomic) NSString *formatVersion; // @synthesize formatVersion=_formatVersion;
@property (readonly, getter=isOpaque) BOOL opaque;

+ (long long)adjustmentBaseVersionFromImageRequestVersion:(long long)arg1;
+ (long long)adjustmentBaseVersionFromVideoRequestVersion:(long long)arg1;
+ (long long)imageRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
+ (id)opaqueAdjustmentData;
+ (id)photoEditModelWithAdjustmentData:(id)arg1 asset:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (long long)videoRequestVersionFromAdjustmentBaseVersion:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)_canBeHandledByClientUsingVerificationBlock:(CDUnknownBlockType)arg1;
- (BOOL)_contentEditingHasAdjustments;
- (BOOL)_hasAdjustments;
- (long long)_requiredBaseVersionWithCanHandleAdjustmentData:(BOOL)arg1 assetIsVideo:(BOOL)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3;

@end

