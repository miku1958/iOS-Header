//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MANode.h>

@class NSString;

@interface MAAbstractNode : MANode
{
    NSString *_labelString;
}

- (void).cxx_destruct;
- (unsigned short)_label;
- (id)_labelKey;
- (void)_setLabelString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(unsigned short)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)initWithLabelString:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (BOOL)isAbstract;
- (id)label;

@end

