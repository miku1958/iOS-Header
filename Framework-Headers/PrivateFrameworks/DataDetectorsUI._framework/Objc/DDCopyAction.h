//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDAction.h>

@interface DDCopyAction : DDAction
{
}

+ (BOOL)actionAvailableForContact:(id)arg1;
- (BOOL)canBePerformedWhenDeviceIsLocked;
- (id)icon;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;
- (id)localizedName;
- (void)performFromView:(id)arg1;

@end

