//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbKit/NSCopying-Protocol.h>

@class NSString;

@interface DNDLifetimeDetails : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_name;
    NSString *_metadata;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (id)lifetimeDetailsForEvent:(id)arg1 relativeToDate:(id)arg2;
+ (id)lifetimeDetailsForOneHour;
+ (id)lifetimeDetailsForPlaceInference:(id)arg1;
+ (id)lifetimeDetailsUntilEvening;
+ (id)lifetimeDetailsUntilMorning;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 metadata:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

