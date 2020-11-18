//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface WFNextHourPrecipitationDescription : NSObject <NSCopying>
{
    NSDate *_validUntil;
    NSString *_shortTemplate;
    NSString *_longTemplate;
    NSDictionary *_parameters;
}

@property (readonly, nonatomic) NSString *longDescription;
@property (copy, nonatomic) NSString *longTemplate; // @synthesize longTemplate=_longTemplate;
@property (copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property (readonly, nonatomic) NSString *shortDescription;
@property (copy, nonatomic) NSString *shortTemplate; // @synthesize shortTemplate=_shortTemplate;
@property (readonly, copy, nonatomic) NSDate *validUntil; // @synthesize validUntil=_validUntil;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fillTemplate:(id)arg1 withDate:(id)arg2;
- (id)initWithShortTemplate:(id)arg1 longTemplate:(id)arg2 parameters:(id)arg3 validUntil:(id)arg4;
- (BOOL)isValidAtDate:(id)arg1;

@end
