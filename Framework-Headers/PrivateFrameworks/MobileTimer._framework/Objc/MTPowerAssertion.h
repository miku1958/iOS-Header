//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTPowerAssertion : NSObject
{
    NSString *_name;
    double _assertionTimeout;
}

@property (readonly, nonatomic) double assertionTimeout; // @synthesize assertionTimeout=_assertionTimeout;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 assertionTimeout:(double)arg2;
- (void)releaseAssertion;
- (void)takeAssertion;

@end

