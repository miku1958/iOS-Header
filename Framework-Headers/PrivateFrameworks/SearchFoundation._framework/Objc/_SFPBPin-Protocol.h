//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBColor, _SFPBLatLng;

@protocol _SFPBPin <NSObject>

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *label;
@property (strong, nonatomic) _SFPBLatLng *location;
@property (copy, nonatomic) NSData *mapsData;
@property (nonatomic) int pinBehavior;
@property (strong, nonatomic) _SFPBColor *pinColor;
@property (copy, nonatomic) NSString *resultID;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

