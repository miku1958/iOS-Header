//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INPriceRange, NSString;

@protocol INRidePartySizeOptionExport <NSObject, JSExport>

@property (nonatomic) struct _NSRange partySizeRange;
@property (copy, nonatomic) INPriceRange *priceRange;
@property (copy, nonatomic) NSString *sizeDescription;

- (id)init;
@end

