//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFItemBuilder, HFRoomBuilderItem;
@protocol HFServiceLikeBuilder;

@interface HFSelectedRoomItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HFItemBuilder<HFServiceLikeBuilder> *_serviceLikeBuilder;
    HFRoomBuilderItem *_roomBuilderItem;
}

@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (strong, nonatomic) HFRoomBuilderItem *roomBuilderItem; // @synthesize roomBuilderItem=_roomBuilderItem;
@property (strong, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // @synthesize serviceLikeBuilder=_serviceLikeBuilder;

- (void).cxx_destruct;
- (id)initWithHome:(id)arg1 serviceLikeBuilder:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

