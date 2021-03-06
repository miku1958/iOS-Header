//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItem, HFStaticItemProvider, HFUserNameFormatter, HMHome;
@protocol HFPersonLikeItem;

@interface HUFaceRecognitionPersonEditorItemManager : HFItemManager
{
    HFItem *_faceCropItem;
    HFItem *_nameItem;
    HFItem *_addNameItem;
    HFStaticItem *_hideNotificationsItem;
    HFItem *_deleteItem;
    HFStaticItemProvider *_staticItemProvider;
    HMHome *_personHome;
    HFUserNameFormatter *_userNameFormatter;
}

@property (strong, nonatomic) HFItem *addNameItem; // @synthesize addNameItem=_addNameItem;
@property (strong, nonatomic) HFItem *deleteItem; // @synthesize deleteItem=_deleteItem;
@property (strong, nonatomic) HFItem *faceCropItem; // @synthesize faceCropItem=_faceCropItem;
@property (strong, nonatomic) HFStaticItem *hideNotificationsItem; // @synthesize hideNotificationsItem=_hideNotificationsItem;
@property (strong, nonatomic) HFItem *nameItem; // @synthesize nameItem=_nameItem;
@property (strong, nonatomic) HMHome *personHome; // @synthesize personHome=_personHome;
@property (readonly, nonatomic) HFItem<HFPersonLikeItem> *personItem;
@property (strong, nonatomic) HFStaticItemProvider *staticItemProvider; // @synthesize staticItemProvider=_staticItemProvider;
@property (strong, nonatomic) HFUserNameFormatter *userNameFormatter; // @synthesize userNameFormatter=_userNameFormatter;

+ (id)dateFormatter;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

