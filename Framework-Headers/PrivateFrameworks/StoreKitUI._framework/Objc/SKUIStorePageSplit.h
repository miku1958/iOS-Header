//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, SKUIStorePageSectionContext, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSplit : NSObject <NSCopying>
{
    UIColor *_dividerColor;
    long long _numberOfPageSections;
    NSArray *_pageComponents;
    SKUIStorePageSectionContext *_sectionContext;
    double _widthFraction;
}

@property (copy, nonatomic) UIColor *dividerColor; // @synthesize dividerColor=_dividerColor;
@property (nonatomic) long long numberOfPageSections; // @synthesize numberOfPageSections=_numberOfPageSections;
@property (copy, nonatomic) NSArray *pageComponents; // @synthesize pageComponents=_pageComponents;
@property (strong, nonatomic) SKUIStorePageSectionContext *sectionContext; // @synthesize sectionContext=_sectionContext;
@property (nonatomic) double widthFraction; // @synthesize widthFraction=_widthFraction;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

