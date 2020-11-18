//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFClientGetDeviceAssetsParams : NSObject <NSSecureCoding>
{
    unsigned short _bluetoothProductID;
    unsigned int _colorCode;
    NSString *_model;
    double _timeoutSeconds;
}

@property (nonatomic) unsigned short bluetoothProductID; // @synthesize bluetoothProductID=_bluetoothProductID;
@property (nonatomic) unsigned int colorCode; // @synthesize colorCode=_colorCode;
@property (copy, nonatomic) NSString *model; // @synthesize model=_model;
@property (nonatomic) double timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
