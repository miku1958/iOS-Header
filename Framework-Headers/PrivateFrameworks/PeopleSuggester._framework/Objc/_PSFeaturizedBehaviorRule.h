//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BMRule, NSMutableDictionary;

@interface _PSFeaturizedBehaviorRule : NSObject
{
    BMRule *_rule;
    NSMutableDictionary *_features;
    double _score;
}

@property (strong, nonatomic) NSMutableDictionary *features; // @synthesize features=_features;
@property (strong, nonatomic) BMRule *rule; // @synthesize rule=_rule;
@property (nonatomic) double score; // @synthesize score=_score;

- (void).cxx_destruct;
- (id)initWithRule:(id)arg1 score:(double)arg2 features:(id)arg3;

@end

