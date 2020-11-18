//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMAccessoryCategory, NSString;

@interface HMDAccessoryAdvertisement : NSObject
{
    NSString *_identifier;
    NSString *_name;
    HMAccessoryCategory *_category;
}

@property (readonly) long long associationOptions;
@property (readonly, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

