//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PBPlaceholder : NSObject
{
}

+ (BOOL)isBodyPlaceholder:(int)arg1;
+ (BOOL)isTitlePlaceholder:(int)arg1;
+ (int)placeholderTypeFromTextType:(int)arg1;
+ (int)readPlaceholderOrientation:(int)arg1;
+ (int)readPlaceholderSize:(int)arg1;
+ (int)readPlaceholderType:(int)arg1;
+ (void)writePlaceholder:(id)arg1 toPlaceholderAtom:(struct PptOEPlaceholderAtom *)arg2 isMaster:(BOOL)arg3 isNotes:(BOOL)arg4;

@end
