//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GenerationalStorage/GSAddition.h>

@interface GSAddition (BRCAdditions)
+ (id)additionURLForName:(id)arg1 storagePrefix:(id)arg2 inConflictNamespace:(BOOL)arg3;
+ (BOOL)brc_parseAdditionFilename:(id)arg1 mangledContainerID:(id *)arg2 itemID:(id *)arg3 etag:(id *)arg4;
- (BOOL)brc_parseMangledContainerID:(id *)arg1 itemID:(id *)arg2 etag:(id *)arg3;
@end

