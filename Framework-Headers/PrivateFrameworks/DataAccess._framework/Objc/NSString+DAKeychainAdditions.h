//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (DAKeychainAdditions)
+ (id)da_new64ByteGUID;
+ (id)da_newGUID;
- (id)da_absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)arg1;
- (id)da_appendSlashIfNeeded;
- (BOOL)da_hasPrefixCaseInsensitive:(id)arg1;
- (id)da_removeSlashIfNeeded;
- (id)da_stringByAddingPercentEscapesForUsername;
- (id)da_stringByRemovingPercentEscapesForUsername;
- (id)da_stringByURLEscapingPathComponent;
- (id)da_trimWhiteSpace;
- (id)stringByURLQuoting;
@end

