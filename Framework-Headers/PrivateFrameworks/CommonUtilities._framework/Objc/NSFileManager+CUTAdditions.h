//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CUTAdditions)
- (BOOL)_cutIsPathOnMissingVolume:(id)arg1;
- (id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)cutRandomTemporaryPathWithFileName:(id)arg1;
- (id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
@end
