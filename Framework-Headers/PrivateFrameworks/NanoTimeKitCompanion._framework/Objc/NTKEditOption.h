//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class CLKDevice, NSString;

@interface NTKEditOption : NSObject <NSSecureCoding>
{
    CLKDevice *_device;
}

@property (readonly, nonatomic) NSString *dailySnapshotKey;
@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameForAction;
@property (readonly, nonatomic) long long swatchStyle;

+ (id)optionsDescription;
+ (struct CGSize)sizeForSwatchStyle:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)JSONObjectRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;
- (BOOL)isValidOption;
- (BOOL)optionExistsInDevice:(id)arg1;

@end
