//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUIImageViewElement;

__attribute__((visibility("hidden")))
@interface SKUIVideoViewElement : SKUIViewElement
{
    BOOL _enabled;
    long long _itemIdentifier;
    long long _playbackStyle;
    SKUIImageViewElement *_thumbnailImage;
    long long _kind;
}

@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (readonly, nonatomic) long long kind; // @synthesize kind=_kind;
@property (readonly, nonatomic) long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property (readonly, nonatomic) SKUIImageViewElement *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;

@end
