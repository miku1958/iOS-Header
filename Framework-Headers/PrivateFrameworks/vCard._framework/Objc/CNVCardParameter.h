//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNVCardParameter : NSObject
{
    NSString *_name;
    NSString *_value;
}

@property (readonly) NSString *name; // @synthesize name=_name;
@property (readonly) NSString *value; // @synthesize value=_value;

+ (id)parameterWithName:(id)arg1 value:(id)arg2;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2;

@end

