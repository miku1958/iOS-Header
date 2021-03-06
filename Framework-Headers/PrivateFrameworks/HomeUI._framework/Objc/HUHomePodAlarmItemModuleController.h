//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUAlarmTableViewCellDelegate-Protocol.h>

@class NSMapTable, NSString;
@protocol HUHomePodAlarmItemModuleControllerDelegate;

@interface HUHomePodAlarmItemModuleController : HUItemTableModuleController <HUAlarmTableViewCellDelegate>
{
    BOOL _allowsCellSelection;
    id<HUHomePodAlarmItemModuleControllerDelegate> _delegate;
    NSMapTable *_cellToItemMap;
}

@property (readonly, nonatomic) BOOL allowsCellSelection; // @synthesize allowsCellSelection=_allowsCellSelection;
@property (readonly, nonatomic) NSMapTable *cellToItemMap; // @synthesize cellToItemMap=_cellToItemMap;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUHomePodAlarmItemModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_shouldAllowCellSelection;
- (BOOL)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (void)setAlarmEnabled:(BOOL)arg1 forCell:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;

@end

