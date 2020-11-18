//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/NSCopying-Protocol.h>
#import <InputContext/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, _ICProactiveTrigger;

@interface _ICPredictedItem : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _itemType;
    BOOL _shouldAggregate;
    unsigned char _flags;
    unsigned char _layoutHint;
    NSString *_identifier;
    _ICProactiveTrigger *_trigger;
    NSString *_label;
    NSString *_value;
    NSString *_name;
    NSDate *_date;
    NSString *_originatingBundleID;
    NSURL *_originatingWebsiteURL;
    unsigned long long _predictionAge;
    double _score;
    NSString *_targetBundleID;
    NSDictionary *_operationData;
}

@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) unsigned char itemType; // @synthesize itemType=_itemType;
@property (readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned char layoutHint; // @synthesize layoutHint=_layoutHint;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSDictionary *operationData; // @synthesize operationData=_operationData;
@property (readonly, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property (readonly, nonatomic) NSURL *originatingWebsiteURL; // @synthesize originatingWebsiteURL=_originatingWebsiteURL;
@property (nonatomic) unsigned long long predictionAge; // @synthesize predictionAge=_predictionAge;
@property (readonly, nonatomic) double score; // @synthesize score=_score;
@property (readonly, nonatomic) BOOL shouldAggregate; // @synthesize shouldAggregate=_shouldAggregate;
@property (readonly, nonatomic) NSString *targetBundleID; // @synthesize targetBundleID=_targetBundleID;
@property (readonly, nonatomic) _ICProactiveTrigger *trigger; // @synthesize trigger=_trigger;
@property (readonly, nonatomic) NSString *value; // @synthesize value=_value;

+ (id)predictedItemFromQuickTypeItem:(id)arg1 trigger:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasScoreSimilarToItem:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 itemType:(unsigned char)arg2 score:(double)arg3 value:(id)arg4 label:(id)arg5 name:(id)arg6 date:(id)arg7 originatingBundleID:(id)arg8 originatingWebsiteURL:(id)arg9 predictionAge:(unsigned long long)arg10 shouldAggregate:(BOOL)arg11 flags:(unsigned char)arg12 targetBundleID:(id)arg13 operationData:(id)arg14 proactiveTrigger:(id)arg15;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 value:(id)arg3 label:(id)arg4 name:(id)arg5 date:(id)arg6 originatingBundleID:(id)arg7 originatingWebsiteURL:(id)arg8 predictionAge:(unsigned long long)arg9 shouldAggregate:(BOOL)arg10 flags:(unsigned char)arg11 proactiveTrigger:(id)arg12;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPredictedItem:(id)arg1;

@end
