//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMConflictingControlConfiguration : NSObject
{
    long long _desiredFlashMode;
    long long _desiredHDRMode;
    long long _flashAndHDRConflictingControl;
    long long _desiredLivePhotoMode;
    long long _desiredRAWMode;
    unsigned long long _rawConflicts;
}

@property (readonly, nonatomic) long long desiredFlashMode; // @synthesize desiredFlashMode=_desiredFlashMode;
@property (readonly, nonatomic) long long desiredHDRMode; // @synthesize desiredHDRMode=_desiredHDRMode;
@property (readonly, nonatomic) long long desiredLivePhotoMode; // @synthesize desiredLivePhotoMode=_desiredLivePhotoMode;
@property (readonly, nonatomic) long long desiredRAWMode; // @synthesize desiredRAWMode=_desiredRAWMode;
@property (readonly, nonatomic) long long flashAndHDRConflictingControl; // @synthesize flashAndHDRConflictingControl=_flashAndHDRConflictingControl;
@property (readonly, nonatomic) unsigned long long rawConflicts; // @synthesize rawConflicts=_rawConflicts;

+ (void)resolveDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 primaryConflictingControl:(long long)arg3 device:(long long)arg4 toFlashMode:(long long *)arg5 HDRMode:(long long *)arg6;
+ (void)resolveDesiredRAWMode:(long long)arg1 rawConflicts:(unsigned long long)arg2 desiredLivePhotoMode:(long long)arg3 desiredFlashMode:(long long)arg4 toRAWMode:(long long *)arg5 toLivePhotoMode:(long long *)arg6 toFlashMode:(long long *)arg7;
- (id)initWithDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 flashAndHDRConflictingControl:(long long)arg3 desiredLivePhotoMode:(long long)arg4 desiredRAWMode:(long long)arg5 rawConflicts:(unsigned long long)arg6;

@end

