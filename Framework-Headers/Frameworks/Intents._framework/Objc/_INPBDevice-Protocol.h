//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBDevice <NSObject>

@property (nonatomic) int deviceCategory;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL hasDeviceCategory;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (readonly, nonatomic) BOOL hasDeviceName;

- (int)StringAsDeviceCategory:(NSString *)arg1;
- (NSString *)deviceCategoryAsString:(int)arg1;
@end
