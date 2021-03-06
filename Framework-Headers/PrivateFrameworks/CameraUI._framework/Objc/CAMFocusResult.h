//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMFocusResult : NSObject
{
    BOOL _performingContrastDetection;
    BOOL _contrastBasedFocusDidStart;
    BOOL _contrastBasedFocusDidEnd;
    BOOL _deviceSupportsFocus;
    long long _focusMode;
    struct CGPoint _pointOfInterest;
}

@property (readonly, nonatomic) BOOL contrastBasedFocusDidEnd; // @synthesize contrastBasedFocusDidEnd=_contrastBasedFocusDidEnd;
@property (readonly, nonatomic) BOOL contrastBasedFocusDidStart; // @synthesize contrastBasedFocusDidStart=_contrastBasedFocusDidStart;
@property (readonly, nonatomic) BOOL deviceSupportsFocus; // @synthesize deviceSupportsFocus=_deviceSupportsFocus;
@property (readonly, nonatomic) long long focusMode; // @synthesize focusMode=_focusMode;
@property (readonly, nonatomic, getter=isPerformingContrastDetection) BOOL performingContrastDetection; // @synthesize performingContrastDetection=_performingContrastDetection;
@property (readonly, nonatomic) struct CGPoint pointOfInterest; // @synthesize pointOfInterest=_pointOfInterest;

- (id)description;
- (id)initWithMode:(long long)arg1 pointOfInterest:(struct CGPoint)arg2 performingContrastDetection:(BOOL)arg3 contrastBasedFocusDidStart:(BOOL)arg4 contrastBasedFocusDidEnd:(BOOL)arg5 deviceSupportsFocus:(BOOL)arg6;

@end

