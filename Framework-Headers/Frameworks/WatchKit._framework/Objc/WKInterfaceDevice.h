//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WKInterfaceDevice : NSObject
{
    double _screenScale;
    NSString *_preferredContentSizeCategory;
    long long _layoutDirection;
    long long _wristLocation;
    long long _crownOrientation;
    NSString *_deviceSystemVersion;
    NSString *_deviceName;
    NSString *_deviceModel;
    NSString *_deviceLocalizedModel;
    NSString *_deviceSystemName;
    struct CGRect _screenBounds;
}

@property (readonly, nonatomic) NSDictionary *cachedImages;
@property (readonly, nonatomic) long long crownOrientation; // @synthesize crownOrientation=_crownOrientation;
@property (copy, nonatomic) NSString *deviceLocalizedModel; // @synthesize deviceLocalizedModel=_deviceLocalizedModel;
@property (copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property (copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (copy, nonatomic) NSString *deviceSystemName; // @synthesize deviceSystemName=_deviceSystemName;
@property (copy, nonatomic) NSString *deviceSystemVersion; // @synthesize deviceSystemVersion=_deviceSystemVersion;
@property (readonly, nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property (readonly, copy, nonatomic) NSString *localizedModel;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
@property (nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property (readonly, copy, nonatomic) NSString *systemName;
@property (readonly, copy, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) long long wristLocation; // @synthesize wristLocation=_wristLocation;

+ (id)currentDevice;
- (void).cxx_destruct;
- (BOOL)addCachedImage:(id)arg1 name:(id)arg2;
- (BOOL)addCachedImageWithData:(id)arg1 name:(id)arg2;
- (void)playHaptic:(long long)arg1;
- (void)removeAllCachedImages;
- (void)removeCachedImageWithName:(id)arg1;

@end

