//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, UIImage;
@protocol SearchUIActionButtonItem, SearchUIAuxiliaryInfo;

@protocol SearchUIResult <NSObject>

@property (readonly, nonatomic) id<SearchUIActionButtonItem> actionButton;
@property (readonly, nonatomic) id<SearchUIAuxiliaryInfo> auxiliaryInfo;
@property (readonly, copy, nonatomic) NSArray *cardSections;
@property (readonly, copy, nonatomic) NSURL *cardURL;
@property (readonly, nonatomic) BOOL centered;
@property (readonly, copy, nonatomic) NSURL *destinationURL;
@property (readonly, copy, nonatomic) NSString *footnote;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) double imageCornerRadius;
@property (readonly, nonatomic) BOOL requiresTwoLineTitles;
@property (readonly, nonatomic) NSArray *richTextItems;
@property (readonly, copy, nonatomic) NSArray *rowSections;
@property (readonly, nonatomic) UIImage *secondaryImage;
@property (readonly, copy, nonatomic) NSString *secondaryTitle;
@property (readonly, nonatomic) BOOL secondaryTitleDetached;
@property (readonly, nonatomic) BOOL shouldCropImageToCircle;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long titleMaxLines;


@optional
- (void)didDisplayResultWithRefreshHandler:(void (^)(void))arg1;
@end
