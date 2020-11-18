//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDWPExternalTextWrap : NSObject <GQDNameMappable>
{
    BOOL mFloatingWrapEnabled;
    BOOL mInlineWrapEnabled;
    float mMargin;
    float mAlphaThreshold;
    int mWrapStyle;
    int mWrapDirection;
    int mFloatingWrapType;
    int mAttachmentWrapType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec *)stateForReading;
- (float)alphaThreshold;
- (int)attachmentWrapType;
- (BOOL)floatingWrapEnabled;
- (int)floatingWrapType;
- (BOOL)inlineWrapEnabled;
- (float)margin;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (int)wrapDirection;
- (int)wrapStyle;

@end

