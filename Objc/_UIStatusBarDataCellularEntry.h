//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIStatusBarDataNetworkEntry.h>

@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry
{
    BOOL _showsEmergencyOnlyWhenDisconnected;
    long long _type;
    NSString *_string;
    NSString *_crossfadeString;
}

@property (copy, nonatomic) NSString *crossfadeString; // @synthesize crossfadeString=_crossfadeString;
@property (nonatomic) BOOL showsEmergencyOnlyWhenDisconnected; // @synthesize showsEmergencyOnlyWhenDisconnected=_showsEmergencyOnlyWhenDisconnected;
@property (copy, nonatomic) NSString *string; // @synthesize string=_string;
@property (nonatomic) long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

