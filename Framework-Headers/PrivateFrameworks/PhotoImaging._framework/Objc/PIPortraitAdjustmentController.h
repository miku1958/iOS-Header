//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary, NSNumber, NSString;

@interface PIPortraitAdjustmentController : PIAdjustmentController
{
    long long _version;
}

@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSDictionary *portraitInfo;
@property (copy, nonatomic) NSNumber *spillMatteAllowed;
@property (nonatomic) double strength;
@property (nonatomic) long long version; // @synthesize version=_version;

+ (id)kindKey;
+ (id)portraitInfoKey;
+ (id)spillMatteAllowedKey;
+ (id)strengthKey;
- (BOOL)canRenderPortraitEffect;
- (id)initWithAdjustment:(id)arg1;
- (BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2;

@end

