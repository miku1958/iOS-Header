//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIInputViewElement.h>

@class NSString, SKUIViewElementText;

__attribute__((visibility("hidden")))
@interface SKUISearchBarViewElement : SKUIInputViewElement
{
    NSString *_accessoryText;
    SKUIViewElementText *_defaultText;
    NSString *_placeholderString;
    NSString *_searchHintsURLString;
    NSString *_trendingSearchURLString;
}

@property (readonly, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property (readonly, nonatomic) SKUIViewElementText *defaultText; // @synthesize defaultText=_defaultText;
@property (readonly, nonatomic) NSString *placeholderString; // @synthesize placeholderString=_placeholderString;
@property (readonly, nonatomic) NSString *searchHintsURLString; // @synthesize searchHintsURLString=_searchHintsURLString;
@property (readonly, nonatomic) NSString *trendingSearchURLString; // @synthesize trendingSearchURLString=_trendingSearchURLString;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end

