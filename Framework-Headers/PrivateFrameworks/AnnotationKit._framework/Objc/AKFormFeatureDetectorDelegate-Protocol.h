//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AKPageController;

@protocol AKFormFeatureDetectorDelegate <NSObject>

@optional
- (struct CGSize)defaultFeatureSizeForPage:(AKPageController *)arg1;
- (double)maximumFeatureWidthForPage:(AKPageController *)arg1;
- (BOOL)wantsDefaultFeatures;
@end

