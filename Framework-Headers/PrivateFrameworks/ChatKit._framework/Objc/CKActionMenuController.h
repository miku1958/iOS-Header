//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CKActionMenuView, NSArray;
@protocol CKActionMenuControllerDelegate;

@interface CKActionMenuController : NSObject
{
    unsigned long long _defaultActionIndex;
    id<CKActionMenuControllerDelegate> _delegate;
    NSArray *_passthroughViews;
    CKActionMenuView *_actionMenuView;
}

@property (readonly, copy, nonatomic) NSArray *actionMenuItems;
@property (strong, nonatomic) CKActionMenuView *actionMenuView; // @synthesize actionMenuView=_actionMenuView;
@property (readonly, nonatomic, getter=isActionMenuVisible) BOOL actionMenuVisible;
@property (readonly, nonatomic) unsigned long long defaultActionIndex; // @synthesize defaultActionIndex=_defaultActionIndex;
@property (nonatomic) id<CKActionMenuControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;

- (struct CGRect)convertActionMenuFrameToView:(id)arg1;
- (void)dealloc;
- (void)dismissActionMenuAnimated:(BOOL)arg1;
- (id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3 backgroundFilters:(id)arg4;
- (void)presentActionMenuFromPoint:(struct CGPoint)arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(BOOL)arg3;

@end

