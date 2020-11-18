//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

@class NSArray, NSAttributedString, NSString, SKUILabelViewElement;

@interface SKUIEditorialComponent : SKUIPageComponent
{
    NSString *_bodyText;
    NSArray *_links;
    long long _maximumBodyLines;
    struct SKUIEditorialStyle _style;
    NSString *_titleText;
    BOOL _usesLockupTitle;
}

@property (readonly, nonatomic, getter=_usesLockupTitle) BOOL _usesLockupTitle; // @synthesize _usesLockupTitle;
@property (readonly, nonatomic) NSAttributedString *bodyAttributedText;
@property (readonly, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property (readonly, nonatomic) struct SKUIEditorialStyle editorialStyle; // @synthesize editorialStyle=_style;
@property (readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property (readonly, nonatomic) long long maximumBodyLines; // @synthesize maximumBodyLines=_maximumBodyLines;
@property (readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property (readonly, nonatomic) SKUILabelViewElement *viewElement; // @dynamic viewElement;

- (void).cxx_destruct;
- (void)_setTitleText:(id)arg1;
- (long long)componentType;
- (id)initWithBrickRoomText:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;
- (id)initWithUberText:(id)arg1;
- (id)initWithViewElement:(id)arg1;

@end

