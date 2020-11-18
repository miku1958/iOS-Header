//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL, UIImage;

@interface _WKActivatedElementInfo : NSObject
{
    struct RetainPtr<NSURL> _URL;
    struct RetainPtr<NSString> _title;
    struct CGPoint _interactionLocation;
    struct RetainPtr<NSString> _ID;
    struct RefPtr<WebKit::ShareableBitmap> _image;
    struct RetainPtr<UIImage> _uiImage;
    struct RetainPtr<NSDictionary> _userInfo;
    long long _type;
    struct CGRect _boundingRect;
}

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct CGPoint _interactionLocation;
@property (readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) NSDictionary *userInfo;

+ (id)activatedElementInfoWithInteractionInformationAtPosition:(const struct InteractionInformationAtPosition *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithInteractionInformationAtPosition:(const struct InteractionInformationAtPosition *)arg1;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 location:(struct CGPoint)arg3 title:(id)arg4 ID:(id)arg5 rect:(struct CGRect)arg6 image:(struct ShareableBitmap *)arg7;
- (id)_initWithType:(long long)arg1 URL:(id)arg2 location:(struct CGPoint)arg3 title:(id)arg4 ID:(id)arg5 rect:(struct CGRect)arg6 image:(struct ShareableBitmap *)arg7 userInfo:(id)arg8;

@end

