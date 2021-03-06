//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKKeyValueTuple : TLKObject
{
    NSString *_key;
    NSString *_value;
}

@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) NSString *value; // @synthesize value=_value;

+ (id)tupleWithKey:(id)arg1 value:(id)arg2;
+ (id)tuplesForDictionary:(id)arg1;
+ (id)tuplesForKeys:(id)arg1 values:(id)arg2;
- (void).cxx_destruct;

@end

