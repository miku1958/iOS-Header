//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface KNVisitorHelper : NSObject
{
}

+ (id)commandsForSynchronizingPlaceholdersForSlide:(id)arg1 oldMasterSlidePropertySource:(id)arg2 newMasterSlidePropertySource:(id)arg3 alwaysMatchNewMaster:(BOOL)arg4 outNewZOrderArray:(id)arg5 outPlaceholdersForTags:(id)arg6;
+ (BOOL)info:(id)arg1 hasSamePlaceholderTypeAsInfo:(id)arg2;
+ (id)infoInMasterSlidePropertySource:(id)arg1 correspondingToInfo:(id)arg2 inAbstractSlidePropertySource:(id)arg3;
+ (BOOL)infoIsPlaceholder:(id)arg1 inAbstractSlidePropertySource:(id)arg2;
+ (id)infoOnSlide:(id)arg1 correspondingToInfo:(id)arg2 inMasterPropertySource:(id)arg3;
+ (id)tagForInfo:(id)arg1 inAbstractSlidePropertySource:(id)arg2;

@end

