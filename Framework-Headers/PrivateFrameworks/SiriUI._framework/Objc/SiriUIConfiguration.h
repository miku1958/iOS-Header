//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriUI/NSCopying-Protocol.h>

@interface SiriUIConfiguration : NSObject <NSCopying>
{
    BOOL _isSystemHostedPresentation;
    BOOL _allowResizingBetweenModes;
    long long _flamesViewFidelity;
    long long _siriViewMode;
}

@property (readonly, nonatomic) BOOL allowResizingBetweenModes; // @synthesize allowResizingBetweenModes=_allowResizingBetweenModes;
@property (readonly, nonatomic) long long flamesViewFidelity; // @synthesize flamesViewFidelity=_flamesViewFidelity;
@property (readonly, nonatomic) BOOL isSystemHostedPresentation; // @synthesize isSystemHostedPresentation=_isSystemHostedPresentation;
@property (readonly, nonatomic) long long siriViewMode; // @synthesize siriViewMode=_siriViewMode;

- (id)_NSStringFromSiriViewMode:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(BOOL)arg2;
- (id)initWithFlamesViewFidelity:(long long)arg1 isSystemHostedPresentation:(BOOL)arg2 allowResizingBetweenModes:(BOOL)arg3 siriViewMode:(long long)arg4;

@end

