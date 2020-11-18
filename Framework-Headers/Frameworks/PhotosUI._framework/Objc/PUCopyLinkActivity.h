//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUActivity.h>

#import <PhotosUI/PUMomentShareActivity-Protocol.h>

@class NSString, PUActivityItemSourceController;

__attribute__((visibility("hidden")))
@interface PUCopyLinkActivity : PUActivity <PUMomentShareActivity>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) PUActivityItemSourceController *itemSourceController;
@property (readonly) Class superclass;

+ (long long)activityCategory;
+ (BOOL)wantsMomentShareLinkForAssetCount:(long long)arg1;
- (id)_activityBundleImageConfiguration;
- (id)activityTitle;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;

@end

