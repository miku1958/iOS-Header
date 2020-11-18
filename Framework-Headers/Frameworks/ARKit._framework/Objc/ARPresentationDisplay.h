//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@interface ARPresentationDisplay : NSObject <NSCopying>
{
    long long _viewOrientation;
    struct CGSize _viewSize;
}

@property (readonly, nonatomic) long long cameraCompositing;
@property (readonly, nonatomic) long long displayLayout;
@property (readonly, nonatomic, getter=isHeld) BOOL held;
@property (readonly, nonatomic, getter=isMonoscopic) BOOL monoscopic;
@property (readonly, nonatomic) long long presentationMode;
@property (readonly, nonatomic, getter=isStereoscopic) BOOL stereoscopic;
@property (nonatomic) long long viewOrientation; // @synthesize viewOrientation=_viewOrientation;
@property (nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property (readonly, nonatomic, getter=isWorn) BOOL worn;

- (id)_initForHeld;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDisplay:(id)arg1;

@end
