//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMWhiteBalanceCommand : CAMCaptureCommand
{
    BOOL __matchExposureMode;
    long long __whiteBalanceMode;
}

@property (readonly, nonatomic) BOOL _matchExposureMode; // @synthesize _matchExposureMode=__matchExposureMode;
@property (readonly, nonatomic) long long _whiteBalanceMode; // @synthesize _whiteBalanceMode=__whiteBalanceMode;

- (id)_descriptionForWhiteBalanceMode:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchExposureMode;
- (id)initWithWhiteBalanceMode:(long long)arg1;

@end

