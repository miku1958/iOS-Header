//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowEditor/NSCopying-Protocol.h>

@class WFContentProperty;

@interface WFNegativeContentProperty : NSObject <NSCopying>
{
    WFContentProperty *_property;
}

@property (readonly, copy, nonatomic) WFContentProperty *property; // @synthesize property=_property;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

