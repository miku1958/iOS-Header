//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPCacheAsset : NSObject
{
    NSString *_key;
    unsigned long long _state;
    unsigned long long _size;
    double _accessDate;
}

@property (nonatomic) double accessDate; // @synthesize accessDate=_accessDate;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (nonatomic) unsigned long long size; // @synthesize size=_size;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;

+ (id)fromProto:(id)arg1;
+ (id)toProto:(id)arg1;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 size:(unsigned long long)arg2 state:(unsigned long long)arg3 accessDate:(id)arg4;

@end
