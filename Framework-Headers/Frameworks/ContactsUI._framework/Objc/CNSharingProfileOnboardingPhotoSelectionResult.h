//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingPhotoSelectionResult : NSObject
{
    BOOL _wasSelectedInFullPhotoPicker;
    UIImage *_originalImage;
    UIImage *_compositedImage;
    NSString *_variantName;
    long long _avatarType;
}

@property (nonatomic) long long avatarType; // @synthesize avatarType=_avatarType;
@property (strong, nonatomic) UIImage *compositedImage; // @synthesize compositedImage=_compositedImage;
@property (strong, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property (copy, nonatomic) NSString *variantName; // @synthesize variantName=_variantName;
@property (nonatomic) BOOL wasSelectedInFullPhotoPicker; // @synthesize wasSelectedInFullPhotoPicker=_wasSelectedInFullPhotoPicker;

- (void).cxx_destruct;

@end
