//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarUIKit/CUIKIconGenerator-Protocol.h>

@class NSString;

@interface CUIKDefaultIconGenerator : NSObject <CUIKIconGenerator>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_dateNameFromDateComponents:(id)arg1 calendar:(id)arg2 type:(long long)arg3;
+ (id)_dayNumberStringFromDateComponents:(id)arg1 calendar:(id)arg2;
+ (void)_drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 scale:(double)arg3 iconBase:(id)arg4 dateComponents:(id)arg5 calendar:(id)arg6 format:(long long)arg7;
+ (id)_whiteImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGImage *)iconImageWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 size:(struct CGSize)arg4 scale:(double)arg5;

@end

