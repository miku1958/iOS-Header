//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class SBSApplicationShortcutIcon;

@interface UIApplicationShortcutIcon : NSObject <NSCopying>
{
    SBSApplicationShortcutIcon *_sbsShortcutIcon;
}

@property (readonly, nonatomic) SBSApplicationShortcutIcon *sbsShortcutIcon; // @synthesize sbsShortcutIcon=_sbsShortcutIcon;

+ (id)iconWithCustomImage:(id)arg1;
+ (id)iconWithCustomImage:(id)arg1 isTemplate:(BOOL)arg2;
+ (id)iconWithTemplateImageName:(id)arg1;
+ (id)iconWithType:(long long)arg1;
+ (long long)sbsIconTypeForIconType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSBSApplicationShortcutIcon:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

