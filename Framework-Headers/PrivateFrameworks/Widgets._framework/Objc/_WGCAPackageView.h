//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UICAPackageView.h>

@class NSString, NSURL;

@interface _WGCAPackageView : _UICAPackageView
{
    NSURL *_archiveURL;
}

@property (copy, nonatomic) NSURL *archiveURL; // @synthesize archiveURL=_archiveURL;
@property (readonly, copy, nonatomic) NSString *snapshotIdentifier;

+ (void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (BOOL)_supportsPushingBottomCornerRadiusToSubviews:(double)arg1;
- (id)description;

@end

