//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElement, NSDictionary;

@interface IKServiceContext : NSObject
{
    NSDictionary *_contextDictionary;
    IKViewElement *_element;
}

@property (readonly, copy, nonatomic) NSDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;
@property (readonly, nonatomic) IKViewElement *element; // @synthesize element=_element;

- (void).cxx_destruct;
- (id)initWithContextDictionary:(id)arg1 element:(id)arg2;

@end

