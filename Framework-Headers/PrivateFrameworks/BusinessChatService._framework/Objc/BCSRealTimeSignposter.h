//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BCSRealTimeSignposter : NSObject
{
    long long _type;
    unsigned long long _signpostIdentifier;
}

@property (readonly, nonatomic) unsigned long long signpostIdentifier; // @synthesize signpostIdentifier=_signpostIdentifier;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

- (id)_initWithType:(long long)arg1 signpostIdentifier:(unsigned long long)arg2;

@end

