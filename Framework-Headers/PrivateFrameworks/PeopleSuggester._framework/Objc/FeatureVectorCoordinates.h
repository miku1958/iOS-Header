//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FeatureVectorCoordinates : NSObject
{
    unsigned long long _shareEventIndex;
    unsigned long long _ruleIndex;
}

@property (nonatomic) unsigned long long ruleIndex; // @synthesize ruleIndex=_ruleIndex;
@property (nonatomic) unsigned long long shareEventIndex; // @synthesize shareEventIndex=_shareEventIndex;

- (id)initWithShareEventIndex:(unsigned long long)arg1 ruleIndex:(unsigned long long)arg2;

@end

