//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPDFContentOperator : NSObject
{
    NSString *_name;
    id _value;
}

@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) id value; // @synthesize value=_value;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)text;

@end
