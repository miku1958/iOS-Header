//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCaptionRowPresentationProperties, LPImage, UIColor;

@interface LPCaptionBarPresentationProperties : NSObject
{
    LPImage *_leadingIcon;
    UIColor *_leadingIconMaskColor;
    LPImage *_trailingIcon;
    UIColor *_trailingIconMaskColor;
    long long _leadingAccessoryType;
    long long _trailingAccessoryType;
    LPCaptionRowPresentationProperties *_aboveTop;
    LPCaptionRowPresentationProperties *_top;
    LPCaptionRowPresentationProperties *_bottom;
    LPCaptionRowPresentationProperties *_belowBottom;
}

@property (readonly, strong, nonatomic) LPCaptionRowPresentationProperties *aboveTop; // @synthesize aboveTop=_aboveTop;
@property (readonly, strong, nonatomic) LPCaptionRowPresentationProperties *belowBottom; // @synthesize belowBottom=_belowBottom;
@property (readonly, strong, nonatomic) LPCaptionRowPresentationProperties *bottom; // @synthesize bottom=_bottom;
@property (nonatomic) long long leadingAccessoryType; // @synthesize leadingAccessoryType=_leadingAccessoryType;
@property (strong, nonatomic) LPImage *leadingIcon; // @synthesize leadingIcon=_leadingIcon;
@property (strong, nonatomic) UIColor *leadingIconMaskColor; // @synthesize leadingIconMaskColor=_leadingIconMaskColor;
@property (readonly, strong, nonatomic) LPCaptionRowPresentationProperties *top; // @synthesize top=_top;
@property (nonatomic) long long trailingAccessoryType; // @synthesize trailingAccessoryType=_trailingAccessoryType;
@property (strong, nonatomic) LPImage *trailingIcon; // @synthesize trailingIcon=_trailingIcon;
@property (strong, nonatomic) UIColor *trailingIconMaskColor; // @synthesize trailingIconMaskColor=_trailingIconMaskColor;

- (void).cxx_destruct;
- (BOOL)hasAnyContent;
- (id)init;

@end

