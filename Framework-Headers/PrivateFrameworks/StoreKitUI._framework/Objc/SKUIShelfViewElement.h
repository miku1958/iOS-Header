//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString;

@interface SKUIShelfViewElement : SKUIViewElement
{
    long long _numberOfRows;
    NSString *_slideshowTitle;
    CDUnknownBlockType _shelfItemViewElementValidator;
}

@property (readonly, nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property (copy, nonatomic) CDUnknownBlockType shelfItemViewElementValidator; // @synthesize shelfItemViewElementValidator=_shelfItemViewElementValidator;
@property (readonly, nonatomic) NSString *slideshowTitle; // @synthesize slideshowTitle=_slideshowTitle;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end

