//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSString, SKUIDividerViewElement;

__attribute__((visibility("hidden")))
@interface SKUIDividerPageComponent : SKUIPageComponent
{
    NSString *_title;
}

@property (readonly, nonatomic) NSString *dividerTitle; // @synthesize dividerTitle=_title;
@property (readonly, nonatomic) SKUIDividerViewElement *viewElement; // @dynamic viewElement;

- (void).cxx_destruct;
- (long long)componentType;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithDividerTitle:(id)arg1;
- (id)initWithViewElement:(id)arg1;

@end
