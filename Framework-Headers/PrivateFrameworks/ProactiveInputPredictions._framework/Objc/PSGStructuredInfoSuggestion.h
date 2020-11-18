//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveInputPredictions/NSCopying-Protocol.h>
#import <ProactiveInputPredictions/NSSecureCoding-Protocol.h>

@class PPQuickTypeItem, PSGOperationalPredictedItem, PSGProactiveTrigger;

@interface PSGStructuredInfoSuggestion : NSObject <NSSecureCoding, NSCopying>
{
    PSGProactiveTrigger *_proactiveTrigger;
    PPQuickTypeItem *_portraitItem;
    PSGOperationalPredictedItem *_operationalItem;
}

@property (readonly, nonatomic) PSGOperationalPredictedItem *operationalItem; // @synthesize operationalItem=_operationalItem;
@property (readonly, nonatomic) PPQuickTypeItem *portraitItem; // @synthesize portraitItem=_portraitItem;
@property (readonly, nonatomic) PSGProactiveTrigger *proactiveTrigger; // @synthesize proactiveTrigger=_proactiveTrigger;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProactiveTrigger:(id)arg1 portraitItem:(id)arg2 operationalItem:(id)arg3;
- (BOOL)isApplePay;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToItem:(id)arg1;
- (id)predictedValue;

@end
