//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKArray;

@interface IKCSSParseObject : NSObject
{
    IKArray *_cssValue;
    long long _type;
    struct _NSRange _range;
}

@property (strong, nonatomic) IKArray *cssValue; // @synthesize cssValue=_cssValue;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (id)stringifyList:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

