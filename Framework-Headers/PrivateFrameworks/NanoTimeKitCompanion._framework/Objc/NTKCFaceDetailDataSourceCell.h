//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCell.h>

@class NSString, UIImageView;

@interface NTKCFaceDetailDataSourceCell : NTKCFaceDetailToggleCell
{
    NSString *_bundleIdentifier;
    UIImageView *_iconImageView;
}

@property (readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;

+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 andLabel:(id)arg2;
- (void)layoutSubviews;

@end

