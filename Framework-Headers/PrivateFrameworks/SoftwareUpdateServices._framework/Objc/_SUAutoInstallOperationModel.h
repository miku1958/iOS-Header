//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SoftwareUpdateServices/NSCopying-Protocol.h>
#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSUUID, SUAutoInstallForecast;

@interface _SUAutoInstallOperationModel : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_id;
    SUAutoInstallForecast *_forecast;
    int _agreementStatus;
}

@property (nonatomic) int agreementStatus; // @synthesize agreementStatus=_agreementStatus;
@property (strong, nonatomic) SUAutoInstallForecast *forecast; // @synthesize forecast=_forecast;
@property (strong, nonatomic) NSUUID *id; // @synthesize id=_id;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
