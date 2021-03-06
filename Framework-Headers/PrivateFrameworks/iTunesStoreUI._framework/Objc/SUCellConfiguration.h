//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol SUCellConfigurationView;

@interface SUCellConfiguration : NSObject
{
    id _context;
    unsigned int _isDeleteConfirmationVisible:1;
    struct CGSize _layoutSize;
    unsigned int _needsDisplay:1;
    id _representedObject;
    UIView<SUCellConfigurationView> *_view;
}

@property (strong, nonatomic) id context;
@property (nonatomic) BOOL isDeleteConfirmationVisible;
@property (nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property (nonatomic) BOOL needsDisplay;
@property (readonly, nonatomic) unsigned long long numberOfImages;
@property (readonly, nonatomic) unsigned long long numberOfLabels;
@property (strong, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property (nonatomic) UIView<SUCellConfigurationView> *view; // @synthesize view=_view;

+ (id)copyDefaultContext;
+ (double)minimumRowHeight;
+ (double)rowHeightForContext:(id)arg1 representedObject:(id)arg2;
- (id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (void)dealloc;
- (void)drawBackgroundWithModifiers:(unsigned long long)arg1;
- (void)drawWithModifiers:(unsigned long long)arg1;
- (id)fontForLabelAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForAccessoryViewWithFrame:(struct CGRect)arg1;
- (struct CGRect)frameForImageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForLabelAtIndex:(unsigned long long)arg1;
- (BOOL)getShadowColor:(id *)arg1 offset:(struct CGSize *)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4;
- (id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2;
- (unsigned long long)indexOfLabelForPurchaseAnimation;
- (void)reloadData;
- (id)stringForLabelAtIndex:(unsigned long long)arg1;
- (long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1;

@end

