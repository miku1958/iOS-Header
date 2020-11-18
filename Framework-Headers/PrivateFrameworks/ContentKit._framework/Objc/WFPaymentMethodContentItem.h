//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@class INPaymentMethod;

@interface WFPaymentMethodContentItem : WFContentItem <WFContentItemClass>
{
}

@property (readonly, nonatomic) INPaymentMethod *paymentMethod;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;

@end
