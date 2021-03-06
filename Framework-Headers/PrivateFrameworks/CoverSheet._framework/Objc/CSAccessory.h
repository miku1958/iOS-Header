//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface CSAccessory : NSObject
{
    NSString *_endpointUUID;
    long long _type;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
}

@property (readonly, nonatomic) BOOL chimeOnDetach;
@property (strong, nonatomic) NSString *endpointUUID; // @synthesize endpointUUID=_endpointUUID;
@property (readonly, nonatomic) BOOL hasStaticView;
@property (strong, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property (strong, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property (readonly, nonatomic) BOOL shouldDelayAnimation;
@property (readonly, nonatomic) BOOL shouldLockScreenWhenAttached;
@property (readonly, nonatomic) BOOL shouldShowAnimation;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) struct CGRect visibleScreenCoordinates;
@property (readonly, nonatomic, getter=isWindowed) BOOL windowed;

+ (id)accessoryWithType:(long long)arg1 primaryColor:(id)arg2 secondoryColor:(id)arg3;
- (void).cxx_destruct;
- (long long)accessoryTypeFromDictionary:(id)arg1;
- (id)accessoryTypeString;
- (id)colorForP3ColorData:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1 endpointUUID:(id)arg2;

@end

