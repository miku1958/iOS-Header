//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUIStarBarViewElement : SKUIViewElement
{
    long long _numberOfRatings;
    long long _numberOfStars;
    float _value;
}

@property (readonly, nonatomic) long long numberOfRatings; // @synthesize numberOfRatings=_numberOfRatings;
@property (readonly, nonatomic) long long numberOfStars; // @synthesize numberOfStars=_numberOfStars;
@property (readonly, nonatomic) float value; // @synthesize value=_value;

- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
