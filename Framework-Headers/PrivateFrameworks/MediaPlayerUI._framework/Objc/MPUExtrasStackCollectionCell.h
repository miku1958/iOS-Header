//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MPUExtrasGridElementViewController, MPUExtrasGridSectionHeaderStyle, MPUExtrasStackTemplateViewController, NSArray;

@interface MPUExtrasStackCollectionCell : UICollectionViewCell
{
    NSArray *_fitConstraints;
    BOOL _needsViewWillAppear;
    MPUExtrasStackTemplateViewController *_parentViewController;
    MPUExtrasGridElementViewController *_viewController;
    MPUExtrasGridSectionHeaderStyle *_sectionStyle;
}

@property (strong, nonatomic) MPUExtrasStackTemplateViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property (readonly, nonatomic) MPUExtrasGridSectionHeaderStyle *sectionStyle; // @synthesize sectionStyle=_sectionStyle;
@property (strong, nonatomic) MPUExtrasGridElementViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;

@end

