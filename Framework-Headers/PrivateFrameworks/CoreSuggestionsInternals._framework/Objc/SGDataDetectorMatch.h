//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGDataDetectorMatch : NSObject
{
    unsigned int _matchType;
    int _parsecDomain;
    NSString *_valueString;
    NSString *_labelString;
    NSString *_parsecWikidataQid;
    struct _NSRange _range;
    struct _NSRange _labelRange;
    struct _NSRange _valueRange;
}

@property (readonly, nonatomic) struct _NSRange labelRange; // @synthesize labelRange=_labelRange;
@property (readonly, nonatomic) NSString *labelString; // @synthesize labelString=_labelString;
@property (readonly, nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
@property (readonly, nonatomic) int parsecDomain; // @synthesize parsecDomain=_parsecDomain;
@property (readonly, nonatomic) NSString *parsecWikidataQid; // @synthesize parsecWikidataQid=_parsecWikidataQid;
@property (readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (readonly, nonatomic) struct _NSRange valueRange; // @synthesize valueRange=_valueRange;
@property (readonly, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLookupHintInDomain:(int)arg1 range:(struct _NSRange)arg2 labelRange:(struct _NSRange)arg3 labelString:(id)arg4 valueRange:(struct _NSRange)arg5 valueString:(id)arg6 qid:(id)arg7;
- (id)initWithMatchType:(unsigned int)arg1 range:(struct _NSRange)arg2 labelRange:(struct _NSRange)arg3 labelString:(id)arg4 valueRange:(struct _NSRange)arg5 valueString:(id)arg6;

@end

