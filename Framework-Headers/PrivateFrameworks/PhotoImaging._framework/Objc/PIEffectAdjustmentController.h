//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PIAdjustmentController.h>

@class NSString;

@interface PIEffectAdjustmentController : PIAdjustmentController
{
}

@property (nonatomic) double intensity;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) long long version;

+ (id)intensityKey;
+ (id)kindKey;
+ (id)versionKey;
- (BOOL)isSettingEqual:(id)arg1 forKey:(id)arg2;

@end
