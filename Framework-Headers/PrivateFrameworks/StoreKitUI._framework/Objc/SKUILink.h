//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SSMetricsEventFieldProvider-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL, SKUICountdown, SKUIItem;

@interface SKUILink : NSObject <SSMetricsEventFieldProvider>
{
    SKUICountdown *_countdown;
    SKUIItem *_item;
    NSNumber *_itemIdentifier;
    NSString *_target;
    NSString *_title;
    NSURL *_url;
}

@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property (readonly, nonatomic, getter=isActionable) BOOL actionable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SKUIItem *item; // @synthesize item=_item;
@property (readonly, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (readonly, nonatomic) NSDictionary *linkDictionary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *targetString; // @synthesize targetString=_target;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)_setItem:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (id)initWithLinkDictionary:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 targetString:(id)arg3;
- (id)valueForMetricsField:(id)arg1;

@end

