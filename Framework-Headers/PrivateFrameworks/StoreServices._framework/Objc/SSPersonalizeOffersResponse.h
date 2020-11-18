//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding>
{
    NSMutableDictionary *_actionDisplayNames;
    NSMutableDictionary *_actionParameters;
    NSArray *_items;
    NSMutableDictionary *_priceDisplayNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *personalizedItems;
@property (readonly) Class superclass;

- (void)_setPersonalizedItems:(id)arg1;
- (id)actionDisplayNameForItemType:(id)arg1;
- (id)actionParametersForItemIdentifier:(id)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (id)priceDisplayForItemType:(id)arg1;
- (void)setActionDisplayNameString:(id)arg1 forItemType:(id)arg2;
- (void)setActionParameters:(id)arg1 forItemIdentifier:(id)arg2;
- (void)setPriceDisplayString:(id)arg1 forItemType:(id)arg2;

@end
