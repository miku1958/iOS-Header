//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, SKUINavigationBarViewElement;

__attribute__((visibility("hidden")))
@interface SKUIExploreTemplateElement : SKUIViewElement
{
    BOOL _usesSplits;
}

@property (readonly, nonatomic) NSArray *childViewElements;
@property (readonly, nonatomic) SKUIViewElement *leftSplit;
@property (readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) SKUIViewElement *rightSplit;
@property (readonly, nonatomic) BOOL usesSplits; // @synthesize usesSplits=_usesSplits;

- (void)_getLeftSplit:(id *)arg1 rightSplit:(id *)arg2;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
