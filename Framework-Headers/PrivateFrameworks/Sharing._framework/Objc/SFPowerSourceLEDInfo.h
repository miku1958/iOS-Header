//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@interface SFPowerSourceLEDInfo : NSObject <NSSecureCoding>
{
    int _LEDColor;
    int _LEDState;
}

@property (nonatomic) int LEDColor; // @synthesize LEDColor=_LEDColor;
@property (nonatomic) int LEDState; // @synthesize LEDState=_LEDState;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

