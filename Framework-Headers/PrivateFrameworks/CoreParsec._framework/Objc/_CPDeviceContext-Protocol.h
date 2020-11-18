//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPDeviceContext <NSObject>

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *osVersion;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
