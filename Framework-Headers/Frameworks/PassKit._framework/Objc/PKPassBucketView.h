//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, PKPass, PKPassBucketTemplate, PKPassColorProfile;

@interface PKPassBucketView : UIView
{
    NSMutableArray *_fieldViews;
    long long _background;
    PKPass *_pass;
    PKPassBucketTemplate *_bucketTemplate;
    PKPassColorProfile *_colorProfile;
    NSArray *_bucket;
}

@property (strong, nonatomic) NSArray *bucket; // @synthesize bucket=_bucket;
@property (strong, nonatomic) PKPassBucketTemplate *bucketTemplate; // @synthesize bucketTemplate=_bucketTemplate;
@property (strong, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;
@property (strong, nonatomic) PKPass *pass; // @synthesize pass=_pass;

- (long long)_backgroundForBucketTemplate:(id)arg1;
- (id)_fieldViewsByWidth;
- (void)_measureAndFitEvenlySizedSubviews;
- (void)_measureAndFitVariablySizedSubviews;
- (void)_updateSubviews;
- (void)dealloc;
- (id)description;
- (void)layoutSubviews;
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
