//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, VideosExtrasGridElementViewController, VideosExtrasGridSectionHeaderStyle, VideosExtrasStackTemplateViewController;

@interface VideosExtrasStackCollectionCell : UICollectionViewCell
{
    NSArray *_fitConstraints;
    BOOL _needsViewWillAppear;
    VideosExtrasStackTemplateViewController *_parentViewController;
    VideosExtrasGridElementViewController *_viewController;
    VideosExtrasGridSectionHeaderStyle *_sectionStyle;
}

@property (strong, nonatomic) VideosExtrasStackTemplateViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property (readonly, nonatomic) VideosExtrasGridSectionHeaderStyle *sectionStyle; // @synthesize sectionStyle=_sectionStyle;
@property (strong, nonatomic) VideosExtrasGridElementViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;

@end

