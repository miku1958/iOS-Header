//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OABShapeBaseManager.h>

#import <OfficeImport/OABPropertiesManager-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager>
{
    struct EshShape *mShape;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)hidden;
- (id)initWithShape:(struct EshShape *)arg1;
- (id)initWithShape:(struct EshShape *)arg1 masterShape:(struct EshShape *)arg2;
- (BOOL)isFillOK;
- (BOOL)isFilled;
- (BOOL)isShadowOK;
- (BOOL)isShadowed;
- (BOOL)isStrokeOK;
- (BOOL)isStroked;
- (BOOL)isTextPath;
- (BOOL)textPathBold;
- (id)textPathFontFamily;
- (int)textPathFontSize;
- (BOOL)textPathItalic;
- (BOOL)textPathSmallcaps;
- (BOOL)textPathStrikethrough;
- (int)textPathTextAlignment;
- (BOOL)textPathUnderline;
- (id)textPathUnicodeString;

@end
