//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCAggregateLogKey.h>

@interface MCAggregateLogCountProfileKey : MCAggregateLogKey
{
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type; // @synthesize type=_type;

+ (id)_type:(unsigned long long)arg1;
+ (id)all;
+ (id)carrier;
+ (id)encrypted;
+ (id)signed;
+ (id)signedByApple;
+ (void)updateProfileCounts;
- (id)name;
- (unsigned long long)value;

@end

