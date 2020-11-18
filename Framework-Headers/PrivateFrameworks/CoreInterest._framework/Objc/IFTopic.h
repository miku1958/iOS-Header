//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface IFTopic : NSObject
{
    IFTopic *parent;
    NSArray *children;
    NSString *_name;
    NSString *_label;
    NSUUID *_identifier;
    double _score;
    NSArray *_indications;
    unsigned long long _activations;
    unsigned long long _indirectActivations;
}

@property (nonatomic) unsigned long long activations; // @synthesize activations=_activations;
@property (strong, nonatomic) NSArray *children; // @synthesize children;
@property (readonly, nonatomic) unsigned long long height;
@property (strong, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSArray *indications; // @synthesize indications=_indications;
@property (nonatomic) unsigned long long indirectActivations; // @synthesize indirectActivations=_indirectActivations;
@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) unsigned long long level;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) IFTopic *parent; // @synthesize parent;
@property (readonly, nonatomic) IFTopic *root;
@property (nonatomic) double score; // @synthesize score=_score;

+ (id)root;
+ (id)topicWithName:(id)arg1 label:(id)arg2 identifier:(id)arg3;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
