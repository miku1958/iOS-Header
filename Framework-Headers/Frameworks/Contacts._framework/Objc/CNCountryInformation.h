//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCountryInformation : NSObject <NSCopying>
{
    NSString *_isoCountryCode;
    NSString *_name;
    NSString *_phoneticName;
}

@property (readonly, copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithISOCountryCode:(id)arg1 name:(id)arg2 phoneticName:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

