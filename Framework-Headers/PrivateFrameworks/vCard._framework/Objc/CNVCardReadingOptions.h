//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CNVCardReadingOptions : NSObject
{
    unsigned long long _contactLimit;
    NSArray *_propertiesToFetch;
    unsigned long long _maximumValueLength;
}

@property (nonatomic) unsigned long long contactLimit; // @synthesize contactLimit=_contactLimit;
@property (nonatomic) unsigned long long maximumValueLength; // @synthesize maximumValueLength=_maximumValueLength;
@property (copy, nonatomic) NSArray *propertiesToFetch; // @synthesize propertiesToFetch=_propertiesToFetch;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

