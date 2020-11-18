//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HFSection : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_footerTitle;
    NSArray *_items;
}

@property (copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)arg1;

@end
