//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _MSTTLReference : NSObject
{
    id _value;
    double _ttl;
    NSDate *_lastSet;
}

@property (strong, nonatomic) NSDate *lastSet; // @synthesize lastSet=_lastSet;
@property (nonatomic) double ttl; // @synthesize ttl=_ttl;
@property (strong, nonatomic) id value; // @synthesize value=_value;

- (void).cxx_destruct;
- (id)getValueWithGenerator:(CDUnknownBlockType)arg1;
- (id)initWithTTL:(double)arg1;

@end

