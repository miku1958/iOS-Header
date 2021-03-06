//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphPublicEventLocalizedCategoryNode : PGGraphOptimizedNode
{
    unsigned int _level:8;
    NSString *_label;
}

@property (readonly) unsigned long long level; // @synthesize level=_level;

- (void).cxx_destruct;
- (id)description;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)label;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)arg1;

@end

